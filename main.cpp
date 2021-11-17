#include <iostream>

using namespace std;

void genPreLinear(const int* a, int n,  int* pre ){
    pre[0] = 0;

    for (int i = 1; i < n + 1; i++){
      pre[i] = pre[i -1] + a[i-1];
    }
}


int main() {
    
    int n = 0;
    int q = 0;
    cin >> n;
    cin >> q;
    
    int array[n];

    for (int i = 0; i < n; i++){
        cin  >> array[i];
    }

    int pre[n + 1];
    genPreLinear(array, n,  pre);

    for (int j = 0; j < q; j++){
        int start = 0;
        int end = 0;

        cin >> start;
        cin >> end;

        
        int sum = pre[end] - pre[start -1];
        cout <<  sum << endl;

    }


	// cout << "Prefix sums" << endl;
    return 0;
}


