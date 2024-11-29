#include <iostream>
#include <ctime> 
#include <iomanip> 
using namespace std;
long long findthefactorial(int n) {
    long long output = 1;
    for (int i = 1; i <= n; i++) {
        output = output * i;
    }
    return output;
}

int main() {
    int n;
    cout << "Enter the number you want to find the factorial of";
    cin >> n;
    if (n < 0) {
        cout << "Factorial is not defined "<< endl;
        return 0;
    }


    clock_t start = clock();
    long long result = findthefactorial(n);
    clock_t end = clock();
    double elapsed = double(end - start) * 1000000000 / CLOCKS_PER_SEC;
    cout << fixed << setprecision(0); 
    cout << "Factorial = " << result << endl;
    cout << "Time taken is : " << elapsed << "in  nanoseconds" << endl;
    
}
