#include <iostream>

int main(){
    int x; //decleration
    x = 5; //assignment
    int y = 6;
    int sum = x + y;
    std::cout << x << std::endl;
    std::cout << y << std::endl;
    std::cout << sum << std::endl;
    //integer (whole number) approximately 4 bytes from -2billion to +2 billions
    //double (including decimal) approximately 8 bytes precion is about 15 to 16 decimal digits
    double temperature = 25.1;
    std::cout << temperature << std::endl;
    char grade = 'A';
    std::cout << grade<<'\n';
    bool is_student = false;
    std::cout << is_student << std::endl;
    std::string name = "Symbat";
    std::cout << name << std::endl;
    return 0;
}