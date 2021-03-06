// ConsoleApplication16.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <math.h>

class Triangle {
private:
	double a = 0, b = 0, c = 0;
public:
	Triangle(double v1, double v2, double v3) {
		
		a = v1;
		b = v2;
		c = v3;
	};

	~Triangle() {
		a = 0;
		b = 0;
		c = 0;
	};

	void perimetr() {
		double p = 0;
		p = a + b + c;
		std::cout << "P = "<< p<< std::endl;
	}

	void square() {
		double p = (a + b + c) / 2;
		double S = sqrt(p * (p - a) * (p - b) * (p - c));
		std::cout<< "S = "<< S;
	}
};

int main() {
	double a, b, c;
	std::cin >> a>> b>> c;
	Triangle obj(a, b, c);
	obj.perimetr();
	obj.square();
	return 0;
}
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
