#include<iostream>
using namespace std;
//note : quiz : never do 
// {
//     int n;
//     cin>>n;
//     int arr[n]        this take size of array at runtime very bad practice, always take some default no. during compile time like int arr[1000]
// }
//why not at runtime? : memory = 2 type= stack (small) and heap(large)
//since we assign n size which is not yet defined it takes stack memory and suppose the n is large during run time needed heap// the compiler fails

//stack vs heap : stack->static memory allocation -->by default -->small in size
//              : heap-> dynamic memory allocation --> you need " new " keyword to use it --> large

//heap : new int or new char this will give us an address
//       we can't do new int i=5 i.e variable can't be formed  in heap

//       so here comes pointers role::::::    int *ptr = new int; and then we can assign value (the statement is overall 12 bytes : 8 ptr + 4 int (new wala ))


// heap with array:      int *arr= new int[5]       rhs gives address of 0th place of array in heap    memory =(8ptr + 5*4 )= 28 bytes

// variable array : int n; || cin>>n;|| int *arr= new int[n]  || now use as arr[i] just like array

// v-imp in dynamic allocation (heap)  memory is not released
//  while(true){        static hence as reach last bracket i vanish as local var memory is released  i.e 4->0->4->0....... 
//     int i =5;
// }
//  while(true){
//     int *ptr= new int;     dynamic hence not released memory = 8+4->0+4->(4)+8+4->0+4+4->....... but 8 is of ptr which is in stack
// }

//to release dynamic memory use "delete" keyword (manually)   EX: delete i || delete []arr;

// 2 D array of user defined r and c
int main1(){
    // we will have array of length r such that each element represent array of length c
    int r,c;
    int **arr=new int*[r];  //return array of address

    //[int *,int*.....] each int * will represent arr
    for(int i=0;i<r;i++){
        arr[i]=new int[c];
    }

    //releasing mem
    for(int i=0;i<r;i++){
        delete [] arr[i];
    }
    delete []arr;
}



//note imp: using ptr and ref var in return is bad practice as scope of variable dies outside function
//note for quiz:   works but give warning
int& func(int n){
    int num=n;
    int &x= num;
    return x;
}
int* func1(int n){
    int *ptr=&n;
    return ptr;
}

//reference variable
void update1(int n){
    n++;
}
void update2(int &n){
    n++;
}
int main(){
    //  reference variable:  same memory different name ....  Ex: i=5 address=710 if j=5 with same address (710 ) then j is reference var

    //hence j and i point to same dabba;

    int i=5;
    int &j=i; 

    i++;
    cout<<i<<endl;
    j++;
    cout<<i<<" "<<j<<endl;

    // why? needed : see the funct update1 and update2 in 2 we have ref var so main i incremented but in 1 it had copy of i in func , diff from  main
    //update2: pass by refernce up1: pass by value
    cout<<"Before: "<<i<<endl;
    update1(i);
    cout<<"After up1: "<<i<<endl;
    update2(i);
    cout<<"After up2: "<<i<<endl;
}



