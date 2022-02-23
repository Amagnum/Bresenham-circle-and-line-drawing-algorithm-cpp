#include <bits/stdc++.h>

using namespace std;


int main(){
	
	int x1=25, y1=25;
	int x2=48, y2=85;



	cout<<"BressH - Line"<<endl;

    	int dx = abs(x2-x1);
    	int dy = abs(y2-y1);

    	int x = x1;
    	int y = y1; 

	int p = 2*dy - dx;

	int k=0;

	cout<<k<<" k "<<p<<" pk "<<x<<" xk "<<y<<" yk"<<endl<<endl;

	for( k=1; k<=dx; k++){
		if(p<0){
			if(x<x2) x = x+1;
			else x = x- 1;
			p = p + 2*dy;
		}
		else{
			
			if( y < y2) y = y+1;
			else y = y-1;

			if( x < x2) x = x+1;
			else x = x - 1;

			p = p + 2 * (dy - dx);
			
		}
		cout<<k<<" k| "<<p<<" pk| "<<x<<" xk| "<<y<<" yk|"<<endl;
	}

	return 0;
}
