#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

void Print(char Glavn[][3]);
int WinCheck(char Glavn[][3], char h);
void Robot(char Glavn[][3], char h, char f, int t);
void Player(char Glavn[][3], char h);
void Win(char Glavn[][3]);
void ListName();
void Screensaver();
void Time(float seconds);
int Menu();
void Loading();