#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

void arrSum(int* a, int* b, int len, string &res) {
	for (int i = 0; i < len; i++)
		a[i] += b[i];
	for (int i = 1; i < len; i++) {
		for (int j = 1; j < len; j++) {
			if (a[j] >= 10) {
				a[j - 1] += 1;
				a[j] -= 10;
			}
		}
	}
	for (int i = 0; i < len; i++)
		res += to_string(a[i]);
}

void arrDiff(int* a, int* b, int len, string &res) {
	for (int i = 0; i < len; i++)
		a[i] -= b[i];
	for (int i = 1; i < len; i++) {
		for (int j = (len - 1); j > 0; j--) {
			if (a[j] < 0) {
				a[j - 1] -= 1;
				a[j] += 10;
			}
		}
	}
	for (int i = 0; i < len; i++)
		res += to_string(a[i]);
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	bool is1min = false;
	bool is2min = false;
	bool is2bigger = false;

	cout << "Внимание! Если при вводе поставить пробел, всё после него не будет учитываться." << endl << endl;

	string str1;
	cout << "Введите первое число: ";
	getline(cin, str1);
	if (str1[0] == '-') {
		is1min = true;
		str1.erase(0, 1);
	}
	if (str1.find(" ") != -1)
		str1.erase(str1.find(" "));
	int str1l = str1.length();
	int* num1;
	num1 = new int[str1l];
	for (int i = 0; i < str1l; i++)
		num1[i] = ((int)str1[i] - (int)48);
	
	string str2;
	cout << "Введите второе число: ";
	getline(cin, str2);
	if (str2[0] == '-') {
		is2min = true;
		str2.erase(0, 1);
	}
	if (str2.find(" ") != -1)
		str2.erase(str2.find(" "));
	int str2l = str2.length();
	int* num2;
	num2 = new int[str2l];
	if (str1l < str2l) {
		for (int i = 0; i < (str2l - str1l); i++)
			num2[i] = 0;
		for (int i = 0; i < str1l; i++)
			num2[i + (str2l - str1l)] = num1[i];
		delete [] num1;
		num1 = new int[str2l];
		for (int i = 0; i < str2l; i++)
			num1[i] = ((int)str2[i] - (int)48);
		is2bigger = true;
	}
	else if (str1l == str2l) {
		for (int i = 0; i < str1l; i++) {
			if (str1[i] == str2[i])
				continue;
			else if (str1[i] < str2[i]) {
				for (int i = 0; i < (str2l - str1l); i++)
					num2[i] = 0;
				for (int i = 0; i < str1l; i++)
					num2[i + (str2l - str1l)] = num1[i];
				delete[] num1;
				num1 = new int[str2l];
				for (int i = 0; i < str2l; i++)
					num1[i] = ((int)str2[i] - (int)48);
				is2bigger = true;
				break;
			}
			else {
				delete [] num2;
				num2 = new int[str1l];
				for (int i = 0; i < (str1l - str2l); i++)
					num2[i] = 0;
				for (int i = 0; i < str2l; i++)
					num2[i + (str1l - str2l)] = ((int)str2[i] - (int)48);
				break;
			}
		}
	}
	else {
		delete [] num2;
		num2 = new int[str1l];
		for (int i = 0; i < (str1l - str2l); i++)
			num2[i] = 0;
		for (int i = 0; i < str2l; i++)
			num2[i + (str1l - str2l)] = ((int)str2[i] - (int)48);
	}

	string result = "";
	if ((is1min == false) && (is2min == false)) {
		if (str2l > str1l)
			arrSum(num1, num2, str2l, result);
		else
			arrSum(num1, num2, str1l, result);
	}
	else if ((is1min == true) && (is2min == false)) {
		if (str2l > str1l)
			arrDiff(num1, num2, str2l, result);
		else if (str1l == str2l && is2bigger == true)
			arrDiff(num1, num2, str1l, result);
		else {
			result += "-";
			arrDiff(num1, num2, str1l, result);
		}
	}
	else if ((is1min == false) && (is2min == true)) {
		if (str2l > str1l) {
			result += "-";
			arrDiff(num1, num2, str2l, result);
		}
		else if (str1l == str2l && is2bigger == true) {
			result += "-";
			arrDiff(num1, num2, str1l, result);
		}
		else 
			arrDiff(num1, num2, str1l, result);
	}
	else {
		result += "-";
		if (str2l > str1l)
			arrSum(num1, num2, str2l, result);
		else
			arrSum(num1, num2, str1l, result);
	}

	while (true) {
		if ((result[0] == '0' && result.length() != 1) || (result[0] == '-' && result[1] == '0' && result.length() == 2))
			result.erase(0, 1);
		else if (result[0] == '-' && result[1] == '0' && result.length() != 2)
			result.erase(1, 1);
		else break;
	}
	cout << endl << "Результат: " << result << endl << endl;

	delete [] num1;
	delete [] num2;

	system("pause");
	return 0;
}
