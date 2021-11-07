#include <iostream>
using namespace std;

int main (){
	int seats[10];
	for (int i=0; i<10; i++){
		seats[i]=0;
	}
	
	int cls=0, econ=5; //cls emphasises class
	
	while (cls<5 || econ<10){
		cout << "WELCOME TO AIRLINES......." << endl;
		
		int choice=0;
		
		cout << "Enter 1 for First Class" << endl;
		cout << "Enter 2 for Economy" << endl;
		cout << "Enter desired Number : ";
		cin >> choice;
		cout << endl;
		
		while (!cin || !(choice>=1 && choice<=2)){
			cout << "Invalid section number...."  << endl;
			cout << "Please re-enter 1 or 2 :";
			cin >> choice;
			cout << endl;
		}
		
	 //first class sear reservations
	 if (choice==1){
	 	
	 	if (cls<5){
	 		cout << "Boarding Pass..." << endl;
	 		cout << "Seat Number : " << (cls+1) << endl;
	 		cout << "Section : First Class" << endl;
	 		seats[cls]=1;
	 		cls++;
	 		
		 }
		 else if(econ<10){
		 	char choice1;
		 
		 while(!(choice1 == 'y' || choice1 == 'n')){
		 	cout << "First Class is full. Do you like a seat of Economy Class? " << endl;
		 	cout << "If yes type y, else n : "; 
		 	cin >> choice1;
		 	
		 	if(!(choice1 == 'y' || choice1 == 'n')){
		 		cout << "Invalid response. Please enter y or n : ";
		 		cin >> choice1;
			 }
		 }
		 cout << endl;
		 
		 if(choice1=='y'){
		 	cout << "Boarding Pass..." << endl;
		 	cout << "Seat Number : " << endl;
		 	cout << "Section : Economy" << endl;
		 	seats[econ]=1;
	 		econ++;
		 }
		 else if(choice1=='n'){
		 	cout << "Next flight will leave within 3 hours" << endl;
		 	break;
		 }	
		 }
	 }
	 
	 //economy class sear reservations
	  if (choice==2){
	 	
	 	if (econ<10){
	 		cout << "Boarding Pass..." << endl;
	 		cout << "Seat Number : " << (econ+1) << endl;
	 		cout << "Section : Economy" << endl;
	 		seats[econ]=1;
	 		econ++;
	 		
		 }
		 else if(cls<5){
		 	char choice1;
		 
		 while(!(choice1 == 'y' || choice1 == 'n')){
		 	cout << "Economy is full. Do you like a seat of First Class? " << endl;
		 	cout << "If yes type y, else n : "; 
		 	cin >> choice1;
		 	
		 	if(!(choice1 == 'y' || choice1 == 'n')){
		 		cout << "Invalid response. Please enter y or n : ";
			 }
		 }
		 cout << endl;
		 
		 if(choice1=='y'){
		 	cout << "Boarding Pass..." << endl;
		 	cout << "Seat Number : " << endl;
		 	cout << "Section : First Class" << endl;
		 	seats[cls]=1;
	 		cls++;
		 }
		 else if(choice1=='n'){
		 	cout << "Next flight will leave within 3 hours" << endl;
		 	break;
		 }	
		 }
	 }
	 cout << endl;
	 
	 }
	 cout << "All seats are full. Sorry for the inconvenience. " << endl;
	 
}
