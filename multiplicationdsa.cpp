#include<iostream>
#include<vector>
using namespace std;
class MATRIX{
    private:
    vector<vector<int>> mat;
        int rows, cols;
    public:
        MATRIX(int r, int c) : rows(r),cols(c), mat(r, vector<int>(c)) {}
        void inputMatrix() {
            cout << "Enter elements of the matrix:\n";
            for(int i = 0; i < rows; ++i) {
                for(int j = 0; j < cols; ++j) {
                    cin >> mat[i][j];
                }
            }

        } 
         void displayMatrix() {
            cout << "Matrix:\n";
            for(int i = 0; i < rows; ++i) {
                for(int j = 0; j < cols; ++j) {
                    cout << mat[i][j] << " ";
                }
                cout << endl;
            } 
}  
           
        MATRIX multiply(const MATRIX& other) {
            if (cols != other.rows) {
                throw invalid_argument("Matrix dimensions do not allow multiplication.");
            }
            MATRIX result(rows, other.cols);
            for(int i = 0; i < rows; ++i) {
                for(int j = 0; j < other.cols; ++j) {
                    result.mat[i][j] = 0;
                    for(int k = 0; k < cols; ++k) {
                        result.mat[i][j] += mat[i][k] * other.mat[k][j];
                    }
                }
            }
            return result;
        }
};
 int main() {
    int r1, c1, r2, c2;
    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;

    MATRIX mat1(r1, c1);
    MATRIX mat2(r2, c2);

    mat1.inputMatrix();
    mat2.inputMatrix();

    try {
        MATRIX result = mat1.multiply(mat2);
        result.displayMatrix();
    } catch (const invalid_argument& e) {
        cout << e.what() << endl;
    }

    return 0;
}