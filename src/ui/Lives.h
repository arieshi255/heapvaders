﻿// Generated by HLC 4.1.4 (HL v5)
#ifndef INC_ui__Lives
#define INC_ui__Lives
typedef struct _ui__$Lives *ui__$Lives;
typedef struct _ui__Lives *ui__Lives;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <_std/Game.h>
#include <h2d/Font.h>
#include <h2d/Text.h>


struct _ui__$Lives {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _ui__Lives {
	hl_type *$type;
	Game game;
	h2d__Font font;
	h2d__Text tf;
};
#endif
