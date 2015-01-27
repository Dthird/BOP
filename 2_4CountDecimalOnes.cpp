#include <iostream>
using namespace std;

/*
  find the max N : count_all(N) = N
  count_all(10^n - 1) = n * 10^(n-1)

  N = 1 111 111 110
*/

int count1_single(int n){
    int count = 0;
    while(n != 0){
        count += (n % 10 == 1) ? 1 : 0;
        n /= 10;
    }
    return count;
}

int count1_all(int N){
    int count = 0;
    for(int n=1 ; n<=N ; n++){
        count += count1_single(n);
    }
    return count;
}

int main(){
    cout << count1_all(100000000) << endl;
    return 0;
}
