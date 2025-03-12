//Created by Malik Jensen
#include <iostream>
#include <C:\Users\Malik\Desktop\statculator\basicMathOperations.hpp>
//import basicmath class from basicMathOperations.hpp
BasicMath::BasicMath() : result(0){}
//Define the functions sum, sub, mult and div
int BasicMath::sumValues(int a, int b){
    std::cout << a + b;
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