#include <iostream> // cout; cin
#include <string>   // strings

// COMMENTING SHORTCUT
// select the lines you wish to comment/uncomment
// "CTRL" + "/"

int main() {
    std::cout << "Test" << std::endl;

    // ===============================================================================================
    // {5} Example 3: Derefencing a Pointer
    // int year = 2022;			    // (1)
    // int* p_year = &year; 		// (2) reference year
    // int age = *p_year - 1998;	// (3) dereference p_year
    // std::cout << "Variable value:       " << year << std::endl;
    // std::cout << "Referenced variable:  " << &year << std::endl;
    // std::cout << "Pointer value:        " << p_year << std::endl;
    // std::cout << "Dereferenced Pointer: " << *p_year << std::endl;


    // ===============================================================================================
    // {6} Exercise 3: Pointers Dereferencing
    // DO THIS EXERCISE !
    // int day_of_week {4};
    // int* ptr_dow {&day_of_week};

    // std::cout << "dow:      " << day_of_week << std::endl;
    // std::cout << "&dow:     " << &day_of_week << std::endl;
    // std::cout << "ptr_dow:  " << ptr_dow << std::endl;
    // std::cout << "*ptr_dow: " << *ptr_dow << std::endl;


    // ===============================================================================================
    // {7} Homework 1: Swapping Pointers
    // DO THIS AT HOME !
        // In this homework we will swap two pointers. 
        // 1)	Create two pointers to two different variables. 
        // 2)	Now swap these pointers (without using the variables).
        // 3)   dont use swap()
        // [Hint: You will need to create a temporary pointer]
    

    // ===============================================================================================
    // {8} Example 4: Constants and Pointers
    std::string msg {"Hello Naliko!"};     // string
    const std::string cns_msg {"This message cannot be changed!"}; // constant string;

    std::string* ptr1 {&msg};               // (string) pointer
    const std::string* ptr2 {&cns_msg};     // (constant string) pointer

    std::string* const ptr3 {&msg};         // (string) constant pointer
    const std::string* const {&cns_msg};    // (constant string) constant pointer


    // ===============================================================================================
    // {9} Exercise 4: Constants and Pointers
    // DO THIS NOW !


    // ===============================================================================================
    // {10} Example 5: Pointing to the First Element of an Array

    // std::string family[4] {"Niko", "Taki", "Toni", "Nami"};     // array declaration
    // std::string* ptr_family {&family[0]};   // pointer points at first item
    
    // METHOD OLD: printing individual elements (counting from zero)
    // std::cout << family[0] << std::endl;
    // std::cout << family[1] << std::endl;
    // std::cout << family[2] << std::endl;
    // std::cout << family[3] << std::endl;
    
    // METHOD NEW: printing individual elements by incrementing the address
    // std::cout << *(ptr_family) << std::endl;          // dereference the pointer (don't need the brackets)
    // std::cout << *(ptr_family + 1) << std::endl;      // dereference the incremented address (need brackets!)
    // std::cout << *(ptr_family + 2) << std::endl;      // incremented address again ... 


    // ===============================================================================================
    // {11} Exercise 5: Pointing to the First Element of an Array
    // DO THIS NOW !

    
    // ===============================================================================================
    // {12} Example 6: Printing using Pointers and Loops

    // std::string family[4] {"Niko", "Taki", "Toni", "Nami"};     // array declaration
    
    // we loop until size(family)
    // for (int i = 0; i < size(family); i += 1) { 
    //     std::cout << family[i] << std::endl;
    // };

    // ===============================================================================================
    // {12} Homework 2: Printing using Pointers and Loops [EXAMPLE SOLUTION]
    // DO THIS AT HOME !!

};