/*
	BYTE i = 81;
	while(i--){
		if(i / 9 % 3 == i % 9 % 3)
			continue;
		cout << "A = " << i / 9 + 1 << ", B = " << i % 9 + 1 << endl;
	}
*/

#include <iostream>
using namespace std;

struct {
	short a;
	short b;
}i;

int main(){
	for(i.a = 1 ; i.a <= 9 ; i.a++)
		for(i.b = 1 ; i.b<=9 ; i.b++)
			if(i.a % 3 != i.b % 3)
				cout << "A = " << i.a << ", B = " << i.b << endl;
	return 0;
}