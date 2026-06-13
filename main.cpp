/*#include <iostream>

using namespace std;

int main() {

    int a, b;
    cout << "Enter your integer for a: ";
    cin >> a;
    cout << endl << "Enter your integer for b: ";
    cin >> b;

    int* ptr_a = &a;
    int* ptr_b = &b;

    cout << endl << "Dereferenced a: " << *ptr_a;
    cout << endl << "Dereferenced b: " << *ptr_b;
}*/


#include <iostream>

using namespace std;

int main() {

    int array[] = { 123, 2, 60, 100, 435, 0, 7 };
    int* max_ptr = array;

    for (int& i : array) {
        if (i > *max_ptr) {
            max_ptr = &i;
        }
    }

    cout << *max_ptr;
}