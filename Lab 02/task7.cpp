#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    int** jagged_array = new int*[rows];
    int* colSizes = new int[rows]; 

    for (int i = 0; i < rows; i++) {
        cout << "Enter number of columns for row " << i << ": ";
        cin >> colSizes[i];

        jagged_array[i] = new int[colSizes[i]];

        cout << "Enter " << colSizes[i] << " elements for row " << i << ": ";
        for (int j = 0; j < colSizes[i]; j++) {
            cin >> jagged_array[i][j];
        }
    }

    cout << "\nJagged Array:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colSizes[i]; j++) {
            cout << jagged_array[i][j] << " ";
        }
        cout << endl;
    }

    
    for (int i = 0; i < rows; i++) {
        delete[] jagged_array[i];
    }
    delete[] jagged_array;
    delete[] colSizes;

    return 0;
}
