#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
class fibo{

            private:long ar[1000];
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
                    long fibonacci(int a){
                    keep(a);
                    fun(a);
                    return ar[a-1];
                    }

};

int main(){
    fibo s;
    cout<<s.fibonacci(30);
}
