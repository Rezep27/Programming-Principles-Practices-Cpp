#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
  double smallest = 0;
  double largest = 0;
  double num = 0;

  cin >> smallest;
  cout << "The smallest so far is " << smallest << '\n';
  largest  = smallest;
  cout << "The largest so far is " << largest << '\n';
  while (cin >> num){
    if (num > largest){
      largest = num;
      cout << "The largest so far is " << largest << '\n';
    }
    else if(num < smallest){
      smallest = num;
      cout << "The smallest so far is " << smallest << '\n';
    }
  }
  return 0;
}

