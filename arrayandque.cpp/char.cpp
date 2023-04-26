// // Its all about trminator \0
// #include <cstring>

// #include<iostream>
// using namespace std;
// int length(char name[]){
//     int count=0;
//     for (int i=0; name[i]!='\0';i++){
//         count++;
//     }
//     return count;
// }
// char lowercase(char ch){
//     if (ch>='a'&& ch<='z'){
//         return ch;
//     }
//     else{
//         char t=ch -'A' +'a';
//         // if we do int t =ch-'a' then if ch='c' =====> t=3-1=2
//         return t;
//     }
// }
// bool palidrome(char w[]){
//     int s=0,e=length(w)-1;
//     while(s<length(w) and e>=0){
//         if (w[s]==w[e]){
//             s++,e--;
//             continue;
//         }
//         else{
//             return false;
//         }
//     }
//     return true;
// }
// string rev(string s){
//     string temp="";
//     int st=0,e=s.length()-1;
//     while(st-1<e){
//         temp+=s[e];
//         e--;
//     }
//     return temp;
// }
// int main(){
//     cout<<lowercase('B')<<endl;
//     char name[20]="I am luv";
//     // single qoutes only below
//     // "I am luv\0" currently
//     // name[2]='\0';   
//     //rev char arr
//     string temp="";
//     string s="";
//     for (int i=0;i<=length(name);i++){
//         if (name[i] ==' ' || name[i]=='\0'){
//             temp=temp+rev(s);
//             s="";
//         }
//         else{
//             s+=name[i];
//         }
//     }
//     cout<<temp;
//  // we know char array has '\0' but if we want full line to be as single object we use cin.getline(char_name,char_length,delimiter(default space))
//     char y[10];
//     cout<<endl<<"Enter: ";
//     cin.getline(y,10);
//     cout<<y;
// //inbuilt 
//     //length
//     int len=strlen(y);  //strlen()   use #include<cstring>
//     cout<<endl<<len;
//     //copy
//     char a[10];
//     strcpy(y,a);
//     cout<<endl<<a;
// }
#include<iostream>
#include<cstring>
using namespace std;

// Remove all occurrences of substring: https://bit.ly/3sfP71Q 
int main(){
    string s,subs;
    cout<<"s: ";
    cin>>s;
    cout<<"Subs: ";
    cin>>subs;
    int len_subs=subs.length();
    int len_s=s.length();
    while(len_s!=0 && s.find(subs)<len_s){
        s.erase(s.find(subs),len_subs);
    }
    cout<<s;



    // check google for all string function
}


