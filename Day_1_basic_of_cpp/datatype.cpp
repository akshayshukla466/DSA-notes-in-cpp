#include <iostream>
#include <string>
using namespace std;

// User-defined type (class)
class Student {
public:
    string name;
    int roll;
};

int main() {
    // ----- 1. BASIC DATA TYPES -----
    int age = 20;                // Integer
    float price = 99.99f;        // Floating-point (single precision)
    double pi = 3.1415926535;    // Double precision
    char grade = 'A';            // Character
    bool isStudent = true;       // Boolean (true/false)
    wchar_t symbol = L'Ω';       // Wide character

    // ----- 2. MODIFIER DEMONSTRATION -----
    short s = 32767;             // Short integer
    long l = 100000L;            // Long integer
    long long bigNum = 1234567890123LL; // Long long integer
    unsigned int u = 4000000000; // Unsigned integer

    // ----- 3. DERIVED DATA TYPES -----
    int marks[3] = {90, 85, 88}; // Array
    int* ptr = &age;             // Pointer
    string name = "Akshay";      // String class (part of STL)

    // ----- 4. ENUM (User-defined data type) -----
    enum Color { RED, GREEN, BLUE };
    Color favorite = GREEN;

    // ----- 5. CLASS OBJECT -----
    Student s1;
    s1.name = "Rahul";
    s1.roll = 101;

    // ----- OUTPUT -----
    cout << "---- BASIC DATA TYPES ----" << endl;
    cout << "int: " << age << endl;
    cout << "float: " << price << endl;
    cout << "double: " << pi << endl;
    cout << "char: " << grade << endl;
    cout << "bool: " << isStudent << endl;
    cout << "wchar_t: " << symbol << endl;

    cout << "\n---- MODIFIERS ----" << endl;
    cout << "short: " << s << endl;
    cout << "long: " << l << endl;
    cout << "long long: " << bigNum << endl;
    cout << "unsigned int: " << u << endl;

    cout << "\n---- DERIVED TYPES ----" << endl;
    cout << "Array element [0]: " << marks[0] << endl;
    cout << "Pointer value (age): " << *ptr << endl;
    cout << "string: " << name << endl;

    cout << "\n---- ENUM ----" << endl;
    cout << "Favorite color (GREEN = 1): " << favorite << endl;

    cout << "\n---- CLASS OBJECT ----" << endl;
    cout << "Student Name: " << s1.name << ", Roll: " << s1.roll << endl;

    return 0;
}
/*What this program covers:
✅ Basic Data Types: int, float, double, char, bool, wchar_t
✅ Type Modifiers: short, long, long long, unsigned
✅ Derived Types: array, pointer, string
✅ User-defined Types: enum, class*/