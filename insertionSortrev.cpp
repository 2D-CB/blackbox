#include <iostream>
using namespace std;

int main() {
  int A[5]={32,21,43,55,33};
  int key, j;
  //set up the loop
  for (int i=1; i<=4; i++) {
    key= A[i];
    j=i-1;
    
    while (A[j]<key) {
      A[j+1]=A[j];
      j=j-1;
    }
    A[j+1]=key;
  }
  for (int k=0; k<=4; k++) {
    cout <<  A[k] << " ";
  }
  return 0;
}
