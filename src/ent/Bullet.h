﻿// Generated by HLC 4.1.4 (HL v5)
#ifndef INC_ent__Bullet
#define INC_ent__Bullet
typedef struct _ent__$Bullet *ent__$Bullet;
typedef struct _ent__Bullet *ent__Bullet;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <ent/Actor.h>
#include <_std/Game.h>
#include <h2d/Object.h>
#include <h2d/Bitmap.h>
#include <h2d/Font.h>
#include <h2d/Text.h>


struct _ent__$Bullet {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	int SPEED;
};
struct _ent__Bullet {
	hl_type *$type;
	Game game;
	double x;
	double y;
	double scale;
	h2d__Object spr;
	int dir;
	bool enemy;
	h2d__Bitmap bullet;
	bool gone;
	double timer;
	double timeOut;
	h2d__Font font;
	h2d__Text tf;
};
#endif

