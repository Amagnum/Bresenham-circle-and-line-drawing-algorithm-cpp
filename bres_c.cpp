#include <bits/stdc++.h>

using namespace std;


int main(){
	
    int r = 6;

	cout<<"BressH - Circle"<<endl;

	int y = r;
	int x = 0; // change this when changing
	
	int p = 3 - 2*r;

	int k=0; // its just a pointer

	cout<<k<<" k| "<<p<<" pk| "<<x<<" xk| "<<y<<" yk|"<<endl;

	while(y>x){
		if(p<0){
			p = p + 4*x + 6;
		}
		else{
			p = p + 4 * (x - y) + 10;
			y=y-1;
		}

		x=x+1;
		k++;
		cout<<k<<" k| "<<p<<" pk| "<<x<<" xk "<<y<<" yk|"<<endl;
	}

	return 0;
}