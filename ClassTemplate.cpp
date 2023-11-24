#include <bits/stdc++.h>
using namespace std;

template <class d>
class add {
public :
d a,b;
void fun (){
cout<<a+b<<endl;

}


};


int main()
{

add<int> name;
name.a=5;
name.b=10;
name.fun();
add<string> obj2;
obj2.a="deb";
obj2.b="kumar";
obj2.fun();


    return 0;
}

