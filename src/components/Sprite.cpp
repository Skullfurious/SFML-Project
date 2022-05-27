#include "Sprite.hpp"

Sprite::Sprite(std::string name, std::string path) {
    this->set_name(name);
    this->Texture.loadFromFile(path);
}

void Sprite::load_texture(std::string path) {
    this->Texture.loadFromFile(path);
}