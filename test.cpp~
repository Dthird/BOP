#include <iostream>
using namespace std;


/* Solution 1:
	k = x / y;	b = x % y
	x = k * y + b
	gcd(x, y) = gcd(y, b)
*/
long gcd1(long x, long y){
	return y == 0 ? x : gcd1(y, x%y);		
}

/* Solution 2:
	gcd(x, y) = gcd(x-y, y)
*/
long gcd2(long x, long y){
	if(x < y)
		return gcd2(y, x);
	return y == 0 ? x : gcd2(x-y, y);
}

/* Solution 3:
	if y = k * y1, x = k * x1
	then gcd(x, y) = k * gcd(x1, y1)

	if x = p * x1 and if p is a prime number, then y % p != 0
	then f(x, y) = f(x1, y)
	
	discuss x and y 's even and odd cases!
	let p = 2
	if x and y are both even, gcd(x, y) = 2 * gcd(x>>1, y>>1)
	if x is even and y is odd, gcd(x, y) = gcd(x>>1, y)
	if x is odd and y is even, gcd(x, y) = gcd(x, y>>1)
	if x and y are both odd, gcd(x, y) = gcd(x-y, y)
*/




int main(){
	cout << gcd1(1100100210001,120200021) << endl;
	return 0;
}
