#include <iostream>
using namespace std;
int main(){
	int i=88;
	int j=40; 
	int bigger;
	int smaller;
	if(i>j){
		smaller=j;
		bigger=i;
	}else{
		smaller=i;
		bigger=j;
	}
	cout << bigger << endl << smaller << endl; 
	return 0;
}