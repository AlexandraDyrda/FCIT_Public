#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//!Ввести два масиви та створити третій зі спільних елементів масивів; Розмір масиву до 10; Тип даних дійсний.

int main() {
    srand(time(NULL));
    int n;
    double first_array[10], second_array[10], third_array[10]; 
    AGAIN:
    cout << "Enter the size of the array (up to 10): " << " "; cin >> n;
    if (n > 10) {
        cout << "Try again!" << endl;
        goto AGAIN;
    } else if (n == 10) {
        cout << "It has to be less than 10!" << endl;
        goto AGAIN;
    }
    cout << "The first random array of " << n << " elements:" << endl; 
    for (int i = 0; i < n; i++) {
       first_array[i] = rand() % 10;
       cout << first_array[i] << " ";
    }
    cout << "\n" << "The second random array of " << n << " elements:" << endl; 
    for (int i = 0; i < n; i++) {
       second_array[i] = rand() % 10;
       cout << second_array[i] << " ";
    }
    cout << "\n" << "The third array of common elements:"<< endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(first_array[i] == second_array[j]) {
                second_array[j] = second_array[j + 1];
                j--;
                third_array[i] = first_array[i];
                cout << third_array[i] << " ";
                break;
            } 
        }
    }
} 