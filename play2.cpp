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
//Algorithm using matrices both time efficient and storage efficient. Time complexity O(log(n)).
    double cat[2][2];
double base2[2][2]={{1,1},{1,0}}; double init[2][1]={{1},{0}},init2[2][1]={{1},{0}};   /*base2 is the fixed array. init2-->initial array.
                                                                                init-->final array to store the result*/
double fib2(double base[2][2],int y){             /*base is iterative array, y is the no. of times recursive call is to be made.
                                                Also the argument for evaluating fibonacci number*/
    int i,j,k;
    --y;
    if(y>0){
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                    cat[i][j]=0;
                for(k=0;k<2;k++){
                    cat[i][j]+=base2[i][k]*base[k][j];
                }
                //cout<<cat[i][j]<<" "; //For debugging
            }
            //cout<<endl; //For debugging.
        }
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                base[i][j]=cat[i][j];
            }
        }
        return fib2(base,y);
    }
    else
        {
            for(i=0;i<2;i++){
            for(j=0;j<1;j++){
                    init[i][j]=0;
                for(k=0;k<2;k++){
                    init[i][j]+=base[i][k]*init2[k][j];
                }
            }
        }
        return init[1][0];  //Stores Fibonacci(y);
        }

}


int main(){
   // fibo s;
   // cout<<setprecision(21)<<s.fibonacci(30);  //Uses 1st method with linear time complexity
    int y;
    double base[2][2]={{1,1},{1,0}};
    cout<<"Enter The argument Value:\n";
    cin>>y;
    double r=fib2(base,y);          //Uses 2nd Method with logarithmic time complexity.
    cout<<setprecision(210)<<r; //Shows 210 digits at max.
    getch();
}
