#include <iostream>

int multiples(int n){
    return ((n*(999/n)*(999/n+1))/2);
}

int main(){
    std::cout<<multiples(3)+multiples(5)-multiples(15)<<std::endl;
    return 0;
}