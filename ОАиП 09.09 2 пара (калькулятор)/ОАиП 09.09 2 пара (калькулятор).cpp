#include <iostream>
#include <cmath>   
using namespace std;
    
int main() {
    setlocale(LC_ALL, "ru");
    int choice;
    double a, b;

    while (true) {
        cout << "\nВыберите какую операцию вы хотите выполнить:\n";
        cout << "1. Сложить два числа\n";
        cout << "2. Вычесть первое из второго\n";
        cout << "3. Перемножить два числа\n";
        cout << "4. Разделить первое на второе\n";
        cout << "5. Возвести в степень N первое число\n";
        cout << "6. Найти квадратный корень из числа\n";
        cout << "7. Найти 1 процент из числа\n";
        cout << "8. Найти факториал из числа\n";
        cout << "9. Выйти из программы\n";
        cout << "Ваш выбор: ";
        cin >> choice;

        if (choice == 9) {
            cout << "Выход из программы...\n";
            break;
        }

        if (choice == 1) {
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            cout << "Результат: " << a + b << endl;
        }
        else if (choice == 2) {
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            cout << "Результат: " << b - a << endl;
        }
        else if (choice == 3) {
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            cout << "Результат: " << a * b << endl;
        }
        else if (choice == 4) {
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            if (b != 0)
                cout << "Результат: " << a / b << endl;
            else
                cout << "Ошибка! Деление на ноль.\n";
        }
        else if (choice == 5) {
            cout << "Введите число: ";
            cin >> a;
            cout << "Введите степень N: ";
            cin >> b;
            cout << "Результат: " << pow(a, b) << endl;
        }
        else if (choice == 6) {
            cout << "Введите число: ";
            cin >> a;
            if (a >= 0)
                cout << "Результат: " << sqrt(a) << endl;
            else
                cout << "Ошибка! Квадратный корень из отрицательного числа.\n";
        }
        else if (choice == 7) {
            cout << "Введите число: ";
            cin >> a;
            cout << "Результат: " << a * 0.01 << endl;
        }
        else if (choice == 8) {
            int n;
            cout << "Введите число: ";
            cin >> n;
            if (n < 0) {
                cout << "Ошибка! Факториал отрицательного числа не определён.\n";
            }
            else {
                int fact = 1;
                for (int i = 1; i <= n; i++)
                    fact *= i;
                cout << "Результат: " << fact << endl;
            }
        }
        else {
            cout << "Неверный выбор, попробуйте снова.\n";
        }
    }

    return 0;
}
