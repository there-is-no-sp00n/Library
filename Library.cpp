#include "Library.h"

Library::Library()
{

}

void Library::add_comic(vector <Comic> from_con)
{
	all_comic = from_con;
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

void Library::print_all_comics(vector <Comic> print_com)
{
	//vector <Comic> read_access = get_comic_vec();
	all_comic = print_com;
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
		cout << setw(10) << left << "Comic # " << i+1 << endl;
		cout << setw(20) << "Title: " << setw(10) << title << endl;
		cout << setw(20) << "Publisher: " << setw(10) << publisher << endl;
		cout << setw(20) << "Year: " << setw(10) << year << endl;
		cout << setw(20) << "Author: " << setw(10) << author << endl;
		cout << setw(20) << "Illustrator: " << setw(10) << illustrator << endl;
	}
}

void Library::delete_comic(vector <Comic> from_cont)
{
	all_comic = from_cont;
	print_all_comics(all_comic);

	int delete_choice;

	cout << "Which comic would you like to delete? ";
	cin >> delete_choice;

	all_comic.erase(all_comic.begin() + delete_choice-1);
}


vector <Comic> Library::get_comic_vec()
{
	return all_comic;
}