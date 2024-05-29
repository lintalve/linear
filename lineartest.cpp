#include <iostream>
#include <cstdio>
#include <string>
#include <format>
//#include "linear.h"
#include "linearwithnames.h"

using namespace std;
int main(){
    Vector3 vec1(23.543f, 64.232f, 88.543f, "vec1");
    Vector3 vec2(71.543f, 38.232f, 21.543f, "vec2");
    Vector3 vec3 = vec2;  //copying
    Vector3 vec4(1.0, 2.0, 3.0, "vec4");
    Vector3 vec5(-2.0, 4.0, -5.0, "vec5");
    int someInt{5};
    float someFloat{2.0};
    double someDouble{3.0};
    
    vec4 = vec4 * someInt;  //copying
    string vec4str = format("({0}, {1}, {2})", vec4.getX(), vec4.getY(), vec4.getZ());
    cout << vec4str << endl;
    //evaluating the expression to a temp object and copying it with '='
    Vector3 vec6("vec6");
    vec6 = vec4 + vec5;   //Copying vector!!!
    
    string vec6str = format("({}, {}, {})", vec6.getX(), vec6.getY(), vec6.getZ());
    cout << vec6str << endl;
    return 0;
}
