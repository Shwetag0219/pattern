# include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int i=1;
    while(i<=N)
    {
        int k=1;
        int j=1;
        //int l=1;
        //int m=i-1;
        while(j<=N-i)
        {
            cout<<" ";
            j++;
        }
        while(k<=i)
        {
            cout<<k;
            k++;
        }
        k=i-1;
        while(k>=1)
        {
           cout<<k;
           k--;
        }

        cout<<endl;
        i++;
    }
}
