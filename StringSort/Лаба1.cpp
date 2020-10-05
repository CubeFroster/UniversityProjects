#include <iostream>
#include <string>
#include <sstream>
#include <Windows.h>
using namespace std;

int main()
{

    SetConsoleCP(1251);         //Для работы с русским языком
    SetConsoleOutputCP(1251);

    string str;
    while (true) {
        cout << "Введите строку: ";         //Ввод строки защитой от пустоты
        getline(cin, str);
        if (str != "") break;
        else
            cout << "Строка должна состоять хотя бы из 1 слова.\n" << endl;
    }

    cout << endl;

    str = str + " ";    //Для правильной работы счётчика и др. функций

    string forCount = str;
    int counter = 0;

    string space = " ";
    int spacePos;

    while (forCount != "") {                //Подсчёт слов
        spacePos = forCount.find(space);
        forCount.erase(0, (spacePos + 1));
        counter += 1;
    }

    cout << "Количество слов: " << counter << endl;
    cout << endl;

    string* words;
    words = new string[counter];

    int i = 0;                  //Ввод строки в массив
    stringstream ssin(str);
    while (ssin.good() && (i < (counter))){
        ssin >> words[i];
        ++i;
    }

    cout << "Количество символов в выбранных словах: " << endl;     //Вывод количества символов
    for (int i = 0; i < (counter); i++) {
        spacePos = str.find(space);
        cout << words[i] << " - " << spacePos << "; ";
        str.erase(0, (spacePos + 1));
    }

    cout << endl;
    str.clear();

    string a;                               //Сортировка массива
    for (int j = 0; j < (counter - 1); j++) {
        for (int i = 0; i < (counter - 1); i++) {
            if (words[i].length() > words[i + 1].length()) {
                a = words[i];
                words[i] = words[i + 1];
                words[i + 1] = a;
            }
        }
    }

    for (int i = 0; i < (counter); i++) {     //Формирование новой строки
        str = str + words[i];
        str = str + " ";
    }

    cout << "\nСтрока, упорядоченная по возрастанию длины слов: ";
    cout << "\n" << str << "\n" << endl;

    delete[] words;

    system("pause");
    return 0;
}
