#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float a, b, c, v, res;
	string v1, v2, v3, v4;

	while (1)
	{
		cout << "Легкий консольный калькулятор\n";
		cout << "Введите кол-во чисел с которыми мы будем работать (2 или 3): ";
		cin >> v1;
		if (v1 == "2")
		{
			cout << "Введите первое число: ";
			cin >> a;
			cout << "Введите второе число: ";
			cin >> b;
			
			cout << "Введите действие + - * /: ";
			cin >> v2;
			if (v2 == "+")
			{
				res = a + b;
				cout << res;
				system("EXIT");
				break;
			}
			if (v2 == "-")
			{
				res = a - b;
				cout << res;
				system("EXIT");
				break;
			}
			if (v2 == "*")
			{
				res = a * b;
				cout << res;
				system("EXIT");
				break;
			}
			if (v2 == "/")
			{
				res = a / b;
				cout << res;
				system("EXIT");
				break;
			}
		}
		if (v1 == "3")
		{
			cout << "Введите первое число: ";
			cin >> a;
			cout << "Введите второе число: ";
			cin >> b;
			cout << "Введите третье число: ";
			cin >> c;

			cout << "Введите первое действие + - * /: ";
			cin >> v2;
			cout << "Введите второе действие + - * /: ";
			cin >> v3;


			/// числа с +


			if (v2 == "+" and v3 == "+")
			{
				res = a + b + c;
				cout << res;
				system("EXIT");
				break;
			}
			if (v2 == "+" and v3 == "-")
			{
				res = a + b - c;
				cout << res;
				system("EXIT");
				break;
			}
			if (v2 == "+" and v3 == "*")
			{
				res = a + b * c;
				cout << res;
				system("EXIT");
				break;
			}
			if (v2 == "+" and v3 == "/")
			{
				res = a + b / c;
				cout << res;
				system("EXIT");
				break;
			}


			/// числа с -


			if (v2 == "-" and v3 == "-")
			{
				res = a - b - c;
				cout << res;
				system("EXIT");
				break;
			}
			if (v2 == "-" and v3 == "+")
			{
				res = a - b + c;
				cout << res;
				system("EXIT");
				break;
			}
			if (v2 == "-" and v3 == "*")
			{
				res = a - b * c;
				cout << res;
				system("EXIT");
				break;
			}
			if (v2 == "-" and v3 == "/")
			{
				res = a - b / c;
				cout << res;
				system("EXIT");
				break;
			}


			/// числа с *


			if (v2 == "*" and v3 == "*")
			{
				res = a * b * c;
				cout << res;
				system("EXIT");
				break;
			}
			if (v2 == "*" and v3 == "+")
			{
				res = a * b + c;
				cout << res;
				system("EXIT");
				break;
			}
			if (v2 == "*" and v3 == "-")
			{
				res = a * b - c;
				cout << res;
				system("EXIT");
				break;
			}
			if (v2 == "*" and v3 == "/")
			{
				res = a * b / c;
				cout << res;
				system("EXIT");
				break;
			}


			/// числа с /


			if (v2 == "/" and v3 == "/")
			{
				res = a / b / c;
				cout << res;
				system("EXIT");
				break;
			}
			if (v2 == "/" and v3 == "*")
			{
				res = a / b * c;
				cout << res;
				system("EXIT");
				break;
			}
			if (v2 == "/" and v3 == "-")
			{
				res = a / b - c;
				cout << res;
				system("EXIT");
				break;
			}
			if (v2 == "/" and v3 == "+")
			{
				res = a / b + c;
				cout << res;
				system("EXIT");
				break;
			}
		}
		if (v1 != "2" and v1 != "3") 
		{
			cout << "Ошибка ввода";
			system("EXIT");
			break;
		}
	}
}