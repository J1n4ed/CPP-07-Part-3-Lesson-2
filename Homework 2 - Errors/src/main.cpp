#include <iostream>

using namespace std;

/*
x:0, y: 0
x:1, y: 2
x:2, y: 4
x:3, y: 6
x:4, y: 8
*/

struct point
{
	double m_x;
	double m_y;

	point(double x, double y)
	{
		m_x = x;
		m_y = y;
	}
	// ~point(); // Можно объявить функцию и забыть её реализовать
};

void print_point(point & point_object) 
{
	point_object.m_x = point_object.m_y + 10; // не указав передаваемый по ссылке объект как константный можно изменить значение в оригинальном объекте
	std::cout << "x: " << point_object.m_y << ", y: " << point_object.m_x << std::endl;	
}

// в функции print_point можно перепутать вызываемые из структур данные местами и в итоге получить неверный вывод

int main()
{
	int i = 0;

	for (int i; i < 5; i++) // можно забыть инициализировать итератор
	{
		point my_point(i, 2 * i);
		print_point(my_point);
	}

	return 0;
}

/*
void print_point(const point& point_object) 
{
	std::cout << "x:" << point_object.m_x << ", y: "
		<< point_object.m_y << std::endl;
}
*/