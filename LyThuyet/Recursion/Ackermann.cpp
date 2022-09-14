// Nested recursion
#include<iostream>
using namespace std;

int ackermann(int m, int n);

int main(){

    return 0;
}

int ackermann(int m, int n){
    if (m == 0)
    {
        return n + 1;
    }
    else if (n == 0)
    {
        return ackermann(m - 1, 1);
    }
    else
    {
        return ackermann(m - 1, ackermann(m, n - 1));
    }
    
    
}