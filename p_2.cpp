//Next Round

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,y,sum=0;
    cin>>n;
    cin>>k;
    int arr[n];


    for(int i=0;i<n;i++)
    {
        int m;
        cin>>m;
        arr[i]=m;
    }

    y = arr[k-1];

    for (int i = 0; i<n ;i++)
    {


        if (arr[i]>=y  && arr[i]>0)
        {
            sum++;

        }

    }
    cout<<sum;

}
