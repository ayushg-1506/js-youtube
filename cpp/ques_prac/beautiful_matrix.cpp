#include <iostream>
using namespace std;

int main() {
    int matrix[5][5];
    int row, col;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1) {
                row = i + 1; // using 1-based index
                col = j + 1;
            }
        }
    }

    int moves = 0;

    while (row != 3) {
        if (row < 3) row++; 
        else row--;         
        moves++;
    }
   while (col != 3) {
        if (col < 3) col++; 
        else col--;         
        moves++;
    }

    cout << moves << endl;
    return 0;
}


// Manhattan distance formula
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     int matrix[5][5];
//     int row, col;

    
//     for (int i = 0; i < 5; i++) {
//         for (int j = 0; j < 5; j++) {
//             cin >> matrix[i][j];
//             if (matrix[i][j] == 1) {
//                 row = i + 1; // convert to 1-based index
//                 col = j + 1;
//             }
//         }
//     }

//     // Center is at (3, 3)
//     int moves = abs(row - 3) + abs(col - 3);
//     cout << moves;
//     return 0;
// }

// my idea(long and inefficient)
// #include <iostream>
// using namespace std;

// int main(){
//     int matrix[5][5];
    
//     // Input the matrix
//     for(int i = 0 ; i < 5 ; i++){
//         for(int j = 0 ; j < 5 ; j++){
//             cin >> matrix[i][j];
//         }
//     }


//     if(matrix[0][0] == 1 || matrix[0][4] == 1 || matrix[4][0] == 1 || matrix[4][4] == 1){
//         cout << 4;
//     }
//     else if(matrix[0][1] == 1 || matrix[1][0] == 1 || matrix[0][3] == 1 || matrix[3][0] == 1 ||
//             matrix[1][4] == 1 || matrix[4][1] == 1 || matrix[3][4] == 1 || matrix[4][3] == 1 ){
//         cout << 3;
//     }
//     else if(matrix[0][2] == 1 || matrix[2][0] == 1 || matrix[2][4] == 1 || matrix[4][2] == 1 ||
//             matrix[1][1] == 1 || matrix[1][3] == 1 || matrix[3][1] == 1 || matrix[3][3] == 1 ){
//         cout << 2;
//     }
//     else if(matrix[1][2] == 1 || matrix[2][1] == 1 || matrix[3][2] == 1 || matrix[2][3] == 1){
//         cout << 1;
//     }
//     else {
//         cout << 0;
//     }

//     return 0;
// }