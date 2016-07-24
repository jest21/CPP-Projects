#include <iostream>
using namespace std;
class Matrix{
	int m,n; //m = rows && n = columns
	public:
	Matrix(int noOfRows, int noOfcolumns){
		m = noOfRows;
		n = noOfcolumns;
	}

	void readMatrix(){
		int matrix[m][n];
		int i,j;
        cout << "\nEnter the Matrix\n";
        for (i = 0; i < m; i++){
            for (j = 0; j < n; j++){
                cin >> matrix[i][j];
            }
        }
	}
/*
	public void printMatrix(){
            int c,d;
            for ( c = 0 ; c < m ; c++ ){
            	for ( d = 0 ; d < n ; d++ )
            		cout << 
               		Console.WriteLine(matrix[c][d]+"\t");
 				Console.WriteLine("\n");
         	}
	}
/*
	public void setMatrix(int[][] newMatrix){
		matrix = newMatrix;
	}

	public static Matrix operator* (Matrix A, Matrix B){
		if (A.m == B.n) {
			Matrix C = new Matrix(A.m, B.n);
			int multiply = new int[A.m][B.n];
			int sum = 0,c,d;
			for ( c = 0 ; c < m ; c++ ){
            	for ( d = 0 ; d < n ; d++ ){   
               		for ( k = 0 ; k < p ; k++ ){
                  		sum = sum + first[c][k]*second[k][d];
               		}
               		multiply[c][d] = sum;
               		sum = 0;
            	}
         	}
         	C.setMatrix(multiply);
         	return C;
		}else{
			Console.WriteLine("\nCannot Multiply");
			return null;
		}
	}
*/
};
int main(){

}