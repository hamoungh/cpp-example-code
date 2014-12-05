#include <iostream>
void fillArrayFromInput(int x[], int size){
	for(int i=0; i<size; i++)
		std::cin >> x[i];
}
void printArray(int x[],int size){
	for(int i=0; i<size; i++)
		std::cout << x[i] << std::endl;
}
int main(){
	int a[8]; 
	fillArrayFromInput(a,3);
	printArray(a,8);  

	return 0;
}