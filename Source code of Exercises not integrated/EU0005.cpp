#include <iostream>

static int tabela[10]={11,12,13,14,15,16,17,18,19,20};

int perfection(int number){
    for(int i=0;i<10;i++){
        if(number%tabela[i]!=0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int i=20;
    while(1==1){
        if(perfection(i)==1){  
            std::cout<<i<<std::endl;
            break;
        }
        i+=20;
    }
    return 0;
}