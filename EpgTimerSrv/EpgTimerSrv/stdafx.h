// stdafx.h : 標準のシステム インクルード ファイルのインクルード ファイル、または
// 参照回数が多く、かつあまり変更されない、プロジェクト専用のインクルード ファイル
// を記述します。
//

#pragma once

#include "targetver.h"

#define WRAP_OUTPUT_DEBUG_STRING
#include "../../Common/Common.h"
#include <commctrl.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#pragma comment(lib, "comctl32.lib")
#pragma comment(lib, "Ws2_32.lib")
