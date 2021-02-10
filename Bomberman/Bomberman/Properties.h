#ifndef PROPERTIES_H
#define PROPERTIES_H
#pragma once
#include <windows.h>
#include <algorithm>
#include <iostream>
#include <numeric>
#include <thread>
#include <chrono>
#include <vector>
#include <string>
#include <memory>
#include <random>
#include <array>
#include "Types.h"
#include "Colors.h"

_ID				IDI_ICON_1					=	1;
_ID				START_BUTTON				=	3000;
_ID				PAUSE_BUTTON				=	3001;

HINSTANCE		hInst;													//	current instance
HWND			hWnd, hEdit, hInfo, HButton1, HButton3, Hmainbmp;		//	parent window

LPCTSTR			lpszAppName					=	"PARALLEL PROGRAMMING";
LPCTSTR			lpszTitle					=	"BOMBERMAN";


_SIZE			WINDOW_WIDTH				=	700;
_SIZE			WINDOW_HEIGHT				=	700;

_SIZE			GAME_WIDTH					=	650;
_SIZE			GAME_HEIGHT					=	550;


int				PRESSED_KEY					=	0;
int				RELEASED_KEY				=	0;


_BOOL			GAME_STARTED				=	false;

constexpr _SIZE	PLAYER_COUNT				=	2;

constexpr int	FRAME_COUNT					=	30;



_BOOL			PLAYER_DIRECTION_LEFT		=	false;
_BOOL			PLAYER_DIRECTION_RIGHT		=	false;
_BOOL			PLAYER_DIRECTION_UP			=	false;
_BOOL			PLAYER_DIRECTION_DOWN		=	false;

int				PLAYER_SPEED				=	2;

_SIZE			PLAYER_WIDTH				=	30;
_SIZE			PLAYER_HEIGHT				=	30;

COLOR			BG_COLOR					=	BLACK;


constexpr int	WALL_COUNT					=	30;
_SIZE			WALL_COLOR					=	GREY;
_SIZE			WALL_WIDTH					=	50;			
_SIZE			WALL_HEIGHT					=	50;			

constexpr int	BRICK_COUNT					=	44 + 25 + 18 + 14 + 6;
_SIZE			BRICK_COLOR					=	BROWN;
_SIZE			BRICK_WIDTH					=	50;			
_SIZE			BRICK_HEIGHT				=	50;			


int				LEFT						=	1515;
int				RIGHT						=	1516;
int				UP							=	1517;
int				DOWN						=	1518;

#endif //!PROPERTIES_H