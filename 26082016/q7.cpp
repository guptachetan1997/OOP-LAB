#include "iostream"
#include "string.h"

using namespace std;

void concatnate(char a[], int n, char b[], int m, char c[], int k)
{
	if(k > m){
		cout << c;
		return;
	}
	else if(k >= n){
		c[k] = b[k-strlen(b)];
		return concatnate(a,n,b,m,c,k+1);
	}	
	else{
		c[k] = a[k];
		return concatnate(a,n,b,m,c,k+1);
	}

}

int main()
{
	char a[50], b[50], c[50];
	cin >> a >> b;
	concatnate(a,strlen(a),b,strlen(a)+strlen(b),c,0);
}
