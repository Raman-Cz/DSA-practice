//Given two strings, write a method to decide if one is a permutation of the 
//other. 

#include<bits/stdc++.h>
using namespace std;

bool CheckPermutation1(string  s1, string  s2)
{
    if(s1.size() != s2.size()) return false;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());

    return s1 == s2;
}

bool CheckPermutation2(string  s1, string s2)
{
    if(s1.size() != s2.size()) return false;
    vector<int>arr(128,0);
    for(int i=0;i<s1.size();i++){
        int chIdx = s1[i];
        arr[chIdx]++;
    }

    for(int i=0;i<s2.size();i++){
        int chIdx = s2[i];
        arr[chIdx]--;
        if(arr[chIdx]<0) return false;
    }

    return true;
}
int main() {

    cout<<CheckPermutation1("racecar","carrace")<<CheckPermutation2("racecar","carrace")<<endl;
    cout<<CheckPermutation1("raceca","carrae")<<CheckPermutation2("raceca","carrae")<<endl;

    return 0 ;
}