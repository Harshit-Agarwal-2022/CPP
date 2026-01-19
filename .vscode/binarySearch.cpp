#include <bits/stdc++.h>
using namespace std;

int binarySearchRecursive(vector<int> &nums, int key, int l ,int r)
{
    int mid = (l+r)/2;

    if(l>r)
    return -1;

    if(nums[mid] == key)
    return mid;

    else if(nums[mid] > key)
    return binarySearchRecursive(nums,key,l,mid-1);
    
    else 
    return binarySearchRecursive(nums,key,mid+1,r);


}

int binarySearchIterative(vector<int> &nums, int key, int l, int r){

    int mid = ((l+r)/2);

    while(l<=r)
    {
        if(nums[mid] == key)
        return mid;

        else if(nums[mid] > key)
        {
            r = mid-1;
        }
        else
        {
            l = mid+1;
        }

        mid = ((l+r)/2);
    }

    return -1;

}

int main()
{
    vector<int> v1 = {2,3,5,7,11,13,17};

    cout<<"2 "<<binarySearchIterative(v1,2,0,v1.size()-1)<<endl;
    
    cout<<"2 "<<binarySearchRecursive(v1,2,0,v1.size()-1)<<endl;
    
    return 0;
}