#include <iostream>
#include <queue>
#include <fstream>

long long cleaner(std::queue<int>& trinajsterica){
    std::queue<int> clean;
    std::swap(trinajsterica,clean);
    return 1;
}

int main(){
    //input and output files
    std::ifstream inputFile("EU0008_input.txt");
    std::ofstream outFile("EU0008_output.txt");
    
    //starting variabels
    std::queue<int> trinajsterica;
    char trenuten_char;
    int trenutno;
    long long zmnozek=1,najvecji_zmnozek=0;
    while(inputFile>>trenuten_char){
        trenutno=trenuten_char-'0';
        if(trenutno==0){
            zmnozek=cleaner(trinajsterica);
            continue;
        }
        trinajsterica.push(trenutno);
        zmnozek*=trenutno;
        if(trinajsterica.size()==13){
            if(zmnozek>najvecji_zmnozek){
                najvecji_zmnozek=zmnozek;
            }
            zmnozek/=trinajsterica.front();
            trinajsterica.pop();
        }
    }
    outFile<<najvecji_zmnozek;
    return 0;
}