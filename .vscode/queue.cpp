#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q1;
    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);


    while(!q1.empty())
    {
        cout<<q1.front()<<endl;
        q1.pop();
    }

    cout<<endl;

    
}