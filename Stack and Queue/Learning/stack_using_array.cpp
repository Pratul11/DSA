#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[10];
    int top = -1;
    int opt = 0;
    do
    {
        cout << "Choose the operation" << endl
             << "1: Push  2: Pop  3: Top  4: Print All" << endl;
        cin >> opt;
        if(opt==1){
            if(top>=10){
                cout<<"Stack is Full!";
            }
            int x;
            cout<<"Enter Value to push: ";
            cin>>x;
            top++;
            a[top]=x;
        }
        else if(opt == 2){
            if(top==-1){
                cout<<"Stack is empty!";
            }
            top--;
        }
        else if(opt == 3){
            if(top==-1){
                cout<<"Stack is empty!";
            }
            cout<<a[top];
        }
        else{
            int temp = top;
            while(temp != -1){
                cout<<a[temp]<<" ";
                temp--;
            }
        }
    } while (opt != 0);
    return 0;
}