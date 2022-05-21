#include "Util.hpp"

Util::Vector3::Vector3(float x, float y, float z) {
    m_x = x; 
    m_y = y;
    m_z = z;
}

Util::Vector3 Util::Vector3::add(Vector3 v) {
    return Vector3(m_x + v.m_x, m_y + v.m_y, m_z + v.m_z);
}

Util::Vector3 Util::Vector3::add(float xv, float yv, float zv) {
    return Vector3(m_x + xv, m_y + yv, m_z + zv);
}