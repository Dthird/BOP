#include <iostream>
#include "string.h"
using namespace std;

bool strshiftin1(char src[] , char dst[]){
    for(int i=0 ; i<strlen(src) ; i++){
        if(strstr(src, dst) == 0)
            return true;
        
        char temp = src[0];
        int j;
        for(j=0 ; j<strlen(src)-1 ; j++)
            src[j] = src[j+1];
        src[j] = temp;
    }
    return false;
}

/*
  judge whether dst in strcat(src,src)
 */

bool strshiftin2(char src[], char dst[]){
    char *p; 
    char *srcsrc = strcat(src, src);
    cout << srcsrc << endl;
    p = strstr(srcsrc, dst);
    return p != NULL ? true : false;
}

int main(){
    char s1[] = "AABBCD";
    cout << strshiftin1("AABBCD", "CDAA") << endl;
    cout << strshiftin2(s1, "CDAA") << endl;
    return 0;
}
