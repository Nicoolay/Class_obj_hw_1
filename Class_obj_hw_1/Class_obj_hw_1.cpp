

#include <iostream>

class Calculator {
private:
    double num1;
    double num2;

public:
    Calculator() {};
    double add() { return num1 + num2; };
    double multiply() { return num1 * num2; };
    double subtract_1_2() { return num1 - num2; };
    double subtract_2_1() { return num2 - num1; };
    double divide_1_2() { return num1 / num2; };
    double divide_2_1() { return num2 / num1; };
    bool set_num1(double num1) {
        if (num1 != 0) {
            this->num1 = num1;
            return true;
        }
        else {
            return false;
        }
    }
    bool set_num2(double num2) {
        if (num2 != 0) {
            this->num2 = num2;
            return true;
        }
        else {
            return false;
        }
    }
};
int main(int argc, char** argv) {
    setlocale(LC_ALL, "Russian");
    Calculator calc;
    double input_num1, input_num2;
    for (; ;) {
        std::cout << "Введите num1: " << std::endl;
        std::cin >> input_num1;
        calc.set_num1(input_num1);
        std::cout << "Введите num2: " << std::endl;
        std::cin >> input_num2;
        calc.set_num2(input_num1);
        if (calc.set_num1(input_num1) && calc.set_num2(input_num2) != 0) {
            std::cout << "num1 + num2 = " << calc.add() << std::endl;
            std::cout << "num1 - num2 = " << calc.subtract_1_2() << std::endl;
            std::cout << "num2 - num1 = " << calc.subtract_2_1() << std::endl;
            std::cout << "num1 * num2 = " << calc.multiply() << std::endl;
            std::cout << "num1 / num2 = " << calc.divide_1_2() << std::endl;
            std::cout << "num2 / num1 = " << calc.divide_2_1() << std::endl;
        }
        else {
            std::cout << "Неверный ввод! " << std::endl;
        }
    }
}