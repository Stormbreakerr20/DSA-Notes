#include<iostream>
using namespace std;

#include<array>
// array############################################
// int main(){
//     array<int,4> a={1,2,3,4};
//     cout<<a.size();
//     cout<<a.front();
//     cout<<a.back();
//     cout<<a.at(1);
//     cout<<a.empty();
// }

#include<vector>
// int main(){       ////vector****************                 
//     vector<int> v;
//     cout<<"Capacity: "<<v.capacity()<<endl;   //capacity=jagah availabe size =no. of elements
//     // vector doubles the capacity when a element more than capacity enters like if cap=2 and size=2 if we push element size=3 cap=4
//     v.push_back(1);
//     cout<<"Capacity: "<<v.capacity()<<endl; 
//     v.push_back(2);
//     cout<<"Capacity: "<<v.capacity()<<endl; 
//     v.push_back(3);
//     cout<<"Capacity: "<<v.capacity()<<endl;
//     cout<<"Size: "<<v.size()<<endl; 
//     cout<<"front el:"<<v.front();
//     cout<<"back el:"<<v.back();
//     v.pop_back();
//     cout<<"back el:"<<v.back()<<endl;
//     // print el
//     for(int i:v){
//         cout<<i<<" ";
//     }
//     // when vector clear size become 0 not capacity
//     v.clear();
//     cout<<"Size: "<<v.size()<<endl; 
//     // initial vec

//     vector<int> a(5,1);//size=5 and all elements are 1, by def they are 0;
//     // copy
//     vector<int> copy(a);
//     for(int i:copy){
//         cout<<i<<" ";
//     }
// }
    
#include<deque>
// it is double ended que can be edited or used from both end
// int main(){
//     deque<int> d;
//     // these are commonly used
//     // d.push_back(1);
//     // d.push_front(2);
//     // d.pop_front();
//     // d.pop_back();
//     // d.at(1);
//     // d.front()/back();
//     // d.empty();
//     // erase
//     d.erase(d.begin(),d.begin()+1); //(start,end) end not inc
// }

#include<stack>
// int main(){
//     stack<string> s;
//     // stack is last in first out
//     s.push("Luv");
//     s.push("Sharma");
//     s.push("is IITian");
//     cout<<"Top: "<<s.top()<<endl;
//     s.pop();
//     cout<<"Top: "<<s.top()<<endl;
// }

// queue and priority queue
#include<queue>
// int main(){
//     // first in first out
//     queue<int> q;
//     q.push(2);
//     q.push(1);
//     cout<<q.front()<<endl;
//     // priority_queue prints from max ele first or min ele first
//     //max heap
//     priority_queue<int> maxi;
//     maxi.push(3); 
//     maxi.push(0); 
//     maxi.push(1);
//     int n=maxi.size();
//     for(int i=0;i<n;i++){
//         cout<<maxi.top()<<" ";
//         maxi.pop();
//     } 
//     cout<<endl;
//     //min heap
//     priority_queue<int,vector<int>,greater<int>> mini;
//     mini.push(3); 
//     mini.push(0); 
//     mini.push(1);
//     int n2=mini.size();
//     for(int i=0;i<n2;i++){
//         cout<<mini.top()<<" ";
//         mini.pop();
//     } 
// }

#include<set>
//set: all el unique if we enter 5 3 times it shows once only,,, el are extracted sorted,,, unordered set faster and el random 
// int main(){
//     set<int> s;
//     s.insert(5);
//     s.insert(5);
//     s.insert(5);
//     s.insert(4);
//     s.insert(3);
//     for(int i:s){
//         cout<<i<<" ";
//     }
//     set<int>::iterator it=s.begin();
//     it++;
//     cout<<endl;
//     s.erase(it);
//         for(int i:s){
//         cout<<i<<" ";
//     }
//     cout<<endl<<"Is 5 there? "<<s.count(5);
// }

#include<map>
// int main(){
//     map<int,string> m;
//     //both syntax valid
//     m.insert({1,"Luv"});
//     m[2]="Sharma";
//     for(auto i:m){
//         cout<<i.first<<" "<<i.second<<endl;
//     }
//     m.erase(2);
//     for(auto i:m){
//         cout<<i.first<<" "<<i.second<<endl;
//     }
// }


//imp
#include<algorithm>
// int main(){
//     vector<int> v;
//     v.push_back(1);
//     v.push_back(3);
//     v.push_back(6);
//     v.push_back(7);
//     //we should enter elements in sorted order for bin search
//     for(auto i:v){
//         cout<<i<<" ";
//     }
//     cout<<endl<<"is 7 there: "<<binary_search(v.begin(),v.end(),7)<<endl;
//     string a="abcde";
//     reverse(a.begin(),a.end());
//     cout<<a;
// }