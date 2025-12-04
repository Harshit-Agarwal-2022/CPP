#include <bits/stdc++.h>
using namespace std;

void displayVector(vector<int> &v)
{
    cout<<"size: "<<v.size()<<endl;

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<"\t";
    }

    cout<<endl;
}

int main()
{
    vector<int> v(5,7);    

    displayVector(v);

    /*
    Important notes


    # Pairs
    ->pair<int,int> p = {1,2};
        p.first;         // access
        p.second;        // access

    ->vector<pair<int,int>> v;
    sort(v.begin(), v.end()); // lexicographic

    ->priority_queue<pair<int,int>> pq; // max heap

    ->auto p = make_pair(3,4);


    #Vectors

    ->pass vector by reference to function since when copy is made it takes O(n) time complexity

    ->v1 = v2 is O(n)

    -> vector functions => 
        1.push_back()
        2.pop_back()
        3.size()

    -> v(5)  = vector of size 5 with all elements as 0

    -> v(5,7)  = vector of size 5 with all elements as 7;

    */

    return 0;
}