#include<iostream>
#include<stdlib.h>
using namespace std;
class multistack
{
    int* array;
    int top1,top2;
    int size;
public :
    multistack(int n)
    {
        int[] array=new int[n];
        top2=n;
        size=n;
        top1=-1;
    }
   void insert1(int n)
    {
        if(top1+1!=top2)
        {
            array[++top1]=n;
            cout<<"\n "array[top1]" inserted successfully ";
        }
        else
            printf("\nstack overflow !");
    }
   void insert2(int n)
    {
        if(top2-1!=top1)
            {
            array[--top2]=n;
            cout<<"\n "array[top1]" inserted successfully ";
            }
        else
            printf("\nstack overflow !");
    }
   int pop1()
    {
       int n;
       if(top1!=-1){
       n=array[top1];
       top1--;
       return n;}
       else
       {
           cout<<"\nstack underflow";
        return 0;
       }

    }
    int pop2()
    {
        int n;
        if(top2!=size)
        {
            n=array[top2];
            top2++;
            return n;
        }
        else {
             cout<<"\nstack underflow";
                return 0;
    }
};
void manu()
{
    cout<<"\n   1: for push in stack 1\n  2: for push in stack 2\n  3: for pop in stack 1\n  4:  for pop in stack 2\n";
    cout<<"  5: for exit\n";
}
   int main()
   {
        multistack ref;
        int i=1,n,k,a,b;
        cout<<"  enter size of array   :   ";
        cin>>n;
        while(i)
        {
            manu();
            cin>>k;
            switch(k)
            {
            case 1:
                cout<<"\nenter value for inserting int stack 1  ";
                cin>>a;
                insert1(a);
                break;
            case 2:
                 cout<<"\nenter value for inserting int stack 2  ";
                 cin>>a;
                insert2(a);
                break;
            case 3: b=pop1();
                  cout<<"\n poped value is :  "b;
                break;
            case 4:  b=pop2();
                 cout<<"\n poped value is :   "b;
                break;
            case 5:exit(0);
                default: exit(0);
            }
        }


   }
