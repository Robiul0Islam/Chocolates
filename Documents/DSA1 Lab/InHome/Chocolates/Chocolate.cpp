/*Write a greedy solution for the following scenario: 
You have N boxes of chocolates. The i-th box contains x_i chocolates. You can choose any box you like. Before choosing a box you are allowed to make M moves. In each move, you can move any number of chocolates from any box j to any box k. Find out the maximum number of chocolates you can get. Hint: Sort the boxes according to the number of chocolates. 
Sample Input 
N M x_1, …, x_N 
5 2 5 1 4 2 3
Sample Output 
12*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    
    int m;
    cin>>m;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i =0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]<arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;

            }
        }
    }
    int sum=0;
    for(int i=0;i<=m;i++){
        sum=sum+arr[i];
    }
    cout<<sum;
}