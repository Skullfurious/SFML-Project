#pragma once

#include <string>

class Entity;
class Component {
    public:
        Component( Entity& parent, std::string name) 
            : parent(&parent), name(name) {}

        void set_parent(Entity& parent);
        void set_name(std::string name);

    private:
        Entity* parent;
        std::string name;
};