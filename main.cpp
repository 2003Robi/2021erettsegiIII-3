#include <iostream>
#include <fstream>

using namespace std;
int sufix(int x,long y)
{
    if(y%1000==x)
        return 1;
    else
        return 0;


}
int main()
{
    long y,z,a=0,b=0;
    int x;
    ifstream in("bac.txt");
    in>>x;
    in>>z;
    while(in>>y){
        if(sufix(x,y)==1 && sufix(x,z)==1)
        {
            a=z;
            b=y;
        }
        z=y;
    }
    if(a*b!=0)
        cout<<a<<" "<<b;
    else
        cout<<"NU EXISTA";
    in.close();

    return 0;
}
