#include <iostream>
using namespace std;

int main() {
    int number,sum;
    cout<<"Enter the number till which you want the sum!\n";
    cin>>number;
    sum = number * (number + 1)/2;
    cout<<"The sum is: "<<sum;
	return 0;
}