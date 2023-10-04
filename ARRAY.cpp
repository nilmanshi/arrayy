#include <iostream>
#include <limits.h>
using namespace std;
int find(int arr[][4], int row, int col) {
  int maxANS = INT_MIN;

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {

      if (arr[i][j] > maxANS) {
        maxANS = arr[i][j];
      }
    }
  }
  return maxANS;
}
int main() {

  int arr[3][4] = {{10, 20, 30, 40}, {50, 60, 70, 80}, {90, 100, 110, 120}};
  int row = 3;
  int col = 4;
  cout << "print the max number :" << find(arr, row, col) << endl;
}




#include <iostream>
#include <limits.h>
using namespace std;
int find(int arr[][4], int row, int col) {
  int minANS = INT_MAX;

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {

      if (arr[i][j] < minANS) {
        minANS = arr[i][j];
      }
    }
  }
  return minANS;
}
int main() {

  int arr[3][4] = {{10, 20, 30, 40}, {50, 60, 70, 80}, {90, 100, 110, 120}};
  int row = 3;
  int col = 4;
  cout << "print the min number :" << find(arr, row, col) << endl;
}