#include <bits/stdc++.h>

using namespace std;

int main()
{
    /*
    IMPOTANT NOTE:

    iterator it++ is not the same as it+1

    it + 1 will work only for vectors since memory location is continuous

    however it++ will take you to the next iterator hence this is preferred since maps and heaps memory allocation is discountinous so it works for both. 

    */


    vector<int> nums = {3,7,5,13,11};

    // vector<int> :: iterator it;

    // for(it=nums.begin();it!=nums.end();++it)
    // {
    //     cout<<*it<<" ";
    // }

    vector<pair<int,int>> p_vec= {{1,2},{3,4},{5,6},{7,3}};

    // vector<pair<int,int>> :: iterator it2;

    // for(it2 = p_vec.begin();it2!=p_vec.end();++it2){
    //     cout<<endl<<it2->first<<" "<<it2->second;
    // }

    // Ranged based loop

    for(int i: nums)
    {
        cout<<i<<" ";
    }
    
    cout<<endl;
    
    for(auto i: nums)
    {
        cout<<i<<" ";
    }
    
    cout<<endl;


    for(pair<int,int> value: p_vec)
    {
        cout<<value.first<<value.second<<"\t";
    }
    
    cout<<endl;


    for(auto value: p_vec)
    {
        cout<<value.first<<value.second<<"\t";
    }

    

    return 0;
}