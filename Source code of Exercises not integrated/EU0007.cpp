#include <iostream>
#include <vector>
#include <cmath>

std::vector<long long> primes;

int primecheck(long long number){
    long long int sqrt_number=(long long)sqrt(number);
    int i=0;
    while(primes[i]<=sqrt_number){
        if(number%primes[i]==0){
            return 0;
        }
        i++;
    }
    return 1;
}

int main(){
    int number_of_primes=0;
    primes.push_back(3);
    long long now=5;
    while(number_of_primes!=(10000000-2)){
        if(primecheck(now)==1){
            primes.push_back(now);
            number_of_primes++;
        }
        now+=2;
    }
    std::cout<<primes[number_of_primes];
    return 0;
}