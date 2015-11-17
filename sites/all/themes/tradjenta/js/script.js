(function ($) {

Drupal.behaviors.tradjenta = {
  attach: function (context, settings) {
    $.fn.exists = function(){return this.length>0;}
    $(".tab-next:not(.tabs-next .inactive)").click( function() {
      if ($('.quicktabs-tabpage:not(.quicktabs-hide)').next(".quicktabs-tabpage").exists()) {
        $('.quicktabs-tabpage:not(.quicktabs-hide)').addClass('quicktabs-hide').next(".quicktabs-tabpage").removeClass('quicktabs-hide');
        $('.quicktabs-tabs li.active').removeClass('active').next().addClass('active');
      }
    });

  $(".tab-prev").click( function() {
    if ($('.quicktabs-tabpage:not(.quicktabs-hide)').prev(".quicktabs-tabpage").exists()) {
      $('.quicktabs-tabpage:not(.quicktabs-hide)').addClass('quicktabs-hide').prev(".quicktabs-tabpage").removeClass('quicktabs-hide');
      $('.quicktabs-tabs li.active').removeClass('active').prev().addClass('active');
    }
  });
var isiHelper = {
  isiElem: $('#isi-fixed'),
  isiFooterElem: $('#isi-footer'),

  //Init ISI helper
  init: function(){
    isiHelper.attachToggleHandler();
    isiHelper.attachScrollHandler();
    isiHelper.attachNavHandler();
    $(window).trigger("scroll");

  },

  //Attach handler for button that toggles visibility of ISI
  attachToggleHandler: function(){
    isiHelper.isiElem.find('#visbility-toggle').on('click touchstart', function(e){
      e.preventDefault();
      if(isiHelper.isiElem.hasClass('is-expanded')){
        isiHelper.contractFixedIsi();
      } else {
        isiHelper.expandFixedIsi();
      }
    });
  },

  //Attach scroll actions for ISI bar
  attachScrollHandler: function(){
    $(window).on('scroll touchmove', function(){

      //Hide ISI fixed once scrolled past main isi.
      if(isiHelper.isMainFooterVisible() === true){
        isiHelper.isiFooterElem.find('.m-isi-bar').removeClass('is-hidden');
        isiHelper.hideFixedIsi();
        isiHelper.contractFixedIsi();
      } else {
        isiHelper.isiFooterElem.find('.m-isi-bar').addClass('is-hidden');
        isiHelper.unhideFixedIsi();
      }

      //If partial ISI is shown, contract once user scrolls
      // if(isiHelper.isiElem.hasClass('is-semiexpanded')){
      //  isiHelper.contractFixedIsi();
      // }
    });
  },

  //Attach handler to ISI link in header nav
  attachNavHandler: function(){
    $('.expand-isi').on('click touchstart', function(e){
      e.preventDefault();
      if(isiHelper.isMainFooterVisible() === false){
        isiHelper.expandFixedIsi();
      }
    });
  },

  //Expand fixed position ISI
  expandFixedIsi: function(){
    var jscriptElem = document.getElementById("isi-fixed");

    isiHelper.isiElem.removeClass('is-semiexpanded');
    isiHelper.isiElem.addClass('is-expanded');
    isiHelper.isiElem.find('#visbility-toggle .toggle-text').html('See less');
    isiHelper.isiElem.find('#visbility-toggle .toggle-icon').html('-');
    var scrollbarWidth = jscriptElem.getElementsByClassName("m-isi-content")[0].offsetWidth - jscriptElem.getElementsByClassName("m-isi-content")[0].clientWidth;
    isiHelper.isiElem.find(".isi-wrapper").css("padding-left", scrollbarWidth / 2);
    isiHelper.isiElem.find(".l-footer-wrapper").css("padding-left", scrollbarWidth / 2);
  },

  //contract fixed position ISI
  contractFixedIsi: function(){
    isiHelper.isiElem.removeClass('is-expanded').addClass('is-semiexpanded');
    isiHelper.isiElem.find('#visbility-toggle .toggle-text').html('See more');
    isiHelper.isiElem.find('#visbility-toggle .toggle-icon').html('+');
    isiHelper.isiElem.find(".isi-wrapper").css("padding-left", 0);
    isiHelper.isiElem.find(".l-footer-wrapper").css("padding-left", 0);
  },

  //Hide fixed position ISI
  hideFixedIsi: function(){
    isiHelper.isiElem.addClass('is-hidden');
  },

  //Unhide fixed position ISI
  unhideFixedIsi: function(){
    isiHelper.isiElem.removeClass('is-hidden');
  },

  //Check to see if footer ISI is in viewport.
  isMainFooterVisible: function(){
    var scrollBottom = $(window).scrollTop() + $(window).height();
    var fixedIsiHeight = $('#isi-fixed').height();
    var isiPos = isiHelper.isiFooterElem.find('.m-isi-content').offset().top+fixedIsiHeight;
    if(scrollBottom > isiPos){
      return true;
    } else {
      return false;
    }
  }
}

/**********************************
 **   GENERAL HELPER FUNCTIONZ   **
 **********************************/

var helper = {
  getCookie: function(key) {
    if( !key ){
      return false;
    } else {
      var regex = new RegExp("(?:(?:^|.*;\\s*)" + key + "\\s*\\=\\s*([^;]*).*$)|^.*$");
      var value = document.cookie.replace(regex, "$1");
      return value;
    }
  },
  setCookie: function(key, value, path, expiration) {
    // if path is not specified, then the cookie is shared across site globally;
    // otherwise, one cookie per page.
    // if expiration is not specified, it stays until the session is over.
    if( !key ){
      return false;
    } else {
      document.cookie = key + "=" + value + "; path=" + (path ? path : "/") + (expiration ? "; expires=" + expiration : "");
      return true;
    }
  },
  unsetCookie: function(key) {
    this.setCookie(key, "", "", new Date("Thu, 01-Jan-1970 00:00:01 GMT"));
  }
}

var nav = {
  sections: [
    {
      name: "landing",
      title: "Tradjenta® (linagliptin) | For Healthcare Professionals",
      path: "/"
    },
    {
      name: "efficacy",
      title: "Efficacy | Tradjenta® (linagliptin)"
    },
    {
      name: "dosing",
      title: "Dosing | Tradjenta® (linagliptin)"
    },
    {
      name: "safety",
      title: "Safety Data | Tradjenta® (linagliptin)"
    },
    {
      name: "resources",
      title: "Resources | Tradjenta® (linagliptin)"
    },
    {
      name: "important-safety-information",
      title: "Important Safety Information | Tradjenta® (linagliptin)"
    }
  ],
  prevScrollTop: -1,
  curSection: null,
  internalLink: false,
  needsUnsettingCookie: true,
  hasTimeOut: null,
  scrollFromLink: false,

  init: function() {

    var that = this;

    if ($(".m-quasi-modal").length > 0) {
      $(".nav-cta.active").removeClass("active");
      if ($(".m-savings").length > 0) {
        $(".nav-cta.savings-cta").addClass("active");
      } else if ($(".m-access").length > 0) {
        $(".nav-cta.access-cta").addClass("active");
      }
    } else if (helper.getCookie("lastSeenOn") !== "") {
      $('body').scrollTop(helper.getCookie("lastSeenOn"));
    } else {
      // if coming from direct linked url
      var path = window.location.pathname.replace(/\//, '');
            nav.url = window.location.search;

      that.curSection = path === "" ? "landing" : path;
      if (path !== "" && $("." + path).length > 0) {
        window.setTimeout(function() {
          that.scrollTo("." + path);
          that.sections.every(function (section, i, arr) {
            if (section.name === path) {
              document.title = section.title;
              return false
            }
            return true;
          });
        }, 1000);
      }
    }
    if (window.location.pathname.indexOf('resources/glucose-conversion') > 0 || window.location.pathname.indexOf('resources/asa-easd') > 0) {
      $('.js-nav-resources').addClass('is-active');
    }
    that.fadeHeaderBg($(window).scrollTop());

    // EVENT LISTENERS START HERE!!

    $(window).on('scroll', function() {
      that.onScroll($(this).scrollTop());
    });

    $(".l-header-wrapper:not(.mobile)").hover(function() {
      $(this).addClass("active");
    });

    // $(".main-nav-item:not(.nav-cta) > a, .dropdown-item.primary > a, a.landing-cta-col, a.scroll-link").click(function(e) {
    //   e.preventDefault();
    //   nav.scrollFromLink = true;

    //   $('.main-nav-item.is-active').removeClass('is-active')
    //   $(this).parent().addClass('is-active');

    //   if ($(".m-quasi-modal").length > 0 || $(".singular").length > 0) {
    //     helper.unsetCookie("lastSeenOn");
    //     window.location = $(this).attr('href');
    //     return;
    //   }
    //   var path = this.pathname.replace(/\//, '');
    //         nav.url = window.location.search;
    //   that.scrollTo("." + (path === "" ? "landing" : path));
    // });

    $(".dropdown-item.primary").click(function(e) {
      e.preventDefault();
      if ($(".m-quasi-modal").length > 0) {
        window.location = $(this).children("a").attr('href');
      }

      if ($(".dropdown").hasClass("active")) {
        // let dropdown finishes animation before scrolling
        that.toggleDropdown($.proxy (function() {
          that.scrollTo("." + this[0].pathname.replace(/\//, ''));
          // $(".l-header-wrapper").removeClass("nav-only");
        }, $(this).children("a")));
      } else {
        that.scrollTo("." + this.pathname.replace(/\//, ''));
      }
    });

    $(".dropdown-item.secondary").click(function(e) {
      if ($(".dropdown").hasClass("active")) {
        that.toggleDropdown();
      }
    });

    $(".hamburger").click(function(e) {
      that.toggleDropdown();
    });

    $("a.quasi-modal-link").click(function(e) {
      e.preventDefault();
      helper.setCookie("lastSeenOn", $(window).scrollTop());
      that.needsUnsettingCookie = false;
      window.location = $(this).attr('href');
    });

    $(".m-quasi-modal a.back").click(function(e) {
      e.preventDefault();
      that.needsUnsettingCookie = false;
      window.location = $(this).attr('href');
    });

    window.onbeforeunload = function(e) {
      if (that.needsUnsettingCookie === true) {
        helper.unsetCookie("lastSeenOn");
      }
    }

  },
  fadeHeaderBg: function(posY) {
    if ($(".m-quasi-modal").length == 0 && $(".singular").length == 0 && posY <= 10) {
      $(".header-bg").addClass("faded");
    } else {
      $(".header-bg").removeClass("faded");
    }
  },
  scrollTo: function(selector, time, offset) {

    var that = this;
    var time = time === undefined ? 2000 : time;

      offset = (offset === undefined ? nav.getHeaderHeight() : offset);

    that.internalLink = true;
    if ($(selector).length) {
      if (selector !== ".landing")
        $(".header-bg").removeClass("faded");
      $('body, html').animate({
        scrollTop: $(selector).offset().top - offset
      }, time, function() {
        that.internalLink = false;
        if($(window).scrollTop() === 0)
        {
          that.fadeHeaderBg(0);
        }
      });
    }


  },
  onScroll: function(posY, offset) {

    var that = this;
    if (that.internalLink) {
      return;
    }

    that.fadeHeaderBg(posY);
    offset = (offset === undefined ? nav.getHeaderHeight() : offset) + 5;
    var i = that.sections.length - 1;
    while ($(".m-quasi-modal").length == 0 && $(".singular").length == 0 && i >= 0) {   // scans from bottom to top
      var section = $("." + that.sections[i].name);
      var path = that.sections[i].path === undefined ? "/" + that.sections[i].name : that.sections[i].path;
            nav.url = window.location.search;

      if (section.length && posY >= section.offset().top - offset) {
        //console.log(i);
        $('.main-nav-item.is-active').removeClass('is-active')
        $(".main-nav-item:nth-child("+i+")").addClass('is-active');

        that.setHistory(that.sections[i].name, that.sections[i].title, path);
        break;
      }
      i--;
    }

    if (that.prevScrollTop < 0) {
      that.prevScrollTop = posY;
    } else if(Math.abs(that.prevScrollTop - posY) <= 10) {
      return;
    } else if (posY > that.prevScrollTop) {
      that.onScrollDown(posY);
    } else {
      that.onScrollUp(posY);
    }
    that.prevScrollTop = posY;

  },
  setHistory: function(name, title, path) {

    var that = this;
    if (that.curSection !== name) {
      that.curSection = name;
      if(History.pushState) {
      	History.pushState(null, null, path + nav.url);
    	}
      document.title = title;
    }
  },
  onScrollDown: function(thisScrollTop) {

    var that = this;
    if (nav.scrollFromLink === false){
      $(".l-header-wrapper.active").removeClass("active");
      clearTimeout(nav.hasTimeOut);
      nav.hasTimeOut = setTimeout(function() {
        $(".l-header-wrapper").addClass("active");
      }, 100);
    }
    nav.scrollFromLink = false;
  },
  onScrollUp: function(thisScrollTop) {

    var that = this;
    $(".l-header-wrapper").addClass("active");

  },
  toggleDropdown: function(callback) {

    var lastY = 0;
    var curY = 0;
    $(".l-header-wrapper.mobile").toggleClass('nav-only');
    $(".dropdown").toggleClass("active");
    if ($(".dropdown").hasClass("active")) {
      $(".hamburger").addClass("active");
      $('body').css('overflow', 'hidden');
      $('body').addClass('modal-open');
      // only shifts the menu up and down a little upon scroll
      // while the background stays fixed
      $(window).bind("mousewheel touchmove", function(e) {
        if (e.originalEvent.touches) {
          curY = e.originalEvent.touches[0].clientY;
        }
        var delta = Math.max(-1, Math.min(1, e.originalEvent.wheelDelta || (curY - lastY)));
        lastY = curY;
        if (delta < 0) {    // scrolling down
          $(".l-header-wrapper.mobile").css("margin-top",  Math.min(($(window).height() - $(".dropdown.active").height() - $(".mobile .header-bg").height() - 150), 0));
        } else {            // scrolling up
          $(".l-header-wrapper.mobile").css("margin-top",  0);
        }
      })
    } else {
      $('body').removeClass('modal-open');
      $('body').css('overflow', 'auto');
      $(".l-header-wrapper.mobile").css("margin-top",  "");
      $(window).unbind("mousewheel touchmove");
      $(".dropdown").one("transitionend", function(e) {
        $(".hamburger").removeClass("active");
        if (callback !== undefined) {
          callback();
        }
        $(this).unbind();
      });
    }

  },
  getHeaderHeight: function(){
    //Check desktop, then mobile, if neither visible return 0
    if($('#desktop-header:visible').length){
      return $('#desktop-header').outerHeight();
    } else if($('#mobile-header:visible').length){
      return $('#mobile-header').outerHeight();
    } else {
      return 0;
    }
  }
}

var popup = {

	init: function() {
		if (!helper.getCookie("areyouhcp")) {
			$('#hcpModal').modal('show');
			$(".areyouhcp .button").click(function(e) {
				helper.setCookie("areyouhcp", 1);
			});
		}
	}

}
nav.init();
isiHelper.init();
popup.init();
  }
};

})(jQuery);


$(document).ready(function(){
			  $('a[href*=#]').click(function() {
				if (location.pathname.replace(/^\//,'') == this.pathname.replace(/^\//,'')
				&& location.hostname == this.hostname) {
				  var $target = $(this.hash);
				  $target = $target.length && $target
				  || $('[name=' + this.hash.slice(1) +']');
				  if ($target.length) {
					var targetOffset = $target.offset().top;
					$('html,body')
					.animate({scrollTop: targetOffset}, 1000);
				   return false;
				  }
				}
			  });
			});