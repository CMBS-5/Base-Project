#pragma once

#ifndef UTILS_H
#define UTILS_H

#include<bits/stdc++.h>

//游戏状态
enum GameState { playing, stopping, ended };

//场景模式：前厅，后厅，书房，骨房，东卧室，西卧室
enum SceneMode { frontHall, backHall, studyRoom, boneRoom, eastBedRoom, westBedRoom };

//场景界面窗口大小
const int WINDOW_WIDTH = 1200;
const int WINDOW_HEIGHT = 800;

//设置界面窗口大小
const int SETTING_WINDOW_WIDTH = 600;
const int SETTING_WINDOW_HEIGHT = 400;

//图片读取并在窗口中显示



#endif // UTILS_H