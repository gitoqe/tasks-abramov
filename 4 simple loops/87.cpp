#include <iostream>
int main(){
    // 87. Даны натуральное n, m. Получить сумму m последних цифр числа n.
    int number = 10;
    int counter = 100;
    int sum = 0;
    for (int i=0; i<counter; i++){
        sum += number % 10;
        number = number / 10;
    }
    std::cout << "sum: " << sum << std::endl;
    return 0;
}
