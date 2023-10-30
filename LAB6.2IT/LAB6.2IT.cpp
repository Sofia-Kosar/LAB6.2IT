#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

int* create(int n, const int Low, const int High) {
    int* a = new int[n]; 
    for (int i = 0; i < n; i++) {
        a[i] = Low + rand() % (High - Low + 1);
    }
    return a;
}

void print(int* a, int n) {
    cout << "Array: ";
    for (int i = 0; i < n; i++) {
        cout << setw(5) << a[i];
    }
    cout << endl;
}

double calculateAverage(int* a, int n) {
    int sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            sum += a[i];
            count++;
        }
    }
    if (count == 0) {
        return 0.0;
    }
    return static_cast<double>(sum) / count;
}

int main() {
    int n;
    cout << "Enter the size: ";
    cin >> n;

    srand((unsigned)time(NULL));
    int Low = 1;
    int High = 100;

    int* a = create(n, Low, High);
    print(a, n);

    double average = calculateAverage(a, n);
    cout << "Average of elements: " << average << endl;

    delete[] a; // Звільнення пам'яті

    return 0;
}
