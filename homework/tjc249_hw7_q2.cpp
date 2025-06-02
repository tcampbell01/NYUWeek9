#include <iostream>
using namespace std;

void analyzeDividors(int num, int &outCoutDivs, int &outSumDivs);
bool isPerfect(int num);
int sumProperDivisors(int num);
void perfectAndAmicableNumbersFromTwoToNum(int num);

int main()
{
    int input;
    int countDivs;
    int sumDivs;

    cout << "Please enter a positive integer that is greater than or equal to 2: " << endl;
    cin >> input;

    analyzeDividors(input, countDivs, sumDivs);

    cout << "Number: " << input << endl;
    cout << "Count of divisors: " << countDivs << endl;
    cout << "Sum of Divisors: " << sumDivs << endl;

    // Check if the number is perfect
    if (isPerfect(input)) {
        cout << input << " is a perfect number." << endl;
    } else {
        cout << input << " is not a perfect number." << endl;
    }

    // Print perfect and amicable numbers
    perfectAndAmicableNumbersFromTwoToNum(input);

    return 0;
}



// int& means parameter is passed by reference - the function works directly with the original variable and not a copy of it.  This is useful when you need to compute and return more than one variable from a function
void analyzeDividors(int num, int &outCountDivs, int &outSumDivs)
{
    outCountDivs = 0;
    outSumDivs = 0;

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            outCountDivs++;
            outSumDivs += i;
        }
    }
}

// Function to check if a number is perfect
bool isPerfect(int num)
{
    // A number is perfect if the sum of its proper divisors equals the number
    return sumProperDivisors(num) == num;
}

// Function to calculate the sum of proper divisors of a number
int sumProperDivisors(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum;
}

// Function to print perfect and amicable numbers
void perfectAndAmicableNumbersFromTwoToNum(int num) {
    cout << "\nPerfect numbers between 2 and " << num << ":" << endl;

    // Check for perfect numbers
    for (int i = 2; i <= num; i++) {
        if (isPerfect(i)) {
            cout << i << endl;
        }
    }

    cout << "\nAmicable numbers between 2 and " << num << ":" << endl;

    // Check for amicable numbers
    for (int a = 2; a <= num; a++) {
        int b = sumProperDivisors(a);
        if (b > a && b <= num && sumProperDivisors(b) == a) { // Ensure b > a to avoid duplicates
            cout << "(" << a << ", " << b << ")" << endl;
        }
    }
}