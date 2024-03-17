#include<iostream>
#include<vector>
#include<string>
#include "Book.h"
using namespace std;
int main()
{
	vector<Book> books;

	char choice;



	do
	{
		//removal
		string title_to_remove;
		//creation
		string title = " ";
		string author = " ";
		int year = 0;

		Book book1(title, author, year);

		cout << "Menu" << endl;
		cout << "1. View Books" << endl;
		cout << "2. Add Books" << endl;
		cout << "3. Delete Books" << endl;
		cout << "4. Exit" << endl;
		cout << "Enter choice: ";

		cin >> choice;

		if (choice == '1'|| choice == '2'|| choice == '3'|| choice == '4')
		{
			switch (choice)
			{
			case'1':
				Book::listBooks(books);
				break;
			case'2':

				cout << "Enter title: ";
				cin >> title;
				cout << "Enter author: ";
				cin >> author;
				cout << "Enter year: ";
				cin >> year;
				book1.title = title;
				book1.author = author;
				book1.publicationYear = year;
				books.push_back(book1);
				break;
			case'3':
				cout << "Enter Title to Remove Book:" << endl;
				cin >> title_to_remove;
				Book::removeBook(books, title_to_remove);
				break;
			case'4':
				cout << endl;
				break;
			}
		}
		else
		{
			cout << "Wrong Entry! Try Again!" << endl;
		}
	} while (choice != '4');
}