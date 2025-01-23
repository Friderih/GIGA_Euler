#include <iostream>

int prevernik(int stevilo){
    int copiastevilo=stevilo,novo=0;
    while(copiastevilo>0){
        novo=copiastevilo%10+novo*10;
        copiastevilo/=10;
    }
    if(novo==stevilo){
        return 1;
    }
    return 0;
}

int main(){
    int stevilo,najvecje=0,trenutno;
    for(int i=999;i>99;i--){
        for(int j=i;j>99;j--){
            trenutno=i*j;
            if(trenutno>najvecje){
                if(prevernik(trenutno)==1){
                    najvecje=trenutno;
                }
            }
        }
    }
    std::cout<<najvecje<<std::endl;
    return 0; 
}