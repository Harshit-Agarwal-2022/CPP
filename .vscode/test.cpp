#include <bits/stdc++.h>
#include <climits>
using namespace std;


int fibonaci(int n);


int main()
{

    cout<<fibonaci(5);

    return 0;
    
}


int fibonaci(int n)
{
    if(n==1)
    return 0;
    
    if(n==2)
    return 1;

    return fibonaci(n-1) + fibonaci(n-2);

}