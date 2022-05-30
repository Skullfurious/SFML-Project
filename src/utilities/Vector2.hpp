#pragma once
#include <cmath>

template <class T>
class Vector2 {
    public:
        T x, y, z;
        
        Vector2(T xv, T yv): x(xv), y(yv) {};
        
        //Simple Operations
        Vector2<T> operator +(const Vector2<T> &that) const {
            return Vector2<T>(this->x + that.x, this->y + that.y);
        }
        
        Vector2<T> operator -(const Vector2<T> &that) const {
            return Vector2<T>(this->x - that.x, this->y - that.y);
        }

        Vector2<T> operator *(const Vector2<T> &that) const {
            return Vector2<T>(this->x * that.x, this->y * that.y);
        }

        Vector2<T> operator /(const Vector2<T> &that) const {
            return Vector2<T>(this->x / that.x, this->y / that.y);
        }

        Vector2<T> operator %(const Vector2<T> &that) const {
            return Vector2<T>(this->x % that.x, this->y % that.y);
        }        

        // Methods

        float length() const {
            float length = ((this->x * this->x) + (this->y * this->y));
            return sqrt(length);
        }

        float distance(const Vector2<T> &that) const {
            return((*this - that).length());
        }

        float dot(const Vector2<T> &that) const {
            return ((this->normalize().x * that.normalize().x) + (this->normalize().y * that.normalize().y));
        }

        Vector2<T> normalize() const {
            float len = this->length();
            return Vector2<T>((this->x / len), (this->y / len));
        }

};