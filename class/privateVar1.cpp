#include <iostream>
using namespace std;
template<typename T>

class ToClient {
  T donotShowMe; //This will not be shown to the client
  
  public:
  T showMe;
  
  ToClient(int ds=4) {
      showMe = 1;
  }
  
//   void modify (int changeVal, int val) {
//       val = changeVal;
//       cout<<val<<endl; //showMe is not changed
//   }

  void modify (int changeVal, int &val) {
      val = changeVal;
      cout<<val<<endl; //showMe is changed to changeVal
  }
};


int main() {
    ToClient<int> C1(7);
    cout<<(C1.showMe)<<endl;
    
    C1.showMe = 1000;
    cout<< C1.showMe<<endl;
    
    //cout<<(C1.donotShowMe)<<endl; 
    //error: 'int ToClient<int>::donotShowMe' is private

    C1.modify(2000, C1.showMe);
    cout<< C1.showMe;

    return 0;
}

**********IO***************
1
1000
2000
2000
