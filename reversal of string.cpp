#include <iostream>
using namespace std;

void Reverse(string str, int index)
{
    if(index<0)
      return;
    cout << str[index];
    Reverse(str, index-1);
}
int main() {
    string s;
    cout << "Enter a string: ";
    cin>>s;
    cout << "Reversed string is: ";
    Reverse(s, s.length()-1);
    return 0;
}

/*
Output:
Enter a string: programiz
Reversed string is: zimargorp
  */
