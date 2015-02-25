#include <iostream>
#include <iomanip>
#include <list>
using namespace std;

void change (); 

const int maxDenominations = 10; 


void sort(int *coins, int length) {
    // sorter function
    
	for (int i=0; i < length; i++) {
			int a = coins[i]; 
			int b = coins[i+1]; 
			if (a < b) { // swap
				coins[i] = b; 
				coins[i+1] = a; 
			} for (int j=0; j < k; j++) {
				int c = coins[j]; 
				int d = coins[j+1]; 
					if (c < d) { // swap
					coins[j] = d; 
					coins[j+1] = c; 
}


void change () {
	int n, c;

	cin >> n;  
	if (n > maxDenominations) return; 

	// take in coin denominations
	int *coins[n] = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> coins[i];
	}

	sort(coins, n); 

	printf(coins); 


	cin >> c;

	int x;
	k = x = 0;
	int output[n][2];

    
    
	while (k < n) {
        
		// where k=0, largest=coins[k] 
		int largest = coins[k];
        
        // loop to next largest coin (smaller coin) in coins list
		if (c < coins[k] || coins[k] == 0) k++;
        
		else {
			int numMultiples = c - (c % largest); 
			int t = numMultiples / largest; 
			c = c % largest;
            
			// check if c == 0?
			output[x][0] = largest;
			output[x][1] = t;
            
			// increment to next row in output list
			x++;
            
			// loop to next coin denomination
			k++;
		}
	}

	// final stage
	if (c > 0) {
		printf("Impossible");
		return;
	} 

	if (c == 0) {
		int i = 0;
		while (i < x) {
			cout << output[i][1] << " "; 
			cout << "X " << output[i][0] << endl;
			i++;
		}
		return; 
	}
	
}


int main () {
	change();
}%                                             
