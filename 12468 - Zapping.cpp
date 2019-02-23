#include <bits/stdc++.h>

using namespace std;


int main()
{
    int a , b;

    while(cin>>a>>b && (a!=-1 && b!=-1)){
        (abs(a-b) > 50) ? cout<<100-abs(a-b) : cout<<abs(a-b);
        cout<<endl;
    }
    return 0;
}
