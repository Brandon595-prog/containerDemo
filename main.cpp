#include <iostream>
#include <string>
#include <stdexcept>
#include "header.h"

using namespace std;

int main() {
    cout << "MY CUSTOM VECTOR DEMO\n";
    cout << "----------------------\n\n";

    MyVector<int> numbers;
    MyVector<int> scores;

    cout << "Initial size: " << numbers.size() << endl;
    cout << "Initial capacity: " << numbers.capacity() << endl;

    cout << "\nAdding numbers...\n";

    for (int i = 1; i <= 6; i++) {
        numbers.push_back(i * 10); // 10-60 by 10

        cout << "Added " << i * 10
            << " | Size: " << numbers.size()
            << " | Capacity: " << numbers.capacity()
            << endl;
    }

    cout << "\nStored numbers:\n";

    for (size_t i = 0; i < numbers.size(); i++) {
        cout << numbers.at(i) << " ";
    }

    cout << "\n\nTesting element modification...\n";
    numbers.at(0) = 100;
    cout << "First element: " << numbers.at(0) << endl;

    cout << "\nTesting invalid index...\n";

    try {
        cout << numbers.at(20) << endl;
    }
    catch (const out_of_range& e) {
        cout << "Error: " << e.what() << endl;
    }

    cout << "\nTesting with strings...\n";

    MyVector<string> names;

    names.push_back("Alex");
    names.push_back("Jordan");
    names.push_back("Taylor");

    for (size_t i = 0; i < names.size(); i++) {
        cout << names.at(i) << endl;
    }

    scores.empty();

    scores.push_back(1); 
    scores.push_back(2); 
    scores.push_back(3);
    scores.push_back(4); 
    scores.push_back(5);  

    for (size_t i = 0; i < scores.size(); i++)
    {
	cout << scores.at(i) <<"\n" << endl;
    } 

    scores.pop_back(); 

    for (size_t i = 0; i < scores.size(); i++)
     {
         cout << scores.at(i) << "\n" << endl;
     }
     
     scores.clear(); 
     
      for (size_t i = 0; i < scores.size(); i++)
	{
          cout << "scores" << scores.at(i) << endl;
      } 

     scores.push_back(6); 
     scores.push_back(7); 
     scores.push_back(8);
     scores.push_back(9); 
     scores.push_back(10); 
	
	
	for (size_t i = 0; i < scores.size(); i++)
	{
          cout << scores.at(i) << endl;
        } 
 

    

    return 0;
}
