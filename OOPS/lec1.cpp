#include<iostream>
using namespace std;
// for empty class size = 1;

class a{};
//for class with things size = sum of properties size
class b{ 
    int x;  // here x is private by def 
    public:
    int y;

    //constuctor
    b(){
        cout<<"constructor";
        this->y = 0;
    }

    void sety(int val){
        y = val;
    }
    int gety(){
        return y;
    }
};

class fight{
    public:
    int health;
    int lvl;

    //static keyword
    static int Time;

    fight(int h,int l){
        this->health=h;
        this->lvl=l;
    }
    // our own copy const
    fight(fight& temp){ // if we dont add & it is pass by value and make a copy  so we do pass by reference
        this->health=temp.health -10;
        this->lvl = temp.lvl;
    }

    static void random(){
        cout<<Time;
    }

    //Destructor : deallocate memory
    // for static destructor call automatically  after constructor call
    //but for dynamic call manually : by delete fight;
    ~fight(){

    }


};

//static keyword:
// Datatype classname::var = value
int fight::Time = 5;




int main(){

    //static 
    b obj;  // object of size 4  // also calls constructor
    cout<<obj.x;  // error as x is private
    cout<<obj.y; //valid

    obj.sety(4); //setter 
    int alpha = obj.gety(); // getter  

    ///// imp :https://www.geeksforgeeks.org/structure-member-alignment-padding-and-data-packing/  interview

    //Dynamic
    b *dy = new b(); //cals constructor also
    (*dy).sety(3);  //(* as for val, dy is address)  
    //or m-2
    dy->sety(3);



    fight luv(100,5);

    //copy constructor
    fight yash(luv); // by def it has its own copy const but we can create our own copy const as done 



    //Shallow copy 
    // default copy constructor do it means: any change in values of luv like lvl = 4 make lvl of yash also 4; 

    // deep Copy is by making new var while our own copy constuctor


    //assignment operation
    fight virat(200,6);

    luv =virat; // now luv : health = 200 and lvl =6; 

    //static keyword
    cout<<fight::Time; // better however also works as luv.Time

    //static functions can access only static keywords




}
