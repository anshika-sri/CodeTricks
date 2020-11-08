// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <queue>
template<typename T>

class ToClient {
  public:
  T *arr;
  
  ToClient(int ds=4) {
      arr = new T[ds];
      arr[0] = 9;
  }
 
};


int main() {
    ToClient<int> C1(7);
    cout<<C1.arr[0]<<endl;
    cout<<C1.arr[6];
    return 0;
}

*********IO**********
9
0
