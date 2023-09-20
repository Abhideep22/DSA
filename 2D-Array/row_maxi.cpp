#include <iostream>
using namespace std;
int max_row(int arr[][5],int rows, int cols){
  int max_count = 0, max_row_index = -1;
  for (int i = 0; i < rows; i++) {
    int count = 0;
    for (int j = 0; j < cols; j++) {
      if (arr[i][j] == 1) {
        count++;
      }
    }
    if (count > max_count) {
      max_count = count;
      max_row_index = i;
    }
  }
  return (max_row_index+1);
}
int main() {
  int arr[5][5]={{0,0,1,1,1},{0,0,0,1,1},{0,0,1,1,1},{0,1,1,1,1},{1,1,1,1,1}};
  int rows=5, cols=5;

  cout<<"The matrix is: "<<endl;
  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  cout << "The row with maximum number of 1's is: " << max_row(arr,rows,cols) << endl;

  return 0;
}