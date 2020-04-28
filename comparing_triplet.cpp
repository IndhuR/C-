#include<iostream>
using namespace std;
int main()
{
    int a[3],b[3],result[2];
    result[0]=0;
    result[1]=0;
    for(int i=0;i<3;i++)
        cin>>a[i];
    for(int i=0;i<3;i++)
    cin>>b[i];
    for(int i=0;i<3;i++){
        if(a[i]>b[i])
         result[0]++;
        if(a[i]<b[i])
        result[1]++;
    }

    for(int i=0;i<2;i++)
    cout<<result[i]<<" ";
    return 0;
}
