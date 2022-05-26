#pragma once

#include <vector>
#include <string>
#include "Component.hpp"

class Entity {
    public:
        Entity(const std::string& value) : name(value) {}
        Entity(const Entity& entity) : name(entity.name) {
            components = entity.components;
            // For the debug verbose variant add a print statement here.
            }

        std::string get_name();
        std::vector<Component> get_components();
        void add_component(const Component&);

    private:
        std::string name;
        std::vector<Component> components;
};