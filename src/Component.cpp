#include "Component.hpp"

void Component::set_parent(Entity& entity) {
    this->parent = &entity;
}