#include <iostream>

using namespace std;

void genPreLinear(const int* a, int n,  int* pre ){
    pre[0] = 0;

    for (int i = 1; i < n + 1; i++){
      pre[i] = pre[i -1] + a[i-1];
    }
}

void printArray(int* array, int length) {
    if (!array) // if user passed in a null pointer for array, bail out early!
        return;

    for (int index = 0; index < length; ++index){
        cout << array[index] << endl;
    }
}


int main() {
    
    int a[] = {0, 1 , 1, 0 , 1};
    int n = sizeof(a) / sizeof(int);
    
    int pre[n + 1];
    genPreLinear(a, n,  pre);

    
    printArray(pre, n + 1);
	cout << "Prefix sums" << endl;
    return 0;
}
