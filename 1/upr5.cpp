#include <iostream>

int main(){
    int j = 0;
    int N;
    std::cout << "Enter N" << std::endl;
    std::cin >> N;
    int i = 0;
    while (i < N/2+1){
        while(j<=i){
            std::cout << " ";
            j++;
        }
        while(j <= N-i){
            std::cout << "*";
            j++;
        }
        std::cout << std::endl;
        j = 0;
        i++;
    }
}
