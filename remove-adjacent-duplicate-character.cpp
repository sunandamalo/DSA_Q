// remove-adjacent-duplicate-character in a string

string removeDuplicate(string &s)
{
    int n = s.size();
    string ans ="";
    for(int i =0; i<n; i++){

        // n-1 porjonto check kora holo jate out of bound na jai
        // == hole continue kore agie jabo
        if(s[i] ==s[i+1] && i<n-1){
            continue;
        }
        else{
            // not equal to hole ans e store korabo

            ans += s[i];
        }
        
    }
    return ans;

}
