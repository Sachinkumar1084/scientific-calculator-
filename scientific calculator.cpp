#include<iostream>
#include<cmath>

void showMenu() {
    std::cout << "Simple Scientific Calculator" << std::endl;
    std::cout << "1. Addition" << std::endl;
    std::cout << "2. Subtraction" << std::endl;
    std::cout << "3. Multiplication" << std::endl;
    std::cout << "4. Division" << std::endl;
    std::cout << "5. Exponentiation" << std::endl;
    std::cout << "6. Exit" << std::endl;
    std::cout << "Enter value: ";
}

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        std::cout << "Error: Division by zero!" << std::endl;
        return 0;
    }
}

double exponentiation(double base, double exponent) {
    return pow(base, exponent);
}

int main() {
    int choice;
    double num1, num2, result;

    do {
        showMenu();
        std::cin >> choice;

        if (choice >= 1 && choice <= 5) {
            std::cout << "Enter two numbers: ";
            std::cin >> num1 >> num2;
        }

        switch (choice) {
            case 1:
                result = add(num1, num2);
                std::cout << "Result: " << result << std::endl;
                break;
            case 2:
                result = subtract(num1, num2);
                std::cout << "Result: " << result << std::endl;
                break;
            case 3:
                result = multiply(num1, num2);
                std::cout << "Result: " << result << std::endl;
                break;
            case 4:
                result = divide(num1, num2);
                std::cout << "Result: " << result << std::endl;
                break;
            case 5:
                result = exponentiation(num1, num2);
                std::cout << "Result: " << result << std::endl;
                break;
            case 6:
                std::cout << "Exiting..." << std::endl;
                break;
            default:
                std::cout << "Error" << std::endl;
        }
        std::cout << std::endl;
    } while (choice != 6);

    return 0;
}
