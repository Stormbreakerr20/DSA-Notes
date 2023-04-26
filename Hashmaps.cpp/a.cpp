// we need hashtables so that we can perform few function in o(1) time complexiety like insertion, deletion and search 

#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;

int main(){

    unordered_map<string,int> m;

    // Insert
    // 1
    m["Luv"]=1;

    // 2
    pair<string,int> p("Nani" , 3);
    m.insert(p);

    // what this do
    m["Luv"]=3;   // this updates the value of luv in map

    // SEARCH
    cout<< m["Luv"]<<endl;
    cout<< m.at("Luv")<<endl;  //both same 

    // but if we run this for key which is not there then at wala will give error and normal wala will give 0
    cout<< m.at("unknown")<<endl;   // if we write at wali after normal wali for unknown then it will also show 0 as normal will create a value for unknown as 0
    cout<< m["unknown"]<<endl;

    // size
    cout<<m.size()<<endl;

    // check presence
    cout<<m.count("Luv")<<endl;
    //erase
    m.erase("luv");

    //traverse
    for(auto i:m){
        cout<<i.first << " "<<i.second;
    }cout<<endl;

    //iterator traversing 
    unordered_map<string,int> :: iterator it =m.begin();   // if we use map then it will give in same order as present else will be random
    while(it !=m.end()){
        cout<<it->first<<" "<<it->second;
        it++;
    }cout<<endl;


}
