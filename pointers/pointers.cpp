#include<iostream>
using namespace std;
//func
void print(int *p){
    cout<<p<<"  "<<*p;
}
void update1(int *p){
    p++;
}
void update2(int *p){
    (*p)++;
}

// why pointer? : To do system-level programming where memory addresses are useful. Execution time with pointers is faster as directly memory
//why syntax is int *p      1.it tell us about type of pointer 2. it tell us about memory space it will take 

// memory has symbol table==> maping of variable name to address
//ex num =5 address=120 hence num-->120 mapped  

//pointer
int main1(){
    //pointer
    
    // note arr_name[5]  for array address of first element i.e address of arr[0]=name of array =arr_name
    //arr address 
    int arr_name[10];  //memory of 10*4=40 bytes
    int arr[2]={1,2};
    cout<<"address of first index: "<<arr_name<<" = "<<&arr_name[0]<<endl;

    //therefore arr_name=p pointer which has address and *arr_name=*p value which is arr[0]
    cout<<"*arr_name: "<<*arr_name<<" arr[0]= "<<arr_name[0]<<" *arr_name+1: "<<*arr_name+1<<endl; //currently garbage value at arr[0] will not show error cout<<arr[0]

    // 0th to 1st loc
    cout<<"first loc value: "<<*(arr+1)<<endl;

    // how we get arr[i] we get as comp manipulate as *arr +i          // note: hence arr[i]=*(arr+i)= i[arr]
    cout<<" ##### arr[i] = "<<arr[1]<<" = "<<" i[arr] = "<<1[arr]<<endl;


    //differences array and pointer
    //1. sizeof(arr)=4*length bytes but size of int *p =&arr[0] sizeof(p)= 8 bytes (sizeof(*p) = 4bytes as it's an int val)
    //2.
    cout<<arr<<endl;
    cout<<&arr[0]<<endl;
    cout<<&arr<<endl;                //all three same
    //but
    int *ptr=&arr[0];      // note : cout<<ptr[2] = *(ptr+2)=*(arr+2) O/P = element at index 2
    cout<<ptr<<endl;       
    cout<<&ptr<<endl;     //this is address of p pointer     
    cout<<*ptr<<endl;   

    //3. symbol table rep of arr can't be changed 
        // we can do ptr++ but arr++ is error    



    //char arrays and pointer
    int arr_int[5]={1,2,3,4,5};
    char arr_char[4]="abc";

    cout<<arr_int<<" display address of 0th el"<<endl;
    cout<<arr_char<<" display content"<<endl;

    char *ptr1=&arr_char[0];
    cout<<*ptr1<<endl;
    cout<<ptr1<<endl;   // do not give address rather prints content

    //simply p=address *p =value
    int num =50;
    char ch='a';
    int i=1;
    int *p1=&num;      //*p1 stores address of num
    char *p2=&ch;      // type of pointer same as variable
    cout<<"Value: "<<*p1<<" "<<*p2<<endl;
    cout<<"Address: "<<p1<<" "<<p2<<endl;  //p2 - prints a2 that means it will do p2++ until we get null char
    //note char pointer ++
    ch++;  //hence ch='b'
    cout<<p2<<endl; // print 'b'and other if null char not found (as ch pointer address is value itself + until null found)


    //size
    cout<<"Size of int= "<<sizeof(num)<<endl;
    cout<<"Size of pointer= "<<sizeof(p1)<<endl;


    //pointer to garbage value    #wrong approach never do
    int *p;
    //do this rather
    int *p3=0;
    //assign to null pointer
    p3=&i;     // here star is not there 


    //changing the *p

    //num=50 
    (*p1)++;
    cout<<num<<endl;  //num =51
    //but
    int a=num;  //a=51
    a++; //a=52
    cout<<num<<endl;  //num unchanged =51 as a just copies num value not related to address

    //copying a pointer 
    int *q=p1;
    cout<<p1<<" "<<q<<endl;
    cout<<*p1<<" "<<*q<<endl;

    //void pointer: can take any data type and can be typecasted
    void* ptr5=&num;
    ptr5=&ch;


    //important
    //(*p1)++ increases value by 1
    cout<<"Address and val before: "<<p1<<" "<<*p1<<endl;
    p1++; // if the address at p1 was 100 then it goes to next address i.e 104( int = 4 bytes)
    cout<<"Address and val after: "<<p1<<" "<<*p1<<endl;

    //func
    print(p1);
    cout<<endl<<"before: "<<p1<<"  "<<*p1;
    update1(p1);
    update2(p1);
    cout<<endl<<"After: "<<p1<<" "<<*p1<<endl;  //p1 in update is different hence remain same  address but value of *p can be updated

}

//v-imp 
void func(int arr[],int n){
    //  here int arr is not an array it is passed as pointer in func so if we write int *arr then also same thing.....

    // so if we pass arr={1,2,3} then size should be 4*3=12 but it is not an array in func it is a pointer hence size=8

    //benifits: we can send specific part of array like func(arr,n) or func(arr+2,n-2)==>(start from 2nd index)
}

//double pointer 
int main(){
    //double pointer
    int i=5;
    int *ptr1=&i;
    int **ptr2=&ptr1;
    // int ***ptr3=&ptr2;  3 pointer and so on can be done 

    //i address
    cout<<&i<<endl;
    cout<<ptr1<<endl;
    cout<<*ptr2<<endl;

    //i value
    cout<<*ptr1<<endl;
    cout<<**ptr2<<endl;

    //ptr1 address
    cout<<&ptr1<<endl;
    cout<<ptr2<<endl; 
}
void update2(int **p2){
    //this happens always function create new address of argument we send like of p2 here.  if f(int n){n++;} || int n=5||f(n) cout<<n|| o/p=5 as n in function is different. // this is called pass by value

    p2++;
    //change hoga?  no    
    (*p2)++;
    //change hoga? yes 
    (**p2)++;
    //change hoga? yes 

    //hence only value of i and address of ptr1 changes
    
    //copy dekh ek baar  ************************************
}









