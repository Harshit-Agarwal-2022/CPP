#include <bits/stdc++.h>

using namespace std;

void PrintMap(map<int,int> &m1)
{
    for(auto pr: m1)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}

int main()
{
    map<int,int> m1;
    
    vector<int> v1 = {0,1,0,1,1,1,1,0,1,1,1,1,0,0};
    
    for(auto i :v1)
    {
        m1[i]++;
    }

    // auto it = m1.find(1);
            
    // if(it!=m1.end())
    // {
    //     cout<<(*it).first<<" "<<(*it).second<<endl;
    // }
    // else{ cout<<"not found"<<endl;}

    PrintMap(m1);
    
    m1.erase(0);
    
    PrintMap(m1);



    return 0;
}