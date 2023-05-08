// - Subsets:https://leetcode.com/problems/subsets/

// no. of ele =2^n in power set


#include<iostream>
#include<vector>


// just by addding & so no copy created   code beats 100%
using namespace std;
void splits(vector<int> &v,vector<int> output,int i,vector<vector<int>>& ans){
    //base
    if(i>=v.size()){
        ans.push_back(output);
        return;
    }


    //exclude
    splits(v,output,i+1,ans);

    //include
    output.push_back(v[i]);
    splits(v,output,i+1,ans);
}
   
// - Subsequences: https://bit.ly/33hi3MB

void substring(vector<string> &ans, string output,string& str, int i){
	//base
	if(i>=str.length()){
		if(output.length()>0){
			ans.push_back(output);
		}
		return;
	}

	//exclude
	substring(ans,output,str,i+1);

	//include

	output.push_back(str[i]);
	substring(ans,output,str,i+1);
}

vector<string> subsequences(string str){
	
	// Write your code here
	vector<string> ans;
	string output="";
	int i=0;
	substring(ans,output,str,i);

	return ans;
}
	





// you can use push back with str
int main(){
    string s="ldgwg";
    string y="l";
    cout<<y+s[0];
}