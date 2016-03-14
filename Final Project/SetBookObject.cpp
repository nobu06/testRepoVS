/*
    SetBookObject.cpp
 
 
 
 */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#define TITLE 0
#define AUTHOR 1
#define PUBLISHER 2
#define ISBN 3
#define RPRICE 4
#define WSPRICE 5
#define QUANT 6
#define DATEADD 7

int main()
{
    // function open
    // return or enter an array
    // read the values
    // then set to array
        // set arraysize[1000]
        // use >>>     array i = new book[size];
    // then clost the file
    
    
    // have the size of array
    
    
    /* Pseudocode */
    // input --> array, size of array, file name
    // open file
    // read input
        // create new object from file
    // close file
    // return bool -- success.
    // try, catch.
        // will return int --
        // if fails, will throw a character. if it catches a character, then it fails.
        // try catch will also throw sth.
        // main func will be try catch
        // if catches sth wrong, will save data <-  m?
            // if throw exception, will throw catch.
            // throw and catch -- 
    
    
    // Function Read Input
    // bool readInput(____ [], int size, get the entire file name)
    fstream file;
    file.open("booklist2.txt", ios::in);
    
    string word;
    int last;
    char clast;
    string slast;
    int day;
    int month;
    int year;
    int counter = 0;

    while (file >> word)
    {
        if (word == ";")
        {
            cout << endl;
            continue;
        }
        cout << word << endl;
        
        // use switch to select where to assign the string value
        switch (counter)
        {
            case TITLE:
                setAuthor(word);
                break;
            case AUTHOR:
                setAuthor(word);
                break;
            case PUBLISHER:
                setPublisher(word);
                break;
            case ISBN:
                setIsbn(word);
                break;
            case RPRICE:
                setRprice(word);
                break;
            case WSPRICE:
                setWSPrice(word);
                break;
            case QUANT:
                setQuant(word);
                break;
            case DATEADD:
                set(DateAdd);
                break;
        }

        // reset the counter
        if (counter == 7)
        {
            counter = 0;
        }
    }
    
    
    
    
    
    
//    while (inputFile >> word)
//    {
//        if (word[word.length()-1] == '~')
//        {
//            cout << "\n\n";
//        }
//        cout << word;
//    }
}