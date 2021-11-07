#include <iostream>
#include <string.h>
using namespace std;

int main (){
	char l[100];
	cout << "Input the line of text : ";
	cin.getline(l, 100);
	cout << endl;
	
	//convert all letters of the line of text into lowerrcase
	// lowercase 65-90
	int length = strlen(l);
	for (int i=0; i<length; i++){
		if (l[i]>=65 && l[i]<=90) 
		{
			l[i]+=32;
		}
	}
	cout << "Line of the text in lowercase : " << l << endl;
	
	//convert all letters of the line of text into upperrcase
	// uppercase 97-122
	length = strlen(l);
	for (int i=0; i<length; i++){
		if (l[i]>=97 && l[i]<=122) 
		{
			l[i]-=32;
		}
	}
	cout << "Line of the text in uppercase : " << l << endl;
	
	return 0;
}
