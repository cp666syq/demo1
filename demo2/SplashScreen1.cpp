#include "stdafx1.h"
#include "SplashScreen1.h"


void SplashScreen::Show(sf::RenderWindow& renderWindow)
{
    sf::Texture image;
    if (image.loadFromFile("C:/Users/ʷӢ��godmin/Desktop/�¶�ҡ��-������/�¶�ҡ��-������/��ʼ�˵�����/1.png") != true)
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