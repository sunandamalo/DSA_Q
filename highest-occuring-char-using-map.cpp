//highest-occuring-char-using-map

#include<bits/stdc++.h>
char highestOccurringChar(string str) {
    // Write your code here
    unordered_map<char, int> mp;
    //int count =0;
    int max =-1;
    char result = str[0];     
    for(int i=0;i<str.size(); i++){
        mp[str[i]]++;  // count korleo hoi but sob test acase pass korche na
        if(max<=mp[str[i]]){
            max = mp[str[i]];
            result = str[i];
        }
    }
    return result;
    
}