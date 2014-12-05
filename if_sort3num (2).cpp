#include <iostream> 
using namespace std; 

int main(){
	 double x,y,z; 

	 cin >> x >> y >> z;
	 if (x>y && y>z) cout << x << "\n" << y << "\n" << z; 
	 if (x>z && z>y) cout << x << "\n" << z << "\n" << y; 
	 if (y>x && x>z) cout << y << "\n" << x << "\n" << z; 
	 if (y>z && z>x) cout << y << "\n" << z << "\n" << x; 
	 if (z>x && x>y) cout << z << "\n" << x << "\n" << y; 
	 if (z>y && y>x) cout << z << "\n" << y << "\n" << x; 
	 cout << endl; 

	return 0; 
}

