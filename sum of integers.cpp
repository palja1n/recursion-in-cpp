#include <iostream>
using namespace std;

int sum(int n)
{
    if(n<=1)
      return 1;
    else 
      return n + sum(n-1);
}
int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin>>n;

    int result = sum(n);
    cout << "Sum of integers from 1 to "<< n <<" is: "<< result<< endl;
    return 0;
}

/*
Output:
Enter a positive integer: 5
Sum of integers from 1 to 5 is: 15
  */
