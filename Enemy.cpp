#include <cmath>
#include "Enemy.h"
#include <iostream>

Enemy::Enemy(float x, float y, float speed, float radius)
{
	this->speed = speed;
	this->x = x;
	this->y = y;
	body.setOrigin(radius, radius);
	body.setPosition(x, y);
	body.setRadius(radius);
	body.setFillColor(sf::Color(156, 252, 206, 255));


	std::cout << x << "\t" << y << std::endl;

}

void Enemy::update(const sf::Window& window)
{
	sf::Vector2f c;
	c.x = 400.f - x;
	c.y = 300.f - y;
	float hip = sqrt(c.x * c.x + c.y * c.y);
	float dx = c.x / hip;
	float dy = c.y / hip;
	body.move(dx * speed,dy * speed);
}

void Enemy::draw(sf::RenderTarget& target)
{
	target.draw(body);
}
