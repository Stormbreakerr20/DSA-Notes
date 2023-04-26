#include<iostream>
using namespace std;
bool present(int arr[][3],int r,int c,int y){//no.of column necassry to give
    for(int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            if (arr[i][j]==y){
                return true;
            }
        };
    }
    return false;
} 
void rowwisesum(int arr[][3],int r, int c){
    int large=-10000;
    for(int i=0;i<r;i++){
        int x=0;
        for(int j=0;j<c;j++){
            x+=arr[i][j];
        }
        large=max(large,x);
        cout<<"Sum of row "<<i+1<<" = "<<x<<endl;
    }
    cout<<"Largest sum: "<<large<<endl;
}
void sinwaveprint(int arr[][3],int r,int c){
    for(int j=0;j<c;j++){
        if(j&1){
            for(int i=2;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int i=0;i<r;i++){
            cout<<arr[i][j]<<" ";
            }
        }
    }
}
#include<vector>
void spiral(int arr[][3],int r,int c){
    int row =0,col=c-1,k=0;
    vector<int> vec;
    while(k<r*c){
        for (int j=row;j<=col;j++){
                vec.push_back(arr[row][j]);
                k++;
        }
        for (int j=row+1;j<=r-row-1;j++){
                vec.push_back(arr[j][col]);
                k++;
        }
            
        
        for (int j=col-1;j>=c-col-1;j--){
                vec.push_back(arr[r-1-row][j]);
                k++;
        }
            
            
        for (int j=r-row-2;j>row;j--){
                vec.push_back(arr[j][c-col-1]);
                k++;
        }
        
        
        row++;
        col--;
            
    }
    for(int i=0;i<r*c;i++){
        cout<<vec[i]<<" ";
    }

}


///////////////////////binary search
bool bins(int arr[][4],int r,int c,int target){
    int s=0,e=r*c-1;
    while(s<=e){
        int mid= (s+e)/2;

        ///imp how to find index in 2d from 1d index 
        if(arr[mid/c][mid%c]==target){
            return true;
        }
        else if(arr[mid/c][mid%c]>target){
            e=mid-1;
        }
        else if(arr[mid/c][mid%c]<target){
            s=mid+1;
        }
    }
    return false;
}
int bins2(int arr[][5],int r,int c,int target){    //Search in a 2D Matrix II LeetCode: https://leetcode.com/problems/search-...  col and row wise sorted
    int s=0,e=c-1;
    while(s<r && e>=0){
        int mid= (s+e)/2;

        ///imp how to find index in 2d from 1d index 
        if(arr[mid/c][mid%c]==target){
            return true;
        }
        else if(arr[mid/c][mid%c]>target){
            e--;
        }
        else if(arr[mid/c][mid%c]<target){
            s++;
        }
    }
    return false;
}





int main(){
    //2d array     stored in memory as {} single array of rxc length

    //to get index in 2d from 1d ex index =11 in 1d row=3 column =4 
    // ===> index 2d = arr[11/col][11%col] ====> arr[2][3]
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int arr0[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int arr1[5][5]={1,4,7,11,15,2,5,8,12,19,3,6,9,16,22,10,13,14,17,24,18,21,23,26,30};


    cout<<bins(arr0,4,4,8)<<endl;
    cout<<bins2(arr1,5,5,11)<<endl;
    // spiral(arr,3,3);
    // rowwisesum(arr0,3,4);
    // sinwaveprint(arr0,3,4);
    // cout<<present(arr,4,4,1);    lin search 



    // int arr[2][3];
    // int arr1[2][3];

    // //row wise
    // for(int i=0;i<2;i++){
    //     for (int j=0;j<3;j++){
    //         cin>>arr[i][j];
    //     }
    // }
    // //column wise
    // for(int j=0;j<3;j++){
    //     for (int i=0;i<2;i++){
    //         cin>>arr1[i][j];
    //     }
    // }


    // //output
    // for(int i=0;i<2;i++){
    //     for (int j=0;j<3;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // for(int i=0;i<4;i++){
    //     for (int j=0;j<4;j++){
    //         cout<<arr0[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }






}