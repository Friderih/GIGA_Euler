#include <iostream>

using namespace std;
const int MAX_INT=4000000;

int main(){
    int a=1,b=1,c,vsota=0;
    while(b<MAX_INT){
        c=b;
        b=b+a;
        a=c;
        if(b%2==0){
            vsota+=b;
        }
    }
    cout<<vsota<<endl;
    return 0;
}