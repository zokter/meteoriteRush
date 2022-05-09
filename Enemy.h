#pragma once
#include "Entity.h"
class Enemy :
    public Entity
{

private:
    sf::CircleShape body;
    float speed;
    float radius;
    float x;
    float y;


public:
    Enemy(float x, float y, float speed, float radius);
    void update(const sf::Window& window);
    void draw(sf::RenderTarget& target);

};

