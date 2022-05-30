#include <SFML/Graphics.hpp>
#include <iostream>
#include "utilities/Vector2.hpp"

int main()
{
    Vector2<float> vec(0,3);
    std::cout << vec.dot(Vector2<float>(3,0)) << std::endl;
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