#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	int t[2][5];
	
	for (int i=0; i<2; i++){
		for (int j=0; j<5; j++){
			cout << "Input integer value for row " << (i+1) << " / column " << (j+1) << " : ";
			cin >> t[i][j];	
		}
	}
	
	int min=t[0][0];
	
	for (int i=0; i<2; i++){
	for (int j=0; j<5; j++){
		if(min>t[i][j]){
			min=t[i][j];
		}	
		}
	}
	cout << "Smallest Value : " << min << endl;
	
	for (int i=0; i<5; i++){
		cout << t[0][i] << " ";
	}
	cout << endl;
	
	int total=0;
	
	for (int i=0; i<2; i++){
		total+=t[i][3];
	}
	cout << "Total : " << total << endl;
	
	cout << endl;
	cout << setw(12) << "col 0" << setw(7) << "col 1" << setw(7) << "col 2" << setw(7) << "col 3" << setw(7) << "col 4" << endl;
	
	for (int i=0; i<2; i++){
		cout << "row " << i;
	for (int j=0; j<5; j++){
		cout << setw(7) << t[i][j];
	}
	cout << endl;
	}
 return 0;
}
	
