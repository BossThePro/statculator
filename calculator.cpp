//Created by Malik Jensen
//Currently this implementation is quite bad but will be improved later on, just working on getting something that works for now.
#include <iostream>
#include <string>
#include <C:\Users\Malik\Desktop\statculator\basicMathOperations.hpp>
int main(){
    //Creating integers and operator
    int int1, int2;
    char opr1;
    int result;
    //Calling constructor BasicMath and setting it to a temp variable (test)
    BasicMath test;

    std::cout << "Please enter two values and an expression (e.g. 20 + 20)\n";
    std::cout << "Supported operations are (+, -, *, /)\n";
    std::cout << "Input first value: ";
    std::cin >> int1;
    std::cout << "\n Input an operator (+, -, *, /): ";
    std::cin >> opr1;
    std::cout << "\n Input second value: ";
    std::cin >> int2;

    if(opr1 == '+'){
        result = test.sumValues(int1, int2);
    }

    else if (opr1 == '-'){
        result = test.subValues(int1,int2);
    }
    
    else if (opr1 == '/' && int2 != 0){
        result = test.divValues(int1, int2);
    }
    else if (opr1 == '*'){
        result = test.multValues(int1,int2);
    }
    else{
        std::cout << "\n Wrong input, try again";
        return 1;
    }
    std::cout << "The result is: " + result;
    return 0;
}