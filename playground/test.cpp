#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int k,r;
	cin >> k >> r;
	for(int m=1;m<=10;++m){
  	  if((k*m)%10==r || (k*m)%10==0){
      		cout<<m<<endl;
      		return 0;
    	  }
 	 }
}

