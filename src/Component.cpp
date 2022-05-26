#include "Component.hpp"

void Component::set_parent(const Entity& entity) {
    this->parent = entity;
}