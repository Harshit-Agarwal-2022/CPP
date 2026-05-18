#include <bits/stdc++.h>

using namespace std;

void printMap(map<int,string> &m)
{
    for(auto &it : m)
    {
        cout<<it.first<<" "<<it.second;
        cout<<endl;
    }
    cout<<endl;
}



int main()
{

    map<int,string> m1;

    m1[3] = "abc"; // (O(logn))
    m1[5] = "def";
    m1[9] = "ghi";
    m1[7] = "jkl";
    m1[7] = "jkl";
    m1[7] = "jkl";

    
    // iterating over map usign iterator
    // map<int,string> :: iterator it;
    /* for(it = m1.begin(); it!=m1.end(); ++it)
    {
        cout<<it->first<<" "<<it->second;
        cout<<endl;
        } */
       
       printMap(m1);
    
     /*   
       auto it = m1.find(7); //(O(logn))

       if(it!=m1.end()){
           cout<<it->first<<" "<<it->second;
           cout<<endl;
       }
      */
       
       m1.erase(7);
       printMap(m1);


    return 0;
}