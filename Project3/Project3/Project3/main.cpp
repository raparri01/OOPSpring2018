//
// main.cpp-- Stacks
//
// Driver program for Stack ADT -- The text files (read by this code) contain a series of commands
// that will help you test your Stack ADT code by triggering various Stack class methods.
//
// DO NOT MODIFY OR SUBMIT THIS FILE
//
#include <iostream>
#include <fstream>
#include <new>
#include <cstddef>
#include "stack.h"

using namespace std;

int main(int argc, char* argv[])
{
    ifstream inputs;                  // Input file for commands
    char op;                          // Hold operation and optional char input
    int value;                        // Value input from file
    string comment;                   // Holds comment from file
    Stack* sPtr = NULL;               // Will point to stack object
    string filename;
    // Output usage message if one input file name is not provided
  
    //cin>>filename;
    filename = "/Users/robertaparri/Documents/OOP/OOPgithub/Project3/Project3/Project3/p03input4.txt";
    // Attempt to open input file -- terminate if file does not open
    inputs.open(filename.c_str());
    if (!inputs)
    {
        cout << "Error - unable to open input file" << endl;
        return 1;
    }
    
    // Input and echo header comment from file
    getline(inputs, comment);          // Input and echo the comment appearing in the test file
    cout << endl << '#' << comment << endl;
    
    // Process commands from input file
    inputs >> op;                        // Attempt to input first command
    while (inputs)
    {
        switch (op)                     // Process operation input from file
        {
            case '#':  // Test file comment
                getline(inputs, comment);     // Input and echo the comment appearing in the test file
                cout << '#' << comment << endl;
                break;
                
            case 'c':  // Constructor
                cout << endl << "Stack( )";
                try
            {
                sPtr = new Stack( );    // Attempt to create an empty stack object
                cout << " -- Successful" << endl;
            }
                catch ( std::bad_alloc )
            {
                cout << "Failed : Terminating now..." << endl;
                return 1;
            }
                break;
                
            case '+':  // Push
                inputs >> value;
                cout << "Push(" << value << ")";
                try
            {
                sPtr->Push(value);
                cout << " -- successful";
            }
                catch (StackFull)
            {
                cout << " -- Failed Full Stack";
            }
                cout << endl;
                break;
                
            case '-':  // Pop
                cout << "Pop() -- ";
                try
            {
                sPtr->Pop();
                cout << "successful";
            }
                catch (StackEmpty)
            {
                cout << "Failed Empty Stack";
            }
                cout << endl;
                break;
                
            case 'f':   // IsFull
                cout << "IsFull() -- ";
                try
            {
                if (sPtr->IsFull())
                    cout << "true";
                else
                    cout << "false";
            }
                catch ( ... )
            {
                cout << "operation failed";
            }
                cout << endl;
                break;
                
            case 'e':   // IsEmpty
                cout << "IsEmpty() -- ";
                try
            {
                if (sPtr->IsEmpty())
                    cout << "true";
                else
                    cout << "false";
            }
                catch ( ... )
            {
                cout << "operation failed";
            }
                cout << endl;
                break;
                
            case 'm':   // Make Empty
                sPtr->MakeEmpty();
                cout << "MakeEmpty()" << endl;
                break;
                
            case 'p':  // Print Stack
                cout << "Print() -- ";
                sPtr->Print();
                break;
                
            case 't':  // Top of Stack
                try
            {
                cout << "Top() -- " << sPtr->Top() << endl;
            }
                catch (StackEmpty)
            {
                cout << "Top() -- Failed Empty Stack" << endl;
            }
                break;
                
            case '>':   // Max value within Stack
                try
            {
                cout << "Max() -- " << sPtr->Max() << endl;
            }
                catch (StackEmpty)
            {
                cout << "Max() -- Failed Empty Stack" << endl;
            }
                break;
                
            case '<':   // Min value within Stack
                try
            {
                cout << "Min() -- " << sPtr->Min() << endl;
            }
                catch (StackEmpty)
            {
                cout << "Min() -- Failed Empty Stack" << endl;
            }
                break;
                
            case '?':  // Peek(n) Stack
                inputs >> value;
                try
            {
                cout << "Peek(" << value << ") -- " << sPtr->Peek(value) << endl;
            }
                catch (StackInvalidPeek)
            {
                cout << "Peek(" << value << ") -- Failed Invalid Peek" << endl;
            }
                break;
                
            case 's':  // Size of Stack
                cout << "Size() -- " << sPtr->Size() << endl;
                break;
                
            case 'd':  // Destructor
                delete sPtr;
                sPtr = NULL;
                cout << "~Stack()" << endl << endl;
                break;
                
            default:   // Error
                cout << "Error - unrecognized operation '" << op << "'" << endl;
                cout << "Terminating now..." << endl;
                return 1;
                break;
        }
        
        inputs >> op;    // Attempt to input next command
    }
    
    return 0;
} // End main()


