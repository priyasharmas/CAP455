#include<iostream>
#define size 10

using namespace std;

class stack
{
  int arr[size];
  int top;

  public:
      //constructor
      stack ()
      {
          top = -1;
      }
      //push
      void push (int value)
      {
          if (top == size-1)
          {
              cout<<"stack overflow\n";
              return;
          }
          else
          {
              top++;
              arr[top]= value;
              cout<<"pushed"<<value<<"into the stack"<<endl;
          }
      }

      void display()
      {
          for(int i=0; i<=top; i++)
          {
              cout<<arr[i]<<" ";
          }
      }
};

int main()
{
    stack obj;
    obj.push(10);
    obj.push(20);
    obj.push(30);
    obj.display();
}

