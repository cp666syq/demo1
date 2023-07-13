#include "StdAfx.h"
#include "GameBall.h"


GameBall::GameBall()
{
	Load("C:/Users/史英琦godmin/Desktop/编写程序/游戏实训/demo1/GameBall.png");
	assert(IsLoaded());

	GetSprite().setOrigin(15, 15);
}


GameBall::~GameBall()
{
}