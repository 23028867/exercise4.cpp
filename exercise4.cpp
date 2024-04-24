#include "exercise4.cpp"

using namespace std;
void displayMenu(),
int main(){
int num1,num2;
char choice;
cout<<"ENTER TWO INTEGERS";
cin>>num1>>num2;
int result1= num1+num2;
int result2=num1-num2;
int result3= num1*num2;
int result4= num1/num2;
do{
cout<<" SELECT AN OPERATION";
cout<<"1.addition";
cout<<"2.Subtraction";
cout<<"3.Multiplication";
cout<<"4.division";
}
while (choice == 'y' || choice == 'Y');

    if(addition is selected)
    cout<<"The answer is:"<<result1;
else if(subtraction is selected)
    cout<<"The answer is:"<<result2;
else if (Multiplication is selected)
    cout<<"The answer is:"<<result3;
else if (division is selected)
    cout<<"The answer is:"<<result4;

}
