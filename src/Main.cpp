#include <SFML/Graphics.hpp>
#include <iostream>
#include "Util.hpp"

int main()
{
    std::cout << Util::Vector3(0,0,0).add(1.5,1.0,1.0).m_x << std::endl;
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}