#include "Library.h"

Library::Library()
{

}

void Library::add_comic()
{
	string title, publisher, year, author, illustrator;
	
	cout << "What is the title? ";
	cin.ignore();
    getline(cin, title);
	cout << endl;
	

	cout << "Name of publisher? ";
	//cin.ignore();
    getline(cin, publisher);
	cout << endl;
	

	cout << "What year was it published? ";
	//cin.ignore();
    getline(cin, year);
	cout << endl;

	cout << "What is the name of the author? ";
	//cin.ignore();
    getline(cin, author);
	cout << endl;

	cout << "What is the name of the illustrator? ";
	//cin.ignore();
    getline(cin, illustrator);
	cout << endl;

	Comic com_1(title, publisher, year, author, illustrator, "comic");

	all_comic.push_back(com_1);

	//print_all_comics();
}

void Library::print_all_comics()
{
	//vector <Comic> read_access = get_comic_vec();
	int com_size = all_comic.size();

	for (int i = 0; i < com_size; i++)
	{
		Comic temp;
		string title, publisher, year, author, illustrator;

		temp = all_comic[i];
		title = temp.get_title();
		publisher = temp.get_pub();
		year = temp.get_year();
		author = temp.get_author();
		illustrator = temp.get_illustrator();

		cout << endl;
		cout << "Comic # " << i+1 << endl;
		cout << "Title: " << title << endl;
		cout << "Publisher: " << publisher << endl;
		cout << "Year: " << year << endl;
		cout << "Author: " << author << endl;
		cout << "Illustrator: " << illustrator << endl;
	}
}

vector <Comic> Library::get_comic_vec()
{
	return all_comic;
}