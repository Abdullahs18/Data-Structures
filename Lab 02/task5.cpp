#include <iostream>
using namespace std;

int main() {
    int rows, col;
    cout << "Enter rows: ";
    cin >> rows;
    cout << "Enter columns: ";
    cin >> col;

    int** array = new int*[rows];
    for (int i = 0; i < rows; i++)
        array[i] = new int[col];

    cout << "Enter Array Elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            cin >> array[i][j];
        }
    }

    cout << "--Original Matrix--\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            cout << array[i][j] << " ";
        }
        cout << "\n";
    }

    int newRows, newCols;
    cout << "Enter new rows: ";
    cin >> newRows;
    cout << "Enter new cols: ";
    cin >> newCols;

    int** newMatrix = new int*[newRows];
    for (int i = 0; i < newRows; i++)
        newMatrix[i] = new int[newCols];

    for (int i = 0; i < newRows; i++) {
        for (int j = 0; j < newCols; j++) {
            if (i < rows && j < col)
                newMatrix[i][j] = array[i][j];
            else
                newMatrix[i][j] = -1;
        }
    }

    for (int i = 0; i < rows; i++)
        delete[] array[i];
    delete[] array;

    array = newMatrix;
    rows = newRows;
    col = newCols;

    cout << "--Display New Matrix--\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            cout << array[i][j] << " ";
        }
        cout << "\n";
    }

    for (int i = 0; i < rows; i++)
        delete[] array[i];
    delete[] array;

    return 0;
}
