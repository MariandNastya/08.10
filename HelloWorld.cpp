#include <iostream> //библиотека для ввода-вывода
#include <string> //библиотека для работы со строками

int main() {
    std::string name; //переменная для хранения имени

    std::cout << "Введите ваше имя: "; //ввод имени
    std::cin >> name; //считывание введенного имени и его сохранение

    std::cout << "Hello world from " << name << std::endl; //вывод сообщения
    return 0; //завершение программы
}

