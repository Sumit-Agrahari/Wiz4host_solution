#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=6;i++)
    {
        for(j=1;j<=6;j++)
        {
            if(i>=7-j)
                printf("*");
            else
                printf(" ");
        }
        cout<<"\n";
    }

    return 0;
}