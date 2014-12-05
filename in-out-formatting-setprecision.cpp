// setfill example
#include <iostream>     // std::cout, std::endl
#include <iomanip>      // std::setfill, std::setw
using namespace std; 

int main () {
	cout.fill('x');
	cout << setfill('x'); 
	
	cout.width(10); 
	cout << setw(10); 

	cout.precision(6); 

	cout << setprecision(6); 

	//std::cout.setf(std::ios_base::left, std::ios_base::adjustfield); 
	std::cout << std::left;

 // std::cout << std::setfill ('x') << std::setw (10);
	std::cout << std::left;
  std::cout << 77 << std::endl;

  std::cout << std::fixed(;


  return 0;
}