#include <iostream>
#include <string.h>
using namespace std;

int main (){
	char str1[100], str2[100];
	
	cout << "Input String 1 : ";
	cin.getline(str1, 100);
	
	cout << "Input String 2 : ";
	cin.getline(str2, 100);
	
	int comp = strcmp(str1, str2);
	cout << endl;
	
	if (comp==0){
		cout << "String are equal" << endl;
	}
	else if (comp==1){
		cout << "String 1 is greater than String 2" << endl;
	}
	else if (comp==-1){
		cout << "String 1 is less than String 2" << endl;
    }
    return 0;
}
