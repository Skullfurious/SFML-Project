#include "Sprite.hpp"
#include "../Entity.hpp"

Sprite::Sprite(Entity& parent, std::string name, std::string path) 
    : Component(parent, name) {
        this->Texture.loadFromFile(path);
}

void Sprite::load_texture(std::string path) {
    this->Texture.loadFromFile(path);
}