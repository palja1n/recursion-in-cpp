#include <iostream>
using namespace std;

int factorial(int n)
{
    if(n<=1)
    return 1;
    else return (n*factorial(n-1));
}
int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin>>n;

    int result = factorial(n);
    cout << "Result: "<< result<< endl;
    return 0;
}

/*
Output:
Enter a positive integer: 5
Result: 120
  */
