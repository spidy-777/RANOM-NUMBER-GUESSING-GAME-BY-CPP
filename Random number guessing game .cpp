#include<iostream>
#include<ctime>                //To import the time
using namespace std;

int main(){
  srand(time(0));              //giving time duration
  int secret = rand() % 100+1; //function choose random function 
  int guess;
  int attempts=0;//attempts 
  cout<<"Enter your number---->"<<endl;
  cin>>guess;                 //To get user input
  
  if (guess==secret){         //first condition 
    cout<<"GOOD! YOU ARE DOING GOOD"<<endl;
  }
  else{                       //Second condition 
    cout<<"AH SHIT! YOU LOSE"<<endl;
  }
}
