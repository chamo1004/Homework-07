#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char string[100], *token;
	int count=0;
	
	cout << "Enter String : ";
	cin.getline(string, 100);
	token = strtok(string, "\n");

	while (NULL  != token){
		count++;
		token = strtok(NULL, "\n");
	}
	cout << "Word Count : " << count;
	return 0;
}
