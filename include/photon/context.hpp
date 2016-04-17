/*=================================================================================================   Copyright (c) 2016 Joel de Guzman   Licensed under a Creative Commons Attribution-ShareAlike 4.0 International.   http://creativecommons.org/licenses/by-sa/4.0/=================================================================================================*/#if !defined(PHOTON_GUI_LIB_CONTEXT_APRIL_17_2016)#define PHOTON_GUI_LIB_CONTEXT_APRIL_17_2016#include <photon/point.hpp>#include <photon/rect.hpp>#include <photon/theme.hpp>// forwardstruct NVGcontext;namespace photon{	////////////////////////////////////////////////////////////////////////////////////////////////	// context	////////////////////////////////////////////////////////////////////////////////////////////////   class window;   class app;   class widget;   struct context   {      context(context const& parent_, widget* widget_, rect& bounds_)       : window(parent_.window), widget(widget_), parent(&parent_), bounds(bounds_)      {}      context(window& window_, widget* widget_, rect& bounds_)       : window(window_), widget(widget_), parent(0), bounds(bounds_)      {}      point                cursor_pos() const;      NVGcontext*          canvas() const;      theme const&         theme() const;      window&              window;      mutable widget*      widget;      context const*       parent;      rect&                bounds;   };}#endif