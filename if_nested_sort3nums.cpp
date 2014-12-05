 #include <iostream>
using namespace std;
// get two numbers and sort them 
// (from large to small)
 // and print them 
int main(){
	int x,y,z; 
	cin >> x >> y >> z ; 
	if (x>y && x<y){
		if(y>z){
			cout << x << endl << y << endl; 
		}else {
		
		}
	}
	else if (x>y && x>z && y>z)
	{
		cout << y << endl << x << endl; 
	}
	return 0; 
}