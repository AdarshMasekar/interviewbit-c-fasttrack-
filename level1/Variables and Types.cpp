#include<iostream>
#include <iomanip> 
using namespace std;

int main()  {
    int a;
    long b;
    char c;
    float d;
    double e;
    cin>>a>>b>>c>>d>>e;
    // We can use either endl or "\n" to go on the next line
    cout<<a<<endl;
    cout<<b<<"\n"<<c<<"\n";
    cout<<fixed<<setprecision(3)<<d<<endl;
    cout<<fixed<<setprecision(9)<<e<<endl;
    return 0;
}
