#include <iostream>
#include <string>
using namespace std;

void inputA();
void inputB();
void add();
void subtract();
void multiply();
void divide();

int main() {
    int choice;
    bool running = true;
    
    while (running) {
        cout << "=== Меню калькулятора ===" << endl;
        cout << "1. Ввести А" << endl;
        cout << "2. Ввести В" << endl;
        cout << "3. Выполнить операцию '+'" << endl;
        cout << "4. Выполнить операцию '-'" << endl;
        cout << "5. Выполнить операцию '*'" << endl;
        cout << "6. Выполнить операцию '/'" << endl;
        cout << "0. Выход" << endl;
        cout << "Выберите пункт меню: ";
        
        cin >> choice;
        
        switch (choice) {
            case 1:
                inputA();
                break;
            case 2:
                inputB();
                break;
            case 3:
                add();
                break;
            case 4:
                subtract();
                break;
            case 5:
                multiply();
                break;
            case 6:
                divide();
                break;
            case 0:
                running = false;
                cout << "Выход из программы." << endl;
                break;
            default:
                cout << "Неверный выбор!" << endl;
        }
    }
    
    return 0;
}

// Заглушки функций
void inputA() {
    cout << "Функция ввода А будет реализована" << endl;
}

void subtract() {
    if (A == 0 && B == 0) {
        cout << "Сначала введите значения A и B!" << endl;
        return;
    }
    cout << A << " - " << B << " = " << (A - B) << endl;
}

void add() {
    cout << "Функция сложения будет реализована" << endl;
}

void subtract() {
    if (A == 0 && B == 0) {
        cout << "Сначала введите значения A и B!" << endl;
        return;
    }
    cout << A << " - " << B << " = " << (A - B) << endl;
}

void multiply() {
    cout << "Функция умножения будет реализована" << endl;
}

void divide() {
    cout << "Функция деления будет реализована" << endl;
}