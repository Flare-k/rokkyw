// stdafx.h : 자주 사용하지만 자주 변경되지는 않는
// 표준 시스템 포함 파일 또는 프로젝트 관련 포함 파일이
// 들어 있는 포함 파일입니다.
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // 거의 사용되지 않는 내용은 Windows 헤더에서 제외합니다.
// Windows 헤더 파일:
#include <windows.h>

// C 런타임 헤더 파일입니다.
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>
#include <Windows.h>
#include <math.h>
#include <time.h>


// TODO: 프로그램에 필요한 추가 헤더는 여기에서 참조합니다.
#include "KeyManager.h"
#define KEYMANAGER KeyManager::getSingleton()

#define WINNAME (LPTSTR)(TEXT("Paint Application"))
#define WINSTARTX 0
#define WINSTARTY 0
#define WINSIZEX 1280
#define WINSIZEY 720
#define WINSTYLE WS_CAPTION | WS_SYSMENU | WS_BORDER

enum eDrawState { IDLE, ING };
enum eShapeState { NONE, RECTANGLE, CIRCLE, CIRCLE_PASSIVE, POLYGON };

extern HINSTANCE ghInst;
extern HWND		 ghWnd;
extern HDC		 BackDC;
extern eDrawState draw;
extern eShapeState shape;

#include "MyUtil.h"
using namespace MyUtil;

#include "BaseNode.h"
#include "CircleNode.h"
#include "RectangleNode.h"
#include "PolygonNode.h"

#include "HeterogeneousList.h"
#include "HtgListIterator.h"

#include "Application.h"