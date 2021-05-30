#include <iostream>
using namespace std;

int main()
{
    int i=0,N=0;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++){
        cin>>A[i];
    } 
    for(int j=N-1;j>=0;j--){
        cout<<A[j]<<" ";
    }   
    return 1;
}