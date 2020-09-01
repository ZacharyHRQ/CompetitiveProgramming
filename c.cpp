#include <iostream>
#include <math.h>
using namespace std;

long long n,t,a;
int main () 
{
 cin >> n;1 
 t = 1;
 while(n/(pow(5,t))){
  a += n/(pow(5,t));
  t++;
 }
 cout << a;
}


