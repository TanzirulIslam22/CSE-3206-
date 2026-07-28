#include <iostream>
using namespace std;

int fact(int a);

int main()
{
  int w;
  cin >> w;

  if (w > 2 && w % 2 == 0){
    cout << "YES"<< endl;
    int a = fact(w);
    cout <<"The factorial is = "<< a << endl ; //spelling mistake.
  }
  else
    cout << "NO";

  return 0;
}


int fact(int a){
  int result = 1 ;

  for(int i = a ; i > 0 ; i--){
    result *= i;
  }

  return result;
}

