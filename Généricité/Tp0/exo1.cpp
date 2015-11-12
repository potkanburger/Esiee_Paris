#include <cstdlib>
#include <iostream>
#include "Vector.h"

int main(){
	char a;
	do{
		Vector v1(3);
		Vector v2(5);

		v1[0] = 6;
		v1[1] = 7;
		v1[2] = 12;
		v2[1] = 5;
		std::cout << std::endl << "v2 avant affectation:" << std::endl;
		v2.print();
		v2 = v1;
		std::cout << std::endl << "v2 apres affectation:" << std::endl;
		v2.print();

		std::cout << "q to close" << std::endl;
		std::cin >> a;

	} while (a != 'q');
	

	return 0;
}