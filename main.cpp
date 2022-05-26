#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include "Player.h"
#include "Enemy.h"


int main()
{
    Player player;
    
    std::vector<Enemy> queue;
    for (int i = 0; i < 100; i++) {
        Enemy a(std::rand() / 1e5 * 800, std::rand() / 1e5 * 600, std::rand() / 1e5 * 20, 10.f);
        queue.push_back(a);
    }


    sf::RenderWindow window(sf::VideoMode(800, 600), "SLAVA UKRAIN");
    window.setFramerateLimit(45);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();
        
        
        player.update(window);
        player.draw(window);

        for (size_t i = 0; i < queue.size(); i++) {
            queue[i].update(window);
            queue[i].draw(window);
        }
        std::cout << "kek" << std::endl;
        window.display();
    }

    return 0;
}