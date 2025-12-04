
/*
IMPORTANT NOTES

1. Array of vectors => 2d array with variable row size

2. Vector of vectors => 2d array with variable column and row size

*/

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


void DisplayArrayVector(vector<int> (&arr)[], int size)
{
    for(int i=0;i<size;i++)
    {
        displayVector(arr[i]);
    }
}

void DisplayVectorOfVector(vector<vector<int>> &arr)
{
    for(int i=0;i<arr.size();i++)
    {
        displayVector(arr[i]);
    }
}

int main()
{
    // vector<int> v1[3];

    // for(int i=0;i<3;i++)
    // {   
    //     int n;
    //     cin>>n;

    //     // vector<int> temp;

    //     for(int j=0;j<n;j++)
    //     {
    //         int x;
    //         cin>>x;
    //         v1[i].push_back(x);    
    //     }

    // }

    // DisplayArrayVector(v1, 3);


    vector<vector<int>> v2;
    int size;
    cin>>size;
    for(int i=0;i<size;i++)
    {   
        int n;
        cin>>n;

        vector<int> temp;

        for(int j=0;j<n;j++)
        {
            int x;
            cin>>x;
            temp.push_back(x);    
        }

        v2.push_back(temp);

    }

    DisplayVectorOfVector(v2);


    return 0;

}


/*
INPUT CODE
3
2
0 1
3
3 5 7
4
13 17 27 29
*/

