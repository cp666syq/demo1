#include "stdafx.h"
#include "PlayerPaddle.h"
#include "Game.h"


PlayerPaddle::PlayerPaddle():
	_velocity(0),
	_maxVelocity(600.0f)
{
	Load("C:/Users/ʷӢ��godmin/Desktop/��д����/��Ϸʵѵ/demo1/paddle.png");
    assert(IsLoaded());

	sf::Vector2f spriteSize = GetSprite().getLocalBounds().getSize();
	GetSprite().setOrigin(spriteSize.x / 2, spriteSize.y / 2);
}


PlayerPaddle::~PlayerPaddle()
{
}

void PlayerPaddle::Draw(sf::RenderWindow& rw)
{
    VisibleGameObject::Draw(rw);
}

float PlayerPaddle::GetVelocity() const
{
    return _velocity;
}

void PlayerPaddle::Update(float elapsedTime)//����������ж�
{

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
        _velocity -= 3.0f;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
    {
        _velocity += 3.0f;
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
    {
        _velocity = 0.0f;
    }

    if (_velocity > _maxVelocity)
        _velocity = _maxVelocity;

    if (_velocity < -_maxVelocity)
        _velocity = -_maxVelocity;


    sf::Vector2f pos = this->GetPosition();

    if (pos.x  < GetSprite().getLocalBounds().getSize().x / 2
        || pos.x >(Game::SCREEN_WIDTH - GetSprite().getLocalBounds().getSize().x / 2))
    {
        _velocity = -_velocity; // Bounce by current velocity in opposite direction
    }

    GetSprite().move(_velocity * elapsedTime*1000, 0);//��ʾ�Ի������һ֡����������ʱ����
}
