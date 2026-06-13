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


/*#include <iostream>

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
}*/


/*#include <iostream>

using namespace std;

int main() {

    char array[] = "abcde";
    char* ptr = array;

    while (*ptr != '\0') {
        ptr++;
    }

    cout << ptr - array;
}*/


/*#include <iostream>

using namespace std;

int main() {

    char array[] = "abcde";
    char* ptr = array;

    while (*ptr != '\0') {
        ptr++;
    }

    int cells = ptr - array;

    for (int i = 0; i <= cells; i++) {
        cout << *ptr;
        ptr--;
    }
}*/


#include <iostream>
#include <vector>

using namespace std;

int main() {

    //vector<int> v = { 1,7,34,9,0,5,3,28,6 };
    vector<int> v = { 1,7,34,9,5,3,28,6 };
    int* ptr_beg = &v[0];
    int* ptr_end = &v[v.size() - 1];

    int midpoint;

    for (int i = 0; i < v.size(); i++) {
        ptr_beg++;
        ptr_end--;

        if (ptr_beg == ptr_end) {
            midpoint = *ptr_beg;
            break;
        }
        else if (ptr_beg > ptr_end) {
            midpoint = *ptr_end;
            break;
        }
    }
    
    cout << midpoint;
}