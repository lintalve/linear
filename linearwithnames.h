
#ifndef LINEAR_H
#define LINEAR_H
#include <cstdio>
#include <iostream>
#include <string>




class Vector3{
    static const int size = 3;
    double vector[size] {};
    std::string name = "name";
public:
    Vector3(std::string name = "vector") {
        vector[0] = 0.0;
        vector[1] = 0.0;
        vector[2] = 0.0;
    }
    Vector3(float x, float y, float z, std::string instance_name = "vector") {
        std::cout << "initialising vector " << name << std::endl;
        name = instance_name;
        vector[0] = static_cast<double>(x);
        vector[1] = static_cast<double>(y);
        vector[2] = static_cast<double>(z);
    }
    Vector3(double x, double y, double z, std::string instance_name = "vector") {
        std::cout << "initialising vector " << name << " from doubles" << std::endl;
        name = instance_name;
        vector[0] = x;
        vector[1] = y;
        vector[2] = z;
    }
    Vector3(const Vector3& v, std::string instance_name = "vector") {
        std::cout << "copying vector " << v.getName() << std::endl;
        name = instance_name;
        vector[0] = v.vector[0];   //it is interresting that you can
        vector[1] = v.vector[1];   //access private variables of other object
        vector[2] = v.vector[2];   //from a member function
    }
    double getX() const { return vector[0]; }
    double getY() const { return vector[1]; }
    double getZ() const { return vector[2]; }
    std::string getName() const { return name; }
    void setX(double x) { vector[0] =x; }
    void setY(double y) { vector[1] =y; }
    void setZ(double z) { vector[2] =z; }
    void setName(std::string instance_name) { name = instance_name; }
    //---Operator Overloading---//
    Vector3 operator+(const Vector3& rv) {
        std::cout << "left vector + " << std::endl;
        vector[0] += rv.vector[0];
        vector[1] += rv.vector[1];
        vector[2] += rv.vector[2];
        return *this;
    }
    Vector3 operator-(const Vector3& rv) {
        vector[0] += -(rv.vector[0]);
        vector[1] += -(rv.vector[1]);
        vector[2] += -(rv.vector[2]);
        return *this;
    }
    Vector3 operator*(const int& rvint) {
        vector[0] *= rvint;
        vector[1] *= rvint;
        vector[2] *= rvint;
        return *this;
    }
    Vector3 operator*(const float& rvfloat) {
        vector[0] *= rvfloat;
        vector[1] *= rvfloat;
        vector[2] *= rvfloat;
        return *this;
    }
    Vector3 operator*(const double& rvdouble) {
        vector[0] *= rvdouble;
        vector[1] *= rvdouble;
        vector[2] *= rvdouble;
        return *this;
    }
    Vector3 operator*=(const int& rvint) {
        vector[0] *= rvint;
        vector[1] *= rvint;
        vector[2] *= rvint;
        return *this;
    }
    //bool operator<
    ~Vector3() {
        std::cout << "destructing vector " << this->getName() << std::endl;
    }
};

class Matrix3{
    static const int size {9};
    double matrix[size];
public:
    
};
#endif// LINEAR_H
