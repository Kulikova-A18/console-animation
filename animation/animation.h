#pragma once

#define _CRT_SECURE_NO_WARNINS

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>
#include <string.h>
#include <cmath>
#include <iomanip>

std::string picture_1();
std::string picture_2();
std::string picture_3();
std::string picture_4();
std::string picture_5();
std::string picture_6();
std::string picture_7();
std::string picture_8();
std::string picture_9();

void show_all();
class ClassAnimation
{
	public:
		std::string show_picture = "";

		void show() {
			std::cout << show_picture;
		}
};