#include <iostream>

using namespace std;

class Matrix
{
	int mat[10][10];
	int r,c;
public:
	Matrix()
	{
		r=c=0;
	}
	Matrix(int row, int col)
	{
		r = row;
		c = col;
		for(int i=0 ; i<r ; i++)
		{
			for(int j=0 ;j<c ; j++)
			{
				mat[i][j] = 0;
			}
		}
	}
	Matrix(int row, int col, bool flag)
	{
		r = row;
		c = col;
		cout << "Enter the Matrix : \n"; 
		for(int i=0 ; i<r ; i++)
		{
			for(int j=0 ;j<c ; j++)
			{
				cin >> mat[i][j];
			}
		}
	}
	Matrix operator + (Matrix a)
	{
		Matrix temp(r,c);
		for(int i=0 ; i<r ; i++)
		{
			for(int j=0 ; j<c ; j++)
			{
				temp.mat[i][j] = mat[i][j] + a.mat[i][j]; 
			}
		}
		return temp;
	}
	void print_mat()
	{
		cout << "\nThe following matrix is : \n";
		for(int i=0 ; i<r ; i++)
		{
			for(int j=0 ; j<c ; j++)
			{
				cout << mat[i][j] << " "; 
			}
			cout << endl;
		}
	}

};

int main()
{
	Matrix a(3,3,1), b(3,3,1);
	Matrix c;
	c = a + b;
	c.print_mat();

}