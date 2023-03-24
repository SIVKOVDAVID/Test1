#include<stdio.h>
#include<iostream>
class Road {
public:
	double lenght;
	int Width;
};
int main() {
	printf("hello");
	int a = 123;
	Road road;
	road.lenght = 300.2;
	road.Width = 3;
	std::cout << std::endl << "12345";
	std::cout << a;
	std::cout << "\nlenght" << road.lenght << std::endl;
	std::cout << "Width:" << road.Width << std::endl;
	return(0);
}
