#include<iostream>
using namespace std;

int main(){
    int even=0;
    int odd=0;
    int number;
    while(number != 0){
        cout << "Enter an integer: ";
        cin >> number;
        if(number!=0){
            if(number%2==0){
                even+=1;
            }
            else{
                odd+=1;
            }
        }
    }
    cout << "#Even numbers = "<<even;
    cout<<endl;
    cout << "#Odd numbers = "<<odd;
    return 0;
}
