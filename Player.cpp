#include <iostream>
#include <cmath>
#include "Player.h"

#define PI 3.1415926535897932384626433832795028841971693

void Player::rotate(float angle)
{
	gun.setRotation(angle);
}

Player::Player() {

	body.setRadius(40.f);
	body.setFillColor(sf::Color::Cyan);
	body.setOrigin(40.f, 40.f);
	body.setPosition(400.f, 300.f);

	gun.setSize(sf::Vector2f(30.f, 20.f));
	gun.setOrigin(sf::Vector2f(-40.f, 10.f));
	gun.setPosition(body.getPosition());

}

void Player::update(const sf::Window& window) {
	auto mousePos = sf::Mouse::getPosition(window);
	float x2 = body.getPosition().x - mousePos.x;
	float y2 = body.getPosition().y - mousePos.y;
	//std::cout << "x2: " << x2 << "\t" << "y2: " << y2 << std::endl;
	float tg = y2/x2;
	float angle = atan(tg) * (180.f / PI);
	x2 >= 0 ? angle += 180 : angle;
	//std::cout << "angle: " << angle << std::endl;
	rotate(angle);
}


void Player::shoot() {

}

void Player::draw(sf::RenderTarget& target)  {
	target.draw(body);
	target.draw(gun);
}