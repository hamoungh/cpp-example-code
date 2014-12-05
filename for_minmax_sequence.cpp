#include <iostream> 
using namespace std; 

int main(){
	 int n,x; 
	 double min=65535, max=-1; 

	 cin >> n;
	for(int i=1; i<=n; i++){
		cin >> x;
		min = (min>x) ? x:min;
		max = (max<x) ? x:max;
	}
	 cout << min << endl; 
	 cout << max << endl; 

	return 0; 
}

