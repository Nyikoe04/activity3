#include <iostream>

using namespace std;

void displayMenu();
int addition(int num1 , int num2);
int subtraction(int num1, int num2);
int multiplication(int num1,int num2);
float division(int num1,int num2);
string choice;


  int main(){

    string choice;
    int num1,num2;


    do{
    displayMenu();
  cout<< "Enter your choice";
  cin>>choice;

  cout<<"Enter two integers";
  cin>>num1 >>num2;

 switch(choice){

   case 1:
  cout<<"result of addition:"<<addition(num1,num2 )<<endl;
  break;

  case 2:
  cout<<"result of subtraction;"<<subtraction(num1,num2)<<
  endl;
  break;

  case 3:
    cout<<"Result of multiplication;"
    <<multiplication(num1,num2)<<
    endl;
    break;

  case 4:
  if(num2==0){
    cout<<"The second integer is zero,divide by zero"<<endl;
  } else{
  cout<<" Result of Division"<<division(num1,num2)<<endl;
  }
  break;
  default:
  cout<<"invalid choice!"<<endl;

  cout<<"Do you want to go futher?(yes/no)";
  cin>>choice;
}
  while(choice == 'y'|| string  == 'Y');

    return 0;
    }

  void displayMenu(){
  cout<<"1. Addition" <<endl;
  cout<<"2. Subtraction"<<endl;
  cout<<"3. Multiplication"<<endl;
  cout<<"4. Division"<<endl;

  }

  int addition(int num1,num2){
      return num1+num2;
  }
  int substration (int num1,int num2){

      return num1 - num2;
  }

  int multiplication(int num1,int num2){
      return num1*num2;
         }
         float division(int num1,num2){
             return static_cast(num1)/(num2);
         }

  }




