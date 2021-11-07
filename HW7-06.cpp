/*	     Badulla	Kandy	Colombo	 Galle
Badulla		0	    115	     220	 220
Kandy	  115	      0	      90	 152
Colombo	  220	     90        0	  62
Galle	  220	    152	      62	   0 */

#include <iostream>
using namespace std;

int main (){
	int trip[4][4]={0,115,220,220,115,0,90,152,220,90,0,62,220,152,62,0};
	int total1=0;
	int total2=0;
	int i; //current location
	int j;//destination
	char x;
	
	while(x!='n'){
		cout << "- WELCOME TO THE TRIP ADVICER!! -" << endl;
		cout << endl;
		
		while (true){
			cout << "Enter 1- Badulla" << endl;
			cout << "Enter 2- Kandy" << endl;
			cout << "Enter 3- Colombo" << endl;
			cout << "Enter 4- Galle" << endl;
			cout << endl;
			
			cout << "Enter your current location : ";
			cin >> i;
			cout << endl;
			
		 if (i<0 || i>4){
				cout << "Invalid input, re-enter a number : ";
				cin >> i;	
			}
		
		    cout << "Enter your destination : ";
		    cin >> j;
		    cout << endl;
		    break; 
		    
		    if (j<0 || j>4){
				cout << "Invalid input, re-enter a number : ";
				cin >> j;
				cout << endl;	
			}
		}
		    
	cout << "Do you wish to travel further (If yes enter 'y', else enter 'n' : ";
	cin >> x;
	cout << endl;
	total1 += trip[i-1][j-1];
	if (x=='n'){
		cout << "Total distance to be travelled is " << total1 << " Km. ";
		break;
	}
	else if (x== 'y'){
	    int total=0;
		int jj;
		cout << "Enter your final destination : ";
		cin >> jj;
		cout << endl;
		
		if (jj<0 || jj>4){
				cout << "Invalid input, re-enter a number : ";
				cin >> jj;	
			}
			
			total2 += trip[j-1][jj-1];
			total = total1+total2;
			cout << "Your total distance to be travelled is " << total << " Km. " << endl;
			cout << "--------------------------------------------" << endl;  
	}
	}
	return 0;
}
