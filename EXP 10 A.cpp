// NAME - RIDDHI LOKHANDE
// PRN - 23070123107
// EXPERIMENT - 10(A) 

// Printing the values by using callby value 

#include<iostream> 
using namespace std; 
void swap(int x, int y) 
{
    int swap;
    swap=x;
    x=y;
    y=swap;
}

int main() 
{
    int a=4, b=7;
    swap(a,b);
    cout<<"Value of a is: "<<a<<"\n";
    cout<<"Value of b is: "<<b<<"\n";
    return 0;
}