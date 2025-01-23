#include <iostream>
#include <cmath>

int main(){
    int sumsqueres=0,squeresums=0;
    for(int i=1;i<101;i++){
        sumsqueres+=pow(i,2);
        squeresums+=i;
    }
    std::cout<<(int)pow(squeresums,2)-(int)sumsqueres<<std::endl;
    return 0;
}