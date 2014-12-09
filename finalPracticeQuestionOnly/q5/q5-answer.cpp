#include <string>
using namespace std;
struct addressType{
	int aptnum;
};
struct girl{
	int age;
	string name;
	addressType address;
};
struct boy{
	string name;
	girl girlfriend[10];
};