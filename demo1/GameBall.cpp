#include "StdAfx.h"
#include "GameBall.h"


GameBall::GameBall()
{
	Load("C:/Users/ʷӢ��godmin/Desktop/��д����/��Ϸʵѵ/demo1/GameBall.png");
	assert(IsLoaded());

	GetSprite().setOrigin(15, 15);
}


GameBall::~GameBall()
{
}