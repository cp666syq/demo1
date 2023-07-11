#pragma once
#include "stdafx1.h"
const int BodyMaxLong = 2000;        //最长蛇身
const int SnakeInitLongth = 10;      //初始蛇身
const sf::Vector2f SnakeInitPos = { 200,200 }; //蛇头初始位置
const int BodyRadius = 7;             //蛇身半径
const sf::Vector2i WindowSize = { 1024,768 };
const int FoodRadius = 5;
const int FoodNum = 50;
#define SnakeColor sf::Color::Red
#define FoodColor sf::Color::Black
