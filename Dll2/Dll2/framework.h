﻿#pragma once

#define WIN32_LEAN_AND_MEAN             // 从 Windows 头文件中排除极少使用的内容
// Windows 头文件
#include <windows.h>
#include <iostream>
#include <string>
#include "detours.h"
#include <WinSock2.h>
#include <Windows.h>
using namespace std;
#pragma comment(lib,"ws2_32.lib")
#pragma comment(lib, "detours.lib")