Patterns



# include <iostream>
using namespace std;
int main()
{
    int n;
    int i=1;
    int j;
    int k;

    cin>>n;
    while(i<=n)
    {
        j=1;
        k=i;
        while(j<=i)
        {
            cout<<k;
            k++;
            j++;
        }
        cout<<endl;
        i++;
    }
}
