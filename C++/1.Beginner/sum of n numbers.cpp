#include <iostream>
using namespace std;

int main() {
    int number,sum;
    cout<<"Enter the number till which you want the sum!\n";
    cin>>number;
    for(int i = 1; i <= number; i++){
        sum += i;
    }
    cout<<"The sum is: "<<sum;
	return 0;
}