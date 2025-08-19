#include <iostream>
using namespace std;

class OOPPractical1 {
public:
  
    void checkEvenOdd(int num) {
        if (num & 1)
            cout << num << " is Odd\n";
        else
            cout << num << " is Even\n";
    }


    void swapNumbers(int &a, int &b) {
        int temp = a;
        a = b;
        b = temp;
    }


    void fibonacciSeries(int n) {
        int t1 = 0, t2 = 1, nextTerm;
        cout << "Fibonacci Series: ";
        for (int i = 1; i <= n; i++) {
            cout << t1 << " ";
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
        }
        cout << "\n";
    }

   
    void computeQuotientRemainder(int dividend, int divisor) {
        int quotient = dividend / divisor;
        int remainder = dividend % divisor;
        cout << "Quotient = " << quotient << ", Remainder = " << remainder << "\n";
    }

   
    void printASCII(char ch) {
        cout << "ASCII value of '" << ch << "' is " << int(ch) << "\n";
    }
};

int main() {
    OOPPractical1 obj; 

    int num;
    cout << "Enter a number to check even/odd: ";
    cin >> num;
    obj.checkEvenOdd(num);

    int a, b;
    cout << "\nEnter two numbers to swap: ";
    cin >> a >> b;
    obj.swapNumbers(a, b);
    cout << "After swapping: a = " << a << ", b = " << b << "\n";

    int n;
    cout << "\nEnter number of terms for Fibonacci series: ";
    cin >> n;
    obj.fibonacciSeries(n);

    int dividend, divisor;
    cout << "\nEnter dividend and divisor: ";
    cin >> dividend >> divisor;
    obj.computeQuotientRemainder(dividend, divisor);

    char ch;
    cout << "\nEnter a character to find its ASCII value: ";
    cin >> ch;
    obj.printASCII(ch);

    return 0;
}
