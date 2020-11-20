﻿// Generated by HLC 4.1.4 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <ui/Lives.h>
#include <ent/Player.h>
extern String s$Lives_;
extern hl_type t$_i32;
String Std_string(vdynamic*);
String String___add__(String,String);
String h2d_Text_set_text(h2d__Text,String);
#include <_std/Game.h>
#include <h2d/Object.h>
#include <h2d/Align.h>
#include <h2d/Scene.h>
h2d__Font hxd_res_DefaultFont_get(void);
extern $Game g$_Game;
extern hl_type t$h2d_Text;
void h2d_Text_new(h2d__Text,h2d__Font,h2d__Object);
extern venum* g$h2d_Align_Left;
venum* h2d_Text_set_textAlign(h2d__Text,venum*);
#include <h2d/Layers.h>
void h2d_Layers_addChild(h2d__Layers,h2d__Object);

void ui_Lives_updateLives(ui__Lives r0) {
	String r1, r3;
	Game r6;
	h2d__Text r2;
	ent__Player r5;
	vdynamic *r7;
	int r4;
	r2 = r0->tf;
	if( r2 == NULL ) hl_null_access();
	r1 = (String)s$Lives_;
	r6 = r0->game;
	if( r6 == NULL ) hl_null_access();
	r5 = r6->player;
	if( r5 == NULL ) hl_null_access();
	r4 = r5->lives;
	r7 = hl_alloc_dynamic(&t$_i32);
	r7->v.i = r4;
	r3 = Std_string(r7);
	r1 = String___add__(r1,r3);
	r1 = h2d_Text_set_text(r2,r1);
	return;
}

void ui_Lives_new(ui__Lives r0,int r1,int r2) {
	String r13, r14;
	$Game r5;
	Game r4;
	venum *r12;
	bool r9;
	h2d__Object r7;
	h2d__Text r6;
	h2d__Font r3;
	ent__Player r15;
	double r10;
	h2d__Scene r17;
	vdynamic *r16;
	int r11;
	r3 = hxd_res_DefaultFont_get();
	r0->font = r3;
	r5 = ($Game)g$_Game;
	r4 = r5->inst;
	r0->game = r4;
	r6 = (h2d__Text)hl_alloc_obj(&t$h2d_Text);
	r3 = r0->font;
	r7 = NULL;
	h2d_Text_new(r6,r3,r7);
	r0->tf = r6;
	r6 = r0->tf;
	if( r6 == NULL ) hl_null_access();
	r9 = true;
	r6->posChanged = r9;
	r10 = 4.;
	r6->scaleX = r10;
	r9 = true;
	r6->posChanged = r9;
	r10 = 4.;
	r6->scaleY = r10;
	r6 = r0->tf;
	if( r6 == NULL ) hl_null_access();
	r9 = true;
	r6->posChanged = r9;
	r10 = (double)r1;
	r6->x = r10;
	r6 = r0->tf;
	if( r6 == NULL ) hl_null_access();
	r9 = true;
	r6->posChanged = r9;
	r10 = (double)r2;
	r6->y = r10;
	r6 = r0->tf;
	if( r6 == NULL ) hl_null_access();
	r12 = (venum*)g$h2d_Align_Left;
	r12 = h2d_Text_set_textAlign(r6,r12);
	r6 = r0->tf;
	if( r6 == NULL ) hl_null_access();
	r13 = (String)s$Lives_;
	r4 = r0->game;
	if( r4 == NULL ) hl_null_access();
	r15 = r4->player;
	if( r15 == NULL ) hl_null_access();
	r11 = r15->lives;
	r16 = hl_alloc_dynamic(&t$_i32);
	r16->v.i = r11;
	r14 = Std_string(r16);
	r13 = String___add__(r13,r14);
	r13 = h2d_Text_set_text(r6,r13);
	r4 = r0->game;
	if( r4 == NULL ) hl_null_access();
	r17 = r4->scene;
	if( r17 == NULL ) hl_null_access();
	r6 = r0->tf;
	h2d_Layers_addChild(((h2d__Layers)r17),((h2d__Object)r6));
	return;
}

