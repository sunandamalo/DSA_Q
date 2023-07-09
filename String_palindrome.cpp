// check a string is palindrome or not codestudio

#include<bits/stdc++.h>
bool checkPalindrome(string str) {
    // Write your code here
    //int n=length(str);
    int start =0;
    int end = str.size() -1;
    while(start<end){
        if(str[start] != str[end]){
            return false;
        }
        else{
            start++;
            end--;
        }
    }
    return true;
}