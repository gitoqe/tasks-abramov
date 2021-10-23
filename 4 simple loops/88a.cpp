#include <iostream>
int main(){
    srand(time(NULL));
    // Дано натуральное число n.
    // а) Выяснить, входить ли цифра 3 в запись числа n^2 .
    int number = 6;
    int square = number * number;
    std::cout << number << " " << square << std::endl;
    while (square > 0){
        if (square % 10 == 3){
            std::cout << "3 in number" << std::endl;
            break;
        }
        square = square / 10;
    }
    return 0;
}
