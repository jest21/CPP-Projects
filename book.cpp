#include <iostream>
#include <string>
using namespace std;
class Book{
	string title, author, ISBN;
	double price;
public:
	Book(){
		title = author = ISBN = "UnKnown";
		price = 0;
	}
	Book(string title1,string author1,string ISBN1,double price1){
		title = title1;
		author = author1;
		ISBN = ISBN1;
		price = price1;
	}
	void printBookDetails(){
		cout << "\n\t\tBook\nTitle: " << title;
		cout << "\nAuthor: " << author;
		cout << "\nISBN: " << ISBN;
		cout << "\nPrice: " << price << endl;
	}
};
int main(){
	string t,a,isbn;
	double p;
	cout << "\nEnter book details:\nTitle: ";
	cin >> t;
	cout << "\nAuthor: ";
	cin >> a;
	cout << "\nISBN: ";
	cin >> isbn;
	cout << "\nPrice: ";
	cin >> p;
	Book book(t,a,isbn,p);
	Book anotherBook;
	book.printBookDetails();
	anotherBook.printBookDetails();
}