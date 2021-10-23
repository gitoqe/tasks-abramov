#include <iostream>
#include <cmath>
int main(){
    // б) Поменять порядок цифр числа n на обратный.
    int number = 1241461;
    std::cout << "Starting number: " << number << std::endl;
    int counter = 0;
    int temp = number;
    while (temp > 0){
        counter++;
        temp = temp / 10;
    }
    std::cout << "# symbols: " << counter << std::endl;
    int new_number = 0;
    int current = 0;
    while (number > 0){
        current = number % 10;
        std::cout << current << " ";
        number = number / 10;
        counter--;
        new_number = new_number + current * pow(10, counter);
    }
    std::cout << "\nResult: " << new_number << std::endl; 
    return 0;
}
