#include <stdio.h>
#include <vector>
#include <stdlib.h>
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float temp1,temp2;
    char a;
    std::cout << "Enter the Numbers" << std::endl;
    std::cin >> temp1;
    std::cout << " Enter the Opretation: " << std::endl;
    std::cin >> a;
    cin >> temp2;
    if (a=='+'){
        //case 1 addition
        std::cout << temp1+temp2<<"\n";
    } else if (a=='-'){
        //case 2 substraction
        std::cout<< temp1-temp2 << "\n";
    } else if (a=='/'){
        //division 
        std::cout<< temp1/temp2 <<"\n";
    } else if (a=='x'){
        //multiply
        std::cout<< temp1*temp2<<"\n";
    }
    return 0;
}