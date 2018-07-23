#include <iostream>
using namespace std;
int main ()
{
	char letra;
		cout <<"introduza a L,D OU F:";
		cin >> letra;
		switch (letra){
			case 'L': cout<<"ligar"; break;
			case 'D': cout<<"desligar"; break;
			case 'F': cout<<"furar"; break;
			default : cout<<"erro";
		}
	return 0;
}
