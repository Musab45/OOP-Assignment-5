#pragma once
#include<iostream>
#include <string>
#include <vector>
using namespace std;

class Book {
public:
    // Book attributes
    string title;
    string author;
    int publicationYear;

    // Constructor to initialize book attributes
    Book(const string& title, const string& author, int publicationYear) :
        title(title), author(author), publicationYear(publicationYear) {}

    // Function prototypes
    static void addBook(vector<Book>& library, const Book& book)
    {
        library.push_back(book);
    }
    static void removeBook(vector<Book>& library, const string& title)
    {
        for (auto it = library.begin(); it != library.end(); ++it) {
            if (it->title == title) {
                library.erase(it);
                return;
            }
        }
        // Handle case where book not found
        cout << "Book not found in library." << endl;
    }

    static void listBooks(const vector<Book>& library)
    {
        if (library.empty()) {
            cout << "Library is empty." << endl;
            return;
        }
        for (const Book& book : library) {
            cout << "Title: " << book.title << ", Author: " << book.author
                << ", Publication Year: " << book.publicationYear << endl;
        }
    }
};