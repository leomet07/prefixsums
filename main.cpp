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


void getNgetQ(string s1, int *n, int *q){
    string buffer = "";
    int buffer_resets = 0;
    for (int i = 0; i < s1.length(); i++){
        char c = s1[i];
        buffer = buffer + c;

        if (c == ' ' || i + 1 == s1.length()){
            buffer_resets += 1;
            if (buffer_resets == 1){
                *n = stoi(buffer);
            } else if (buffer_resets == 2){
                *q = stoi(buffer);
            }
            buffer = "";
        }   
    }

}
int main() {
    string s1;
    getline(cin , s1);
    
    int n = 0;
    int q = 0;
    
    getNgetQ(s1, &n, &q);

    cout << "N: " << n << " Q: " << q <<endl;


    
    int a[] = {3 ,2 ,4 ,5 ,1 ,1 ,5 ,3};
    int len = sizeof(a) / sizeof(int);
    int sum = getSum(a, len, 2 , 4);
    cout << "Sum: " << sum << endl;

	cout << "Prefix sums" << endl;
    return 0;
}


