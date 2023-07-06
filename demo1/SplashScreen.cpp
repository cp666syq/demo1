#include "stdafx.h"
#include "SplashScreen.h"


void SplashScreen::Show(sf::RenderWindow& renderWindow)
{
    sf::Texture image;
    if (image.loadFromFile("C:/Users/史英琦godmin/Desktop/孤独摇滚-美化包/孤独摇滚-美化包/开始菜单背景/1.png") != true)
    {
        return;
    }

    sf::Sprite sprite(image);

    renderWindow.draw(sprite);
    renderWindow.display();

    sf::Event event;
    while (true)
    {
        while (renderWindow.pollEvent(event))
        {
            if (event.type == sf::Event::EventType::KeyPressed
                || event.type == sf::Event::EventType::MouseButtonPressed
                || event.type == sf::Event::EventType::Closed)
            {
                return;
            }
        }
    }
}