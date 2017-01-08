#include "Library.h"

Library::Library()
{

}

//start of comic functionalities

void Library::add_comic(vector <Comic> from_con)
{
	all_comic = from_con;
	string title, publisher, year, author, illustrator;

	int flag = 1;

	while (flag)
	{
	
		cout << "What is the title? ";
		cin.ignore();
		getline(cin, title);
		cout << endl;

		while (title.find(" ") != string::npos)
		{
			cout << "ERROR! Cannot have space in input" << endl;
			cout << endl;
			cout << "What is the title? ";
			getline(cin, title);
			cout << endl;
		}
	

		cout << "Name of publisher? ";
		getline(cin, publisher);
		cout << endl;

		while (publisher.find(" ") != string::npos)
		{
			cout << "ERROR! Cannot have space in input" << endl;
			cout << endl;
			cout << "Name of publisher? ";
			getline(cin, publisher);
			cout << endl;
		}
	

		cout << "What year was it published? ";
		getline(cin, year);
		cout << endl;

		while (year.find(" ") != string::npos)
		{
			cout << "ERROR! Cannot have space in input" << endl;
			cout << endl;
			cout << "What year was it published? ";
			getline(cin, year);
			cout << endl;
		}

		cout << "What is the name of the author? ";
		getline(cin, author);
		cout << endl;

		while (author.find(" ") != string::npos)
		{
			cout << "ERROR! Cannot have space in input" << endl;
			cout << endl;
			cout << "What is the name of the author? ";
			getline(cin, author);
			cout << endl;
		}

		cout << "What is the name of the illustrator? ";
		getline(cin, illustrator);
		cout << endl;

		while (illustrator.find(" ") != string::npos)
		{
			cout << "ERROR! Cannot have space in input" << endl;
			cout << endl;
			cout << "What is the name of the illustrator? ";
			getline(cin, illustrator);
			cout << endl;
		}

		Comic com_1(title, publisher, year, author, illustrator, "comic");

		all_comic.push_back(com_1);

		cout << "Press 1 to add another comic" << endl;
		cout << "Press 0 to stop adding comics" << endl;

		cout << "What is your choice? ";

		cin >> flag;
		while(cin.fail())
		{
			cout << "ERROR INVALID INPUT" << endl;
			cin.clear();
			cin.ignore(256, '\n');
			cout << "Please enter 1 or 0: ";
			cin >> flag;
		}


	}

}

void Library::print_all_comics(vector <Comic> print_com)
{
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

void Library::sort_comic(vector <Comic> from_cont)
{
	all_comic = from_cont;
	string title_1, title_2;
	Comic temp;

	for (int i = 1; i < all_comic.size(); i++)
	{
		for (int j = 0; j < all_comic.size()-i; j++)
		{
			title_1 = all_comic[j].get_title();
			title_2 = all_comic[j+1].get_title();

			if (title_1.compare(title_2) > 0)
			{
				temp = all_comic[j+1];
				all_comic[j+1] = all_comic[j];
				all_comic[j] = temp;
			}
		}
	}
}

void Library::search_comic(vector <Comic> from_cont)
{
	cout << endl;
	cout << "Press 1 to search by Title" << endl;
	cout << "Press 2 to seach by Author" << endl;

	string title,title_2, author, author_2, publisher, year, illustrator;

	int choice;

	cout << "What is your choice? ";

	cin >> choice;		

	while (!(choice == 1 || choice == 2) || cin.fail())
	{
		cout << "ERROR INVALID INPUT" << endl;
		cin.clear();
		cin.ignore(256, '\n');
		cout << "Please enter valid input: ";
		cin >> choice;
	}

	if (choice == 1)
	{
		cout << "What is the title? ";
		cin >> title;
		cout << endl;

		for (int i = 0; i < from_cont.size(); i++)
		{
			title_2 = from_cont[i].get_title();

			if (title.compare(title_2) == 0)
			{
				publisher = from_cont[i].get_pub();
				year = from_cont[i].get_year();
				author = from_cont[i].get_author();
				illustrator = from_cont[i].get_illustrator();

				cout << endl;
				cout << setw(10) << left << "Comic # " << i+1 << endl;
				cout << setw(20) << "Title: " << setw(10) << title << endl;
				cout << setw(20) << "Publisher: " << setw(10) << publisher << endl;
				cout << setw(20) << "Year: " << setw(10) << year << endl;
				cout << setw(20) << "Author: " << setw(10) << author << endl;
				cout << setw(20) << "Illustrator: " << setw(10) << illustrator << endl;
			}
		}
	}

	if (choice == 2)
	{
		cout << "Who is the author? ";
		cin >> author;
		cout << endl;

		for (int i = 0; i < from_cont.size(); i++)
		{
			author_2 = from_cont[i].get_author();

			if (author.compare(author_2) == 0)
			{
				publisher = from_cont[i].get_pub();
				year = from_cont[i].get_year();
				title = from_cont[i].get_title();
				illustrator = from_cont[i].get_illustrator();

				cout << endl;
				cout << setw(10) << left << "Comic # " << i+1 << endl;
				cout << setw(20) << "Title: " << setw(10) << title << endl;
				cout << setw(20) << "Publisher: " << setw(10) << publisher << endl;
				cout << setw(20) << "Year: " << setw(10) << year << endl;
				cout << setw(20) << "Author: " << setw(10) << author << endl;
				cout << setw(20) << "Illustrator: " << setw(10) << illustrator << endl;
			}
		}
	}

}


vector <Comic> Library::get_comic_vec()
{
	return all_comic;
}


//end of comic functionalities


vector <Game> Library::get_game_vec()
{
	return all_game;
}