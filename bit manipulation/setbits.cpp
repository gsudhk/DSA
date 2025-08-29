#include<bits/stdc++.h>
using namespace std;
int setb(int a){
    int count = 0;
    while(a!=0){
        if(a&1){
            count++;
        }
         a = a >> 1;
    }
    return count;
}
int main(){
    int a = 4;
    int b = 2;
    int setbits = setb(a*b);
    cout << setbits;
}