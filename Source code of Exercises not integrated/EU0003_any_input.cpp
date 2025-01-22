#include <iostream>
#include <cmath>

int prime_chack(int number){
    int limit=(int)sqrt(number)+1;
    for(int i=2;i<=limit;i++){
        if(number%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    long long int stevilo;
    std::cin>>stevilo;
    long long int koren=(long long int)sqrt(stevilo)+1;
    for(int i=koren;i>=2;i--){
        if(stevilo%i==0){
            if(prime_chack(i)==1){
                std::cout<<i<<std::endl;
                return 0;
            }
        }
    }
    std::cout<<stevilo<<std::endl;
    return 0;
}