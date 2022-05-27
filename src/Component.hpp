#pragma once

#include <string>

class Entity;
class Component {
    public:
        Component() = default;
        Component( Entity& p) : parent(&p) {}

        void set_parent(Entity& parent);
        void set_name(std::string name);

    private:
        Entity* parent;
        std::string name;
};