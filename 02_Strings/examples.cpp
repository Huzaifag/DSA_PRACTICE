#include <iostream>
#include <string>
using namespace std;

// Example 1: Find a Substring in the Given String
void ex1()
{
    string str = "Hello world, wonderful world!";
    cout << "String: " << str << endl;

    // find the first occurrence
    size_t first_occurrence = str.find("world");

    // find the last occurrence
    size_t last_occurrence = str.rfind("world");

    if (first_occurrence != string::npos)
    {
        cout << "First occurrence: 'world' found at position: " << first_occurrence << endl;
        cout << "Last occurrence: 'world' found at position: " << last_occurrence << endl;
    }
    else
    {
        cout << "'world' not found" << endl;
    }
}

// Example 2: Append to a String
void ex2()
{
    string intro = "My name is: ";
    string name;

    // Read an entire line (including spaces) from user input
    cout << "Enter your name: ";
    getline(cin, name);

    // Append name to the intro string
    intro.append(name);

    // Output the combined string
    cout << intro << endl;
}

// Example 3: Insert a String at a Given Position

void ex3()
{
    string str = "Hello world, world!";
    cout << "Before: " << str << endl;

    // insert "beautiful" at the 13th index
    str.insert(13, " beautiful");

    cout << "After: " << str << endl;
}

// Example 4: Erase N Characters From the Given Position

void ex4()
{
    string str = "Hello world, beautiful world!";
    cout << "Before: " << str << endl;

    // erase five characters starting from the seventh index
    str.erase(7, 5);

    cout << "After: " << str << endl;
}

// Example 5: Replace N Characters Within A String

void ex5()
{
    string str = "Hello world, beautiful world!";
    cout << "Before: " << str << endl;

    // erase five characters starting from the seventh index
    str.replace(6, 2, "Huzaifa");

    cout << "After: " << str << endl;
}

void ex6(){
    string str1 = "Hello world";
    string str2 = "Hello world";
    string str3 = "Hello";
    string str4 = "Hello world, What's Up?";
    
    cout << "String 1: " << str1 << endl;
    cout << "String 2: " << str2 << endl;
    cout << "String 3: " << str3 << endl;
    cout << "String 4: " << str4 << endl;
    
    // compare the strings
    cout <<"Comparing String 1 and String 2: "  << str1.compare(str2) << " (Equal)" <<endl;
    cout <<"Comparing String 1 and String 3: " << str1.compare(str3) << " (String 1 is Longer)" << endl;
    cout <<"Comparing String 1 and String 4: " << str1.compare(str4) <<" (String 1 is Smaller)" << endl;
}
int main()
{
    // You can call either function:
    ex6();

    return 0;
}
