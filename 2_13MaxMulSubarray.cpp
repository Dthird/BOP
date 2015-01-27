#include <iostream>
using namespace std;

//without division

/* Solution 1:
	time-space trick-off
	|1| | | |i| | | | | |N|
	|.h[i]..| |....t[i]...|
	p[i] = h[i] * t[i]
*/

/* Solution 2:
*/

int max_subarray(int a[], int N){
	//number of positives, negatives and zeros
	int p_num, n_num, z_num;
	p_num = n_num = z_num = 0;
	
	
	for(int i=0 ; i<N ; i++){
		if(a[i] > 0)
			p_num ++;
		else if(a[i] < 0)
			n_num ++;
		else
			z_num ++;
	}
	
	if (z_num == 0){
		if(n_num % 2 == 0){
			if(p_num > 0){
				// remove a[i] > 0 && abs(a[i]) is min
			}
			else{
				//remove a[i] is min
			}
		}
		else{
			//remove a[i] < 0 && abs(a[i]) is min 
		}
	}
	else if(z_num == 1){
		int p_sub = 1;
		for(int i=0 ; i<N ; i++){
			p_sub *= a[i];
		}
		return p_sub > 0 ? p_sub : 0;
	}
	else
		return 0;
}

int main(){
	
	return 0;
}
