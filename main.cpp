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

int getSum(int* a, int n, int start, int end){
    
    
    int pre[n + 1];
    genPreLinear(a, n,  pre);

    return pre[end] - pre[start -1];
}


int main() {
    
    int n = 0;
    int q = 0;
    cin >> n;
    cin >> q;
    


    cout << "N: " << n << " Q: " << q <<endl;


    
    int a[] = {3 ,2 ,4 ,5 ,1 ,1 ,5 ,3};
    int len = sizeof(a) / sizeof(int);
    int sum = getSum(a, len, 2 , 4);
    cout << "Sum: " << sum << endl;

	cout << "Prefix sums" << endl;
    return 0;
}


