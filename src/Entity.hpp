#pragma once

class Entity {
    public:
        Entity(const std::string& value) : name(value) {}

        std::string get_name();
        std::vector<Component> get_components();
        void add_component(const Component&);

    private:
        std::string name;
        std::vector<Component> components;
};