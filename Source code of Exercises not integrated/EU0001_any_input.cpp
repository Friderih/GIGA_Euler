#include <iostream>

int multiples(int n,int limita){
    return ((n*(((limita-1)/n)*((limita-1))/n+1))/2);
}

int main(){
    int limita;
    std::cin>>limita;
    std::cout<<multiples(3,limita)+multiples(5,limita)-multiples(15,limita)<<std::endl;
    return 0;
}