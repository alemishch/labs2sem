#include <iostream>
#include <math.h>

int main(){
    std::cout << "Enter legs" << std::endl;
    int x, y;
    std::cin >> x >> y;
    float z = sqrt(pow(x, 2) + pow(y, 2));
    std::cout << z << std::endl;
    return 0;
}
