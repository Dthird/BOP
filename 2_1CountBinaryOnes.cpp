#include <iostream>
using namespace std;

int count1(unsigned char n){
    int count = 0;
    while(n != 0){
        if(n % 2 == 1)
            count ++;
        n /= 2;
    }
    return count;
}

int count2(unsigned char n){
    int count = 0;
    while(n != 0){
        count += n & 0x01;
        n >>= 1;
    }
    return count;
}

int count3(unsigned char n){
    int count = 0;
    while(n != 0){
        n &= (n-1);
        count++;
    }
    return count;
}

int main(){
    cout << count3(25) << endl;
    return 0;
}
