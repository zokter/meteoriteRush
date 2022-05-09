#pragma once
#include "Entity.h"
class Player :
    public Entity
{
private:
    sf::CircleShape body;
    sf::RectangleShape gun;
    
    void rotate(float angle);

public:
    Player();
    void shoot();
    void update(const sf::Window& window);
    void draw(sf::RenderTarget& target);
};



