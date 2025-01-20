#include <iostream>

using namespace std;

int main(){
    long long int a=1,b=1,c,vsota=0,meja;
    cin>>meja;
    while(b<meja){
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