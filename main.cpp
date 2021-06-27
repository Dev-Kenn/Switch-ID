#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int input;
	
	cout<< "Choose a number (1, 2, 3, 4, 5, 6) \nEnter a number: ";
	cin>>input;
	
	switch(input)
	{
		case 1:
			cout<<"\nProduct ID: 1	Price: 50.55";
			break;
		case 2:
			cout<<"\nProduct ID: 2	Price: 12.35";
			break;
		case 3:
			cout<<"\nProduct ID: 5	Price: 11.46";
			break;
		case 4:
			cout<<"\nProduct ID: 7	Price: 11.46";
			break;
		case 5:
			cout<<"\nProduct ID: 9	Price: 12.35";
			break;
		case 6:
			cout<<"\nProduct ID: 11	Price: 11.46";
			break;
		default:
			cout<<"\nWrong number!";
	}
	return 0;
}
