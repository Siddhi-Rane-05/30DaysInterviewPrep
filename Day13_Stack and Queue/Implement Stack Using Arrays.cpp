//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class MyStack
{
private:
    int arr[1000];
    int top;
public:
    MyStack(){top=-1;}
    int pop();
    void push(int);
};


int main()
{

    int T;
    cin>>T;
    while(T--)
    {
        MyStack *sq = new MyStack();

        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            sq->push(a);
        }else if(QueryType==2){
            cout<<sq->pop()<<" ";

        }
        }
        cout<<endl;
    }
}

// } Driver Code Ends


//Function to push an integer into the stack.

/*
class MyStack
{
private:
    int arr[1000];
    int top;
public:
    MyStack(){top=-1;}
    int pop();
    void push(int);
};
*/

void MyStack::push(int x)
{
    
    if (top == 999) //overflow condition
    {
        return ;
    }
    arr[++top]=x; // Increment top and insert the element into the stack.
  
}

int MyStack::pop()
{
    if (top == -1) //underflow condition
    {
        return -1;
    }

    return arr[top--];
    
}
