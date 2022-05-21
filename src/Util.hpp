#pragma once

namespace Util
{
    class Vector3 {
        public:
            Vector3(float x, float y, float z);
            Vector3 add(Vector3 value);
            Vector3 add(float x, float y, float z);
            float m_x, m_y, m_z;
    };  
}