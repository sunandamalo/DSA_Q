// replace spaces with @40

#include <bits/stdc++.h> 
string replaceSpaces(string &str){
	string ans ="";
	for(int i=0; i<str.length(); i++){
		if(str[i] ==' '){
		  ans.push_back('@');  

          ans.push_back('4');   

          ans.push_back('0');
		}
		else{
			ans.push_back(str[i]);
		}
	}
	return ans;
}


// process 2
// erase and instert

#include <bits/stdc++.h> 
string replaceSpaces(string &str){
	//string ans ="";
	for(int i=0; i<str.length(); i++){
		if(str[i] ==' '){
		  str.erase(i,1);

                  str.insert(i, "@40");
		}
		
	}
	return str;
}