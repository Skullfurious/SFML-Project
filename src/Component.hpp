#pragma once

#include <string>

class Entity;
class Component {
    public:
        Component( Entity& p) : parent(&p) {}

        void set_parent(Entity&);

    private:
        Entity* parent;
        std::string name;
};