#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int vowelConsonantScore(string s) {

        int c = 0;
        int v = 0;
        
        for(int i = 0; i< s.size(); i++){
            

            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
                v++;

            else if(s[i] == 'b' || s[i]=='c' || s[i]=='d' || s[i]=='f' || s[i]=='g' || s[i]=='h' || s[i]=='j' || s[i]=='k' || s[i]=='l' || s[i]=='m' || s[i]=='n' || s[i]=='p' || s[i]=='q' || s[i]=='r' || s[i]=='s' || s[i]=='t' || s[i]=='v' || s[i]=='w' || s[i]=='x' || s[i]=='y' || s[i]=='z')
            c++;
            
        }

        if(c==0)
        return 0;
        
        return floor(v/c);
    }
};

