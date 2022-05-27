#pragma once

#include <SFML/Graphics.hpp>
#include <string>
#include "../Component.hpp"

class Sprite : public Component {
    public:
        Sprite(Entity& parent, std::string name, std::string path);

        void load_texture(std::string path);

    private:
        sf::Texture Texture;
};