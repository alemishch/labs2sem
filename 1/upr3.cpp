#include <iostream>

int main()
{
    std::cout << "Enter N" << std::endl;
    int N;
    std::cin >> N;
    int i = 0;
    int j = 0;
    while(i < N){
        while(j < N){
            std::cout << "*";
            j++;
        }
        std::cout << std::endl;
        j = 0;
        i++;
    }
    return 0;
}
