// valid palindrome after ignoring characters

#include <bits/stdc++.h> 
bool validPalindrome(int n, string &s)
{
    // Write your code here.
    int count=0;

    int i=0,j=n-1;

    //mark i as 0th index and j as last index

    while(i<j){//traverse both i & j together

        if(s[i]==s[j]){//if first and last element are same then we traverse 

            i++;

            j--;

        }

        else if(s[i]==s[j-1]){//if ith element is same as previous element of jth index

            count++;

            j--;

        }

        else if(s[i+1]==s[j]){//if (i+1)th element is same as element of jth index

            count++;

            i++;

        }

        else{

            return false;// if there are 2 different elements so return false

        }

    }

    if(count>1){

        return false;

    }

    else {

      return true;
    }
}