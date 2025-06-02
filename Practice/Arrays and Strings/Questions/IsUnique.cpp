// Implement an algorithm to determine if a string has all unique characters. What if you 
// cannot use additional data structures? 


#include<bits/stdc++.h>
using namespace std;

bool IsUnique(string s){
    if(s.size() > 128) return false;

     int n = s.size();
     for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++) if(s[i] == s[j]) return false;
    }
    return true;
}
int main() {
    cout<<IsUnique("aabc")<<endl;
    cout<<IsUnique("abcd")<<endl;
    cout<<IsUnique("abcdefghijklmnopqrstuvw")<<endl;
    cout<<IsUnique("1245512")<<endl;
    // algorithm: we can use an additonal data structure to simplify the problem like a set but that is a constraint in the question
   
    // also the current algorithm takes O(n^2) but O(1) space
   
    // we can also compare adjacent characters of strings if we are allowed to sort the string
    return 0 ;
}