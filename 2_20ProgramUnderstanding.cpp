#include <iostream>
using namespace std;

/*
	不完全正确:寻找1到Int64.MaxValue中,rg中仅有两个连续的数不能被其整除.
*/


int main(){
	int rg[] = {2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
	for(long long i=1 ; i<9223372036854775807 ; i++){
		int hit = 0;
		int hit1 = -1;
		int hit2 = -1;
		for(int j=0 ; j<30 && hit <= 2 ; j++){
			if((i % rg[j]) != 0){
				hit ++;
				if(hit == 1)
					hit1 = j;
				else if(hit == 2)
					hit2 = j;
				else
					break;
			}
		}
		
		if(hit == 2 && hit1 + 1 == hit2)
			cout << i << endl;
	}
	return 0;
}
