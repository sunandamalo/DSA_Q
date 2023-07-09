// reverse a string problem codestudio

#include <bits/stdc++.h> 
string reverseString(string str)
{
	// Write your code here.
	int s =0;
    int e =str.size()-1;
    while(s<=e){
        swap(str[s], str[e]);
        s++;
        e--;
    }
    return str;
}