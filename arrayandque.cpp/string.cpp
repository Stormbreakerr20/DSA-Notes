#include<iostream>
using namespace std;
bool palindrome(string s){
    int st=0,e=s.length()-1;
    while(st<s.length()){
        if (s[st]==s[e]){
            st++;
            e--;
        }
        else{
            return false;
        }
    }
    return true;
}
int main(){
    string s=" ,aan";
    // cout<<s<<endl;
    // cout<<s.length();  //space included
    // s.push_back('l');
    // cout<<endl<<s;

    //remove useless char and upper to lwer case
    string temp;
    for (int i=0;i<s.length();i++){
        if (s[i]>='A'&&s[i]<='Z'){
            s[i]=s[i]-'A'+'a';
            temp.push_back(s[i]);
        }
        else if  ((s[i]>='a'&&s[i]<='z')|| ( s[i]>=0&&s[i]<=9)){
            temp.push_back(s[i]);
        }

   


    }
    cout<<endl<<palindrome(temp);


}