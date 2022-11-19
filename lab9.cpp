//Вариант 5.
//Найти площадь треугольника(по трем сторонам).

#include <iostream>

class Triangle
{
	private:
		float t_a, t_b, t_c;

	public:
		Triangle(float a, float b, float c)
		{
			t_a = a;
			t_b = b;
			t_c = c;
		}

		float SquareSurface()
		{
			float p = (t_a + t_b + t_c) / 2;
			float s = sqrt(p*(p - t_a) * (p - t_b) * (p - t_c));
			return s;
		}
};


int main()
{
	int a, b, c;
	std::cout << "Enter size of triangle's sides: ";
	std::cin >> a >> b >> c;
	Triangle triangle1(a, b, c);
	std::cout << "Sqr surface: " << triangle1.SquareSurface();
}