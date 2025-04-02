#include<bits/stdc++.h>
using namespace std;

long long solve(int a){
    long long product = 1 ;
    while(a != 0){
       product*=(a%10);
       a/=10;
    }
    return product;
}
 
int main(){
 vector<int>arr;
 int a ;
 int size = 0;
 cout << "give the input\n ";
 while(cin >> a){
    arr.push_back(a);
    size++;
 }
 vector<int> res(size,0);
 for(int i = 0 ; i <size ;i++){
    long long product = solve(arr[i]);
    res[i] = product ;
 }
  
 for(int i =0 ; i< size;i++){
    cout<<res[i] <<" ";
 }

 return 0;
}
