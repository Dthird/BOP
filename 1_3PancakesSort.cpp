#include <iostream>
using namespace std;

void reverse(int a[], int x){
    int half = x / 2;
    for(int i=0 ; i<half ; i++){
        int temp = a[i];
        x--;
        a[i] = a[x];
        a[x] = temp;
    }
    return ;
}

void sort1(int a[], int n){
    if(n == 1)
        return;
    else{
        int i;
        for(i=0 ; i<n ; i++){
            if(a[i] == n-1)
                break;
        }
        reverse(a, i+1);
        reverse(a, n);
        return sort1(a, n-1);
    }
}

int main(){
    int a[] ={1,2,3,4,5,0,9,8,7,6};
    
    sort1(a,10);
    for(int i=0 ; i<10 ; i++)
        cout << a[i] << "\t";
    cout << endl;
    
    return 0;
}
