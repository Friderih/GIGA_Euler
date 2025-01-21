#include <iostream>

int main()
{
    long long int a=1,b=1,c,vsota=0,meja;
    std::cin>>meja;
    while(b<meja)
    {
        c=b;
        b=b+a;
        a=c;
        if(b%2==0)
        {
            vsota+=b;
        }
    }
    std::cout<<vsota<<std::endl;
    return 0;
}