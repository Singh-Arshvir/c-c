// C++ program to illustrate how to create an array of 
// structs 
#include <iostream> 
#include <string> 
using namespace std; 

// Defining the struct 
struct Student { 
	int id; 
	string name; 
}; 

int main() 
{ 
	// Declaring the size of the array 
	int size = 3; 

	// Declaring an array of structs 
	Student myArray[size]; 

	// Initializing data to structs present in the array 
	for (int i = 0; i < size; i++) { 
		myArray[i].id = i + 1; 
		myArray[i].name = "Student" + to_string(i + 1); 
	} 

	// Printing the data of structs present in the array 
	cout << "Array Elements:" << endl; 
	for (int i = 0; i < size; i++) { 
		cout << "Element " << i + 1 
			<< ": ID = " << myArray[i].id 
			<< ", Name = " << myArray[i].name << endl; 
	} 

	return 0; 
}
