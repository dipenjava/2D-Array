#include "iostream"
using namespace std;
void evenOddRowSum(int arr[][4], int nrow, int ncol) {
    for (int col = 0; col < 4; col++)
    {
        if(col&1)
        {
            for(int row=nrow-1;row>=0;row--)
            {
                cout<<arr[row][col]<<" ";
            }
        }
        else
        {
            for(int row=0 ;row<nrow;row++)
            {
                cout<<arr[row][col]<<" ";
            }
        }
    }
}
int main()
{
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<"After method call: "<<endl;
    evenOddRowSum(arr,3,4);
}











//
// Created by 91919 on 20-07-2023.
//
