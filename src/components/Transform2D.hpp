#include <vector>
#include "../Component.hpp"
#include "../utilities/Vector2.hpp"

class Transform2D : public Component {
    public:
        Transform2D(Vector2<float> l, Vector2<float> s, Vector2<float> r) : location(l), rotation(r), scale(s) {}
 
        Vector2<float> location;
        Vector2<float> scale;
        Vector2<float> rotation;
};