#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(0, ".1251");
    int age;
    double salary;
    string firstName, lastName, desiredPosition;

    // Запитуємо у користувача вік і зарплату
    cout << "Введiть ваш вiк(вiд 20): ";
    cin >> age;
    cout << "Введiть вашу зарплату(1000-10000): ";
    cin >> salary;

    // Перевіряємо умови віку і зарплати
    if (age > 20 && salary > 1000 && salary < 10000) {
        cout << "We will consider your position." << endl;

        // Якщо умови виконуються, запитуємо додаткову інформацію
        cout << "Введiть ваше iм'я: ";
        cin >> firstName;
        cout << "Введiть ваше прiзвище: ";
        cin >> lastName;
        cout << "Введiть бажану посаду: ";
        cin >> desiredPosition;
        // Виводимо всі дані
        cout << "Iм'я: " << firstName << endl;
        cout << "Прiзвище: " << lastName << endl;
        cout << "Бажана посада: " << desiredPosition << endl;
        cout << "Вiк: " << age << endl;
        cout << "Зарплата: " << salary << endl;

    }
    else {
        // Якщо умови не виконуються
        cout << "You are not suitable." << endl;
    }

    return 0;
}
