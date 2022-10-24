#include <iostream>
#include <vector>
#include <array>
#include <algorithm>

using namespace std;

//For comparing 2'nd column order
bool sortcol(const vector<int>& v1, const vector<int>& v2) {
    return v1[1] < v2[1];
}

int main()
{
    // Initializing 2D vector "vect" with 
// values 
    vector< vector<int> > vect{ {6, 6, 1, 4},
                               {7, 2, 6, 5},
                               {8, 3, 9, 2} };

    // Printing before sorting
    // For each element 'x' in 'vect'
    for (auto x : vect) {
        //For each element 'y' in 'x'
        for (auto y : x) cout << y << " ";
        cout << endl;
    }
    //OUTPUT:
    // 6 6 1 4
    // 7 2 6 5 
    // 8 3 9 2

        // Use of "sort()" for sorting second row 
    // Indexing starts from '0'
    sort(vect.begin(), vect.end(), sortcol);

    // Displaying the 2D vector after sorting 
    cout << "The 2D vector after sorting 2nd row is:\n";
    for (auto x : vect) {
        //For each element 'y' in 'x'
        for (auto y : x) cout << y << " ";
        cout << endl;
    }
    //OUTPUT:
    // 7 2 6 5
    // 8 3 9 2
    // 6 6 1 4



}


