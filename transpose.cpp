#include <iostream>

using namespace std;

int main(){

    int row,col;

    cout<<"Enter Size Of row : ";
    cin>>row;
    cout<<"Enter Size Of col : ";
    cin>>col;

    int arr[row][col];


    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<"Enter Value : ";
        cin>>arr[i][j];
        }
    }

     for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
        cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }

return 0;
}