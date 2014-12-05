#include <iostream>
extern int i;
double f1();
int main(){
	double f=f1();
	std::cout << f << std::endl;
	std::cout << i << std::endl;
	return 0;
}