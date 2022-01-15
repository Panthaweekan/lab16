#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int &x,int &y,int &z,int &l)
{
	int m[4];
	int n[4];
	int o = 0, p = 0 , q = 0, r = 0;
	m[0] = x , m[1] = y , m[2] = z , m[3] = l;
	o = rand() % 4;
	n[0] = m[o];
	m[o] = 0;
	do{
		p = rand()%4;
	}while(m[p] == 0);
	n[1] = m[p];
	m[p] = 0;

	do{
		q = rand() % 4;
	}while(m[q] == 0);
	n[2] = m[q];
	m[q] = 0;

	do{
		r = rand() % 4;
	}while(m[r] == 0);
	n[3] = m[r];

	x = n[0] , y = n[1] , z = n[2] , l = n[3];

}