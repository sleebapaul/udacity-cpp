/*Goal: practice arithmetic operations in C++
**Write a program that calculates the volumes of:
**a cube, sphere, cone.
**Cube Volume = side^3
**Sphere Volume = (4/3) * pi * radius^3
**Cone Volume = pi * radius^2 * (height/3)
**Write the values to the console.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //Dimension of the cube
    float cubeSide = 5.4;
    //Dimension of sphere
    float sphereRadius = 2.33;
    //Dimensions of cone
    float coneRadius = 7.65;
    float coneHeight = 14;

    float volCube, volSphere, volCone = 0;

    volCube = pow(cubeSide, 3);
    volSphere = pow(sphereRadius, 3) * (4.0 / 3.0) * M_PI;
    volCone = pow(coneRadius, 2) * (coneHeight / 3) * M_PI;
    cout << volCube << "\n";
    cout << volSphere << "\n";
    cout << volCone << "\n";

    float width = 4.5;
    float height = 5.5;

    int area = width * height;
    std::cout << "area = " << area;

    for (int i=0; i<101; i++){
        cout<<"SORRY\n";
    }

    return 0;
}