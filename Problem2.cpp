#include<iostream>
using namespace std;

int main(){

    int n = 1;

    int first=1;
    int second=2;
    int third=0;
    int evenSum=0;

    while(first<=4000000){
         if(first%2==0)
          evenSum+=first;

        third = first+second;
        first = second;
        second = third;
     
       
        n++;
    }

    cout<<evenSum;

    return 0;

}