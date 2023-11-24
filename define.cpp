#include <bits/stdc++.h>
#define c 5
#define b(c,d) (c*d)+2
#define a 9
using namespace std;
int fun();
int fun1 ();
#pragma startup fun
#pragma exit fun1

// pragma does not work gcc compailar

int main()
{
cout<<c<<endl;
cout<<a<<endl;
cout<<b(4,7)<<endl;


}

int fun() {
cout<<"Fun"<<endl;

};
int fun1(){
cout<<"Fun1"<<endl;

}

