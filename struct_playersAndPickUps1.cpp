#include <string>
#include <iostream>
using namespace std;

struct pickUp
{
     string name;
     void initialize(string p)
    {
        name = p;
    }
};


struct player {
	int numberOfPickups;
    pickUp pickups[10];
	void initialize(){
		numberOfPickups=0;
	}
};

 int main()
        {

            pickUp weapon, health, bomb;  
			weapon.initialize("weapon");
			health.initialize("health");
            bomb.initialize("bomb");
            pickUp availablePickups[] = {weapon,health,bomb };
            player players[16];          
            for (int i = 0; i < 16; i++) //players
            {
				players[i].pickups[0]=availablePickups[rand()%3];
            }

            for (int i = 0; i < 16; i++){
                cout<<players[i].pickups[0].name<<endl;
             }

        }