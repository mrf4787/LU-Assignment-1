#include <iostream>
using namespace std;
/*Mohit Rajesh Fulfagar
9067674787*/

int main()
{
  //Declaring variables 
  int x = 9;
  int y = 4;
  
  //Assignment Operator
  cout<<"Assignment Operator"<<endl;
  cout<<"Value of x:"<<x<<endl;
  cout<<"x = "<<(x=10)<<endl<<endl;
  
  cout<<"Value of x:"<<x<<endl;
  cout<<"x+2="<<(x+=2)<<endl<<endl;
  
  cout<<"Value of x:"<<x<<endl;
  cout<<"x-1="<<(x-=1)<<endl<<endl;
  
  cout<<"Value of x:"<<x<<endl;
  cout<<"x*3="<<(x*=3)<<endl<<endl;
  
  cout<<"Value of x:"<<x<<endl;
  cout<<"x/3="<<(x/=3)<<endl<<endl;
  
  //Comparison Operator
  cout<<"Comparison Operator\n 1 = True\n 0 = Flase"<<endl<<endl;
  cout<<"Value of x:"<<x<<"\nValue of y:"<<y<<endl;
  cout<<"x equal to y: '"<<(x==y)<<"'"<<endl<<endl;
  
  cout<<"Value of x:"<<x<<"\nValue of y:"<<y<<endl;
  cout<<"x not equal to y: '"<<(x!=y)<<"'"<<endl<<endl;
  
  cout<<"Value of x:"<<x<<"\nValue of y:"<<y<<endl;
  cout<<"x is greater than y: '"<<(x>y)<<"'"<<endl<<endl;
  
  cout<<"Value of x:"<<x<<"\nValue of y:"<<y<<endl;
  cout<<"x is less than y: '"<<(x<y)<<"'"<<endl<<endl;
  
  cout<<"Value of x:"<<x<<"\nValue of y:"<<y<<endl;
  cout<<"x is greater than or equal to y: '"<<(x>=y)<<"'"<<endl<<endl;

  //Logical Operator
  cout<<"Logical Operator\n 1 = True\n 0 = Flase"<<endl<<endl;
  cout<<"Value of x:"<<x<<"\nValue of y:"<<y<<endl;
  cout<<"x > 12 and y < 5: '"<<(x>12&&y<5)<<"'"<<endl<<endl;
  
  cout<<"Value of x:"<<x<<"\nValue of y:"<<y<<endl;
  cout<<"x > 12 or y < 5: '"<<(x>12||y<5)<<"'"<<endl<<endl;
  
  cout<<"Value of x:"<<x<<"\nValue of y:"<<y<<endl;
  cout<<"not x > 12 and y < 5: '"<<!(x>12&&y<5)<<"'"<<endl<<endl;
}
