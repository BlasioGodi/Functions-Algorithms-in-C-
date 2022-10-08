#include <vector>
#include <iostream>
using namespace std;

int pascal(int row, int col) {
    if (row == 0 || col == row) {
        return 1;
    }
    else {
        return pascal(row - 1, col - 1) + pascal(row - 1, col);
    }
}

//vector<vector<int>> generate(int numRows) {
//    vector<vector<int>> triangle;
//    for (int i = 0; i < numRows; i++) {
//        for (int j = 0; j <= i; j++) {
//            int v = pascal(i, j);
//            triangle[i].push_back(v);
//        }
//    }
//    return triangle;
//}


int main() {
     
    int x, y = 0;
    cout << "Investigating Pascals Binomials: " << endl;
    cout << "Please key in the first number: " << endl;
    cin >> x;
    cout << "Please key in the second number: " << endl;
    cin >> y;

    cout << "The Pascals values are: " << pascal(x, y);
   
    return 0;
}