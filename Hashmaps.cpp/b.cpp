//  bucket array : to store key and val : we use normal array with index as key
// Hash functions 
// a. hash code : conversion to int into the length of index of array ,, ex convert 16 into index of array that has length 7 
// it makes uniform distribution like "luv " and "lvu" will be same int  ::: this is called collision

// done by %size

// identity fn  ==>  input=output 
// type 2 ==> string to integer : can be made in any way like adding their ascii


// collisiom handling

// 1, open handling : same place pe dall do 

//  i.e in array lets say luv and vul want to be stored at 7th index :: its possible as in open handling there is head of linked list at each index hence each new value can be pushed into linked list existing at 7th or other index

// this is called seprate chaining


// open addressing: suppose A and B both to be put in 7th index so after A is put B can't be put in same so we will go with first attempt i.e i+1 hence B at 8th index

// quadratic probing ==> (i^2)  if A at 7th now put B at 1^2 +7 , C at 2^2+7 =11 as 7 is zeroth attempt


// Hash Coding T.C===> n= no. of words k = word length ==> generally n>>>k hence TC which was o(k) become o(1)


// Load factor:  n= no. of elements mapped b= total no. of boxes in array ==> LF = n/b which must be <0.7
// if b increase we do reahashing i.e increase bucket size 


// so we use map as all function in o(1)



