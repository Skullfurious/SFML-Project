#pragma once

#include <string>
#include "Entity.hpp"

class Component {
    public:
        void set_parent(const Entity&);
    private:
        Entity parent;
        std::string name;

};