#include <iostream>
struct A{
	int i; 
	//A(){}
};

int sum(int i,int j){
	return i+j;
}
void  w( int(h)(int,int) , int a, int b){
	std::cout << (*h)(a,b);
}
int main(){
	//A* a=(A*)malloc(sizeof(A));
	//a->i=6; 
	//std::cout << a->i;
	int(*hh)(int,int);
	hh=&sum; 
    //std::cout <<(*hh)(2,2);
	w((hh),3,7);
	(*hh)(3,7);
	
	 
	
}
//asteroid::asteroid(){}