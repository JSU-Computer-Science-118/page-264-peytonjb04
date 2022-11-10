// write your code here
// Peyton Brownrigg J00965981 NOVEMBER 8, 2022

#include <iostream>
#include <string> 
#include <cmath>
using namespace std;
int main() {
  int prime;
  int num;

  cout << "Enter a positive integer between 1 and 1000: ";
  
  cin >> num;

  while (num > 1000) {
    cout  << "You have exceeded past 1000" << endl;
    break;
  }

  while (num < 1000)
  {
    if (num % 2 == 0)
  {
    num = prime;
    cout << 2<< " ";
    }
    
  if (num % 3 == 0)
  {
    num = prime;
    cout << 3 << " ";
    }
        
  if (num % 5 == 0)
  {
    num = prime;
    cout << 5<< " ";
    
    }
        
  if (num % 7 == 0)
  {
    num = prime;
    cout << 7 << " ";
    }
        
  if (num % 11 == 0)
  {
    num = prime;
    cout << 11 << " ";
    }
  if (num % 13 == 0)
    {
      num = prime;
      cout << 13 << " ";
      }
        
  if (num % 17 == 0)
  {
    num = prime;
    cout << 17 << " ";
    }
        
  if (num % 19 == 0)
  {
    num = prime;
    cout << 19 << " ";
    }
        
  if (num % 23 == 0)
  {
    num = prime;
    cout << 23 << " ";
    }
        
  if (num % 29 == 0)
  {
    num = prime;
    cout << 29 << " ";
    }
        
  if (num % 31 == 0)
  {
    num = prime;
    cout << 31 << " ";
    }

  else if (num != prime) {
    cout << "Number is prime";
  }

    break;
  
  }
  
  
  
  
    
  
}
