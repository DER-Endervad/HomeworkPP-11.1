#include <iostream>
#include <vector>
#include <Windows.h>

template<class T>
void move_vectors(std::vector<T>& one, std::vector<T>& two) {
    std::vector<T> tmp = std::move(one);
    one = std::move(two);
    two = std::move(tmp);
}

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    std::vector <std::string> one = { "test_string1", "test_string2" };
    std::cout << "Данные лежат в первом векторе: " << one[0] << ", " << one[1] << std::endl;
    std::vector <std::string> two;
    move_vectors(one, two);
    std::cout << "Переложили данные во второй вектор: " << two[0] << ", " << two[1] << std::endl;
    system("pause");
}