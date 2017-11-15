#include <iostream>
using namespace std;


void otpe4atvamasiv4e(int promenliva[], int razmer) {
    for ( int i = 0; i < razmer+1; i++ ) {
        cout << promenliva[i] << ' ';
    }
    cout << endl;
}


int main () {
	
	int x,bufer, masiv4e [9], masiv4e2 [9];
	

	// vkarvame masiv 1
	for(int i = 0; i < 10; ++i) {
		
		cout << "Podai element " << i+1 << " : ";
		cin >> bufer;
   		masiv4e[i] = bufer;
   		
   	//kopirame v masiv 2
   		masiv4e2[i] = masiv4e[i];
	}
	
	// vkarvame x	
	cout << endl << "Podai x: ";
	cin >> x;
	
	
	// obhojdane
	for(int i = 0; i < 10; ++i){
		
		if (masiv4e[i] == x) {
		
			for (int i = x-1; i <10; ++i){
			masiv4e2[i] = masiv4e[i+1];	
			}
			masiv4e2[9] = -1;
						
			}
		
	}
	
	// izvejdane na dvata masiva
	cout << "Nachalen masiv: ";
	otpe4atvamasiv4e(masiv4e, 9);
	cout << endl << "Kraen masiv: ";
	otpe4atvamasiv4e(masiv4e2, 9);
	return 0;
}


"# 1zad" 
