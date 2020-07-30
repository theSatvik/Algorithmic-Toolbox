#include<bits/stdc++.h>
#define MAX 1000000
using namespace std;
int arr[MAX];
int part[MAX];
int sum_part[MAX];
bool partition_k(int n,int idx,int sum){
    if(idx==n)return true;
    for(int i=0;i<3;i++){
        if(sum_part[i]+arr[idx]<=sum){
            part[idx]=i;
            sum_part[i]+=arr[idx];
            if(partition_k(n,idx+1,sum))return true;
            sum_part[i]-=arr[idx];
            part[idx]=-1;
        }
    }
    return false;
}
int main(){
    int i,n,sum=0;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> arr[i];
        sum+=arr[i];
        part[i]=-1;
        sum_part[i]=0;
    }
    sum_part[0]+=arr[0];
    part[0]=0;
    if(n>=3 && sum%3==0 && partition_k(n,1,sum/3))cout<<1<<endl;
    else    cout<<0<<endl;
}
