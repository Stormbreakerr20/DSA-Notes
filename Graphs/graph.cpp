//  Graph is Data stuct  which has an edge and node 

// undirected graph are those without direction of edge ==? a--b
// directed ones have direction in edges ==> a-->b

// Degree of tree => degree of node= no. of edges it is connected with 

// for directed graph type 1. out degree = how many going out  2. Indegree = how many coming towrds that node


// wieghted graph ==> edges will have weights ,,, standard s each have weight as 1
//  unordered_map<int,list<pair<int,int>> m;

// Path : in a graph all path possible are included in path

// cyclic graph : closed loop path such that no start no end

// Acyclic graph: has end and start


// GRAPH:::   i/p ==> nodes no. , no. of edges , connection of each node 

// EX : nodes= 3, edges = 3 ==> 0->1 , 1->2, 2->0  (form triangle)

// 1. Adjancey matrix: 
// Directed
// Represent as 2d array     0  1  2
                        //0  0  1  0      like: 0 kaa 2 ke sath hai
                        //1  0  0  1          : 1 ka 2 ke sath hai
                        //2  1  0  0          :  2 ka 0 ke sath hai 

//  for undirected graph => 0->1,1->0 and 1->2,2->1 and 0->2,2->0

// Represent as 2d array     0  1  2
                        //0  0  1  1      like: 0 kaa 2 ke sath hai
                        //1  1  0  1          : 1 ka 2 ke sath hai
                        //2  1  1  0 


// 2. adjancey list => 0=>1,2        we directly write kaun kisse connected hai
//                     1=>0,2
//                     2=>0,1

// Above one is implemented via =>  map<int , vector<int>> list can also be used    or vector<vector<int>> where index represent key 




#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

class graph{

    public:
    unordered_map<int , list<int>> adj ;


    void addEdge(int u, int v, bool diretion){
        // direction 0=> undirected
        // direction 1=> directed

        // for both case we will develop connection between u to v 

        adj[u].push_back(v);

        if(diretion == 0){
            // connection from 1 to 0
            adj[v].push_back(u);
        }
    }

    void print(){
        for(auto i: adj){
            cout<<i.first<<" -> ";
            for(auto j:i.second){
                cout<<j<<", ";
            }cout<<endl;
        }
    }
};

int main(){

    graph g;

    cout<<"Enter total nodes: ";
    int n;
    cin>>n;
    cout<<endl;
    
    cout<<"Enter total edges: ";
    int m;
    cin>>m;
    cout<<endl;

    for(int i=0 ; i<m;i++){
        int u,v;
        cin>>u>>v;
        // Undirected
        g.addEdge(u,v,0);
    }

    g.print();

// 0 1
// 1 2
// 2 3
// 3 1
// 3 4
// 0 4


}
















