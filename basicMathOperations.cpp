//Created by Malik Jensen
#include <iostream>
#include "basicMathOperations.hpp"
//import basicmath class from basicMathOperations.hpp
BasicMath::BasicMath() : result(0){}
//Define the functions sum, sub, mult and div
int BasicMath::sumValues(int a, int b){
    return a + b;
}
int BasicMath::subValues(int a, int b){
    return a - b;
}
int BasicMath::divValues(int a, int b){
    return a / b;
}
int BasicMath::multValues(int a, int b){
    return a * b;
}

//Define factorial ! method for BasicMath class
int BasicMath::factorialValue(int a){
    int b = 1;
    int count = 0;
    while(count < a){
        count++;
        b = b * count;
        std::cout << count << "\n";
    }
    return b;
}