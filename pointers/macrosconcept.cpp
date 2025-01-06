// macros we use it as const like pi that we use many times we can also use float f=3.14 but takes storage,,, by macros no storage

#include<iostream>
using namespace std;
#define PI 3.14    //macros is used using #define
// we can't change value i.e PI++ useless;

// js types if else
#define MIN(a,b) ((a<b) ? a:b)

#define Area(l,b) (l*b) 


// Global Var - Not a good practice never use    : change in global var will reflect globally, we can also use refernce var concept to get same address of var in function as well and it is better practice 
// life of local var is in {}


int I_AM_GLOBAL=1;
void func(){
    cout<<I_AM_GLOBAL<<endl;
    I_AM_GLOBAL++;
    cout<<I_AM_GLOBAL<<endl;
}

// def arg
void fu(int arr[],int start=0){
    cout<<arr[start]<<endl;
}
int main(){
    cout<<Area(5,4)<<"   pi: "<<PI<<"  min 3,4: "<<MIN(3,4)<<endl;
    cout<<I_AM_GLOBAL<<endl;
    func();
    cout<<I_AM_GLOBAL<<endl;

    int arr[2]={1,2};
    fu(arr);

}