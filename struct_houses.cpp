#include <iostream>
using namespace std;
struct houseType{
	int size; 
	int price; 
};


void populateHouseProperties(houseType& h){
	cin >> h.price >> h.size; 
}

void printHouse(houseType h){
	cout<< h.price << endl 
		<< h.size; 
}

int main1(){
	int i;
	houseType house1;
	populateHouseProperties(house1);
	printHouse(house1); 
	return 0; 
}