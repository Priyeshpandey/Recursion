/*Following can be acheived by use of simple for loop as well.*/
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<iomanip>
using namespace std;
class fibo{

            private:double ar[1000];
                    int x;
            public:
                void keep(int a){
                        x=a;
                    }

                void fun(int a){

                ar[0]=1;ar[1]=1;
                int temp;

                if(a>0)
                    {
                        temp=x;
                        ar[temp-a+2]=ar[temp-a]+ar[temp-a+1];
                        return fun(a-1);

                    }
                }
                    double fibonacci(int a){
                    keep(a);
                    fun(a);
                    return ar[a-1];
                    }

};

int main(){
    fibo s;
    cout<<setprecision(21)<<s.fibonacci(30);
}
