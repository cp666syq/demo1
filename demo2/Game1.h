#pragma once
#include "SFML\Window.hpp"
#include "SFML\Graphics.hpp"

class Game
{
public:
	static void Start();

private:
	static bool IsExiting();
	static void GameLoop();

	static void ShowSplashScreen();//开始制作开始背景后添加
	static void ShowMenu();//开始制作主菜单后增加

	enum GameState {
		Uninitialized, ShowingSplash, Paused,
		ShowingMenu, Playing, Exiting
	};

	static GameState _gameState;
	static sf::RenderWindow _mainWindow;
};
