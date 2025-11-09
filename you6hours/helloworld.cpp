#include <iostream>

int main(){
    //const keyword makes only read only. Protects from changing
    const double PI = 3.14159;
    double radius = 10;
    double circumference = 2 * PI * radius;
    std::cout << circumference <<" cm"<< std::endl;
    return 0;
}