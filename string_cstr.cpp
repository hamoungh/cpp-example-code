#include <cstring>
#include <iostream>
#include <string>
int main(){
	char st[100]; 
	char str[]="test"; 
	char str1[]={'t','e','s','t','\0'};
	char str2[16]="test"; 
	std::string newstr; 

	 
	strcpy(str1,str);
	std::cin.get(st,100); 
	std::cout <<"cin.get(st,100) " 
		<<st<<std::endl;

	std::cin>>st; 
	std::cout <<"cin<< " 
		<<strcmp(str1,st)<<std::endl;

	//std::cout << st<<newstr ;
	//std::cin >> newstr; 
	//std::cout << str1; 
	std::cout << newstr.c_str(); 
	std::string str0="test";

	return 0;
}

