#include <vector>
#include <string>
#include <Component.hpp>
#include <Entity.hpp>

std::string Entity::get_name() {
    return this->name;
}

std::vector<Component> Entity::get_components() {
    return this->components;
}

void Entity::add_component(const Component& component) {
    this->components.emplace_back(component);
}