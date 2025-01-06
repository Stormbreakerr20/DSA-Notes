// Graph https://www.codingninjas.com/codestudio/problems/create-a-graph-and-print-it_1214551?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0

// in above que there was runtime error as I was not specifying vector<vector<int>> v(n)   (n) this i forgot ==>specify size of vector

// BFS: https://www.codingninjas.com/codestudio/problems/bfs-in-graph_973002?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0
// breadth first search  
//Tc : O(vertices+edges)  == > o(n)

// IF TLE use vector in place of map

// DFS: https://www.codingninjas.com/codestudio/problems/dfs-traversal_630462?leftPanelTab=1
// depth first search

//  Cycle Detection in Undirected graphs have 2 submission by bfs then dfs : https://www.codingninjas.com/codestudio/problems/cycle-detection-in-undirected-graph_1062670?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0

//  Cycle Detection in directed graphs have 2 submission by bfs then dfs :          //dfs is about one more array in place of parent i.e call  //
//bfs based on kahn's algo as it is applies to acyclic directed graph so if cyclic the topological order is wrong

//Cycle Detection in directed graphs: https://bit.ly/3Pa72Qy

// Topological Sort: https://bit.ly/3M9mM4t (DFS)
// of DAG==> directed acyclic graph                  //  Topological Sort : Linear ordering of all vertices such that for all edges u-v ==> u appears before v
// ex: 0->1 3
//     1->2
//     3->2
//     2->                 
//valid topological sort is ==> 0 1 3 2==> 0 comes before 1 and 3 ==> 1 bfore 2 ==> 3 before 2 
// we use stack in dfs top sort ==> whenever call is cut we put it in stack

//Topological sort : BFS: kahn's Algo:   make vector of indegree of each element 
//                                       implement queue ans then take child of q.front() if indegree is 0 insert in queue else continue
//                                       when q.pop() reduce indegree of child of that node
 

//MST / Prism: 
//spanning tree : graph to tree such that it has n node and n-1 edges : we are able to reach from one node to every other node easily not necassarily directly 
// MST: minimum spanning tree st there is minimum weight
//  Prim's Algo: https://bit.ly/3axYOSF  : MST

// Kruskal algo: https://www.codingninjas.com/codestudio/problems/minimum-spanning-tree_631769?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0
//Union of sets: // algo is used to find two nodes lie in same components or not ==> if parent of both equal ==> yes else no
// vector of rank and parent of each node : ex 1 ,2 ,3,4,5 ==> initially parent(i)=i, rank =0 of all three
// Union 1,2 ==> get parent of both then check rank of parents ==> if rank equal kisi ko kisi ke sath bhi krdo ==> let 1->2  ==> parent[2]=1, rank[1]++
// union 2,3 ==> parent 2=1 , 3=3, rank parents => 1=>1,3=>0  ==> rank[3]<rank[1]==> parent[3]=1      //zyada rank wala parent bnado    ////////////////    Only when rank equal rank[]++
//note above union was of 2 and 3 but we modified parent and rank of their parents
// union 4,5 ==> since like case 2=> parent[5]=4,rank[4]++
//imp : if parent[8]=7 , parent[7]=6 ==> then parent[8] will also be 6 not 7  this process takes time to find final parent so we use path compression
//path compression : so when we will traverse for first time like above to get parent of 8 we will attach 8 directly with 6 so future traversal fast==> update parent[8]=6
//kruskal:   to find mst
//use linear structure rather adj list :  get each edge and its wieght==> wt,u,v store them and then sort on basis of wt (stored as vector<vector>)
// then from sorted get u and v for each ==>if parent u,v not same merge them, else if same =>ignore  // merge parents not node
//by the end mst is ready

//union set TC from research = O(1) hence total TC = O(mlogm ) as we use sorting :SC: O(n)

// sorting for vector<vector<int>> v:   if we want to sort according to 3rd element of each vector
// bool cmp(vector<int>&a,vector<int>&b ){
//   return a[2]<b[2];
// }
// sort(v.begin(),v.end(),cmp)













