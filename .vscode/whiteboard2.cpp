#include <bits/stdc++.h>
using namespace std;


int Sum(int* a , int b)
{

    return (*a + b);
}

int main()
{
    int a = 10;

    int b = 20;

    int *ptrA;

    ptrA = &a;

    ptrA = &b;

    cout<<ptrA;

    // cout<< Sum(ptrA, 20);

    return 0;
}
