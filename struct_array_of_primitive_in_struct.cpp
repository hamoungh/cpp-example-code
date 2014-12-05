#include <string>
struct student{
	std::string name;
	int gradesGbc[50];
	int gradesHighschool[50];
};
int main(){
	student students[100]; // array of struct objects 
	students[0].name="james";
	students[0].gradesGbc[0]=50; // array within struct 
	//st2.grades[1]=40;
	students[1].name="rob"; 
	return 0;
}
