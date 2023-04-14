#include <iostream>
#include <cstdio>
#include <iomanip>
#include <ctime>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
	int n, x, max=0;
	
	srand(time(NULL));
	
	cout<<"Ile wylosowac liczb "; cin>>n; cout<<endl;
	
	for(int i=1; i<n; i++){
		x=rand()%924;
		if(i==1){
			max=x;
		}
		if(x>max){
			max=x;
		}
		cout<<x<<endl;
	}
	cout<<endl<<"Najwieksza liczba to "<<max;
	
	
	
	return 0;
}

