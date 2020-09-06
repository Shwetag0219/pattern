#include<iostream>
using namespace std;


int main(){
	int n;
    cin>>n;
    int i=1;
    int j,k;
    while(i<=n)
    {
        k=1;
        j=1;
        while(k<=n-i)
        {
            cout<<" ";
            k++;
        }
        while(j<=((2*i)-1))
        {
          cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }


}
