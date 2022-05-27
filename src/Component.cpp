#include "Component.hpp"

void Component::set_parent(Entity& entity) {
    this->parent = &entity;
}

void Component::set_name(std::string name) {
    this->name = name;
}