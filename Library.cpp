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

		cout << endl;

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

		cout << endl;

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

	cout << endl;

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



//start of game functionalities

vector <Game> Library::get_game_vec()
{
	return all_game;
}

void Library::add_game(vector <Game> from_cont)
{
	all_game = from_cont;
	string title, publisher, year, platform, genre;

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

		cout << "What is the platform? ";
		getline(cin, platform);
		cout << endl;

		while (platform.find(" ") != string::npos)
		{
			cout << "ERROR! Cannot have space in input" << endl;
			cout << endl;
			cout << "What is the platform? ";
			getline(cin, platform);
			cout << endl;
		}

		cout << "What is the genre? ";
		getline(cin, genre);
		cout << endl;

		while (genre.find(" ") != string::npos)
		{
			cout << "ERROR! Cannot have space in input" << endl;
			cout << endl;
			cout << "What is the genre? ";
			getline(cin, genre);
			cout << endl;
		}

		Game game_1(title, publisher, year, platform, genre);

		all_game.push_back(game_1);

		cout << "Press 1 to add another game" << endl;
		cout << "Press 0 to stop adding games" << endl;

		cout << endl;

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

		cout << endl;
	}

}

void Library::print_all_games(vector <Game> print_game)
{
	all_game = print_game;
	int game_size = all_game.size();

	for (int i = 0; i < game_size; i++)
	{
		Game temp;
		string title, publisher, year, platform, genre;

		temp = all_game[i];
		title = temp.get_title();
		publisher = temp.get_publisher();
		year = temp.get_year();
		platform = temp.get_platform();
		genre = temp.get_genre();

		cout << endl;
		cout << setw(10) << left << "Game # " << i+1 << endl;
		cout << setw(20) << "Title: " << setw(10) << title << endl;
		cout << setw(20) << "Publisher: " << setw(10) << publisher << endl;
		cout << setw(20) << "Year: " << setw(10) << year << endl;
		cout << setw(20) << "Platform: " << setw(10) << platform << endl;
		cout << setw(20) << "Genre: " << setw(10) << genre << endl;
	}
}

void Library::delete_game(vector <Game> from_cont)
{
	all_game = from_cont;
	print_all_games(all_game);

	int delete_choice;

	cout << endl;

	cout << "Which game would you like to delete? ";
	cin >> delete_choice;

	all_game.erase(all_game.begin() + delete_choice-1);
}

void Library::sort_game(vector <Game> from_cont)
{
	all_game = from_cont;
	string title_1, title_2;
	Game temp;

	for (int i = 1; i < all_game.size(); i++)
	{
		for (int j = 0; j < all_game.size()-i; j++)
		{
			title_1 = all_game[j].get_title();
			title_2 = all_game[j+1].get_title();

			if (title_1.compare(title_2) > 0)
			{
				temp = all_game[j+1];
				all_game[j+1] = all_game[j];
				all_game[j] = temp;
			}
		}
	}
}

void Library::search_game(vector <Game> from_cont)
{
	cout << endl;
	cout << "Press 1 to search by Title" << endl;
	cout << "Press 2 to seach by Publisher" << endl;

	string title,title_2, publisher, publisher_2, year,platform, genre;

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
				publisher = from_cont[i].get_publisher();
				year = from_cont[i].get_year();
				platform = from_cont[i].get_platform();
				genre = from_cont[i].get_genre();

				cout << endl;
				cout << setw(10) << left << "Game # " << i+1 << endl;
				cout << setw(20) << "Title: " << setw(10) << title << endl;
				cout << setw(20) << "Publisher: " << setw(10) << publisher << endl;
				cout << setw(20) << "Year: " << setw(10) << year << endl;
				cout << setw(20) << "Platform: " << setw(10) << platform << endl;
				cout << setw(20) << "Genre: " << setw(10) << genre << endl;
			}
		}
	}

	if (choice == 2)
	{
		cout << "Who is the publisher? ";
		cin >> publisher;
		cout << endl;

		for (int i = 0; i < from_cont.size(); i++)
		{
			publisher_2 = from_cont[i].get_publisher();

			if (publisher.compare(publisher_2) == 0)
			{
				publisher = from_cont[i].get_publisher();
				year = from_cont[i].get_year();
				title = from_cont[i].get_title();
				genre = from_cont[i].get_genre();
				platform = from_cont[i].get_platform();

				cout << endl;
				cout << setw(10) << left << "Comic # " << i+1 << endl;
				cout << setw(20) << "Title: " << setw(10) << title << endl;
				cout << setw(20) << "Publisher: " << setw(10) << publisher << endl;
				cout << setw(20) << "Year: " << setw(10) << year << endl;
				cout << setw(20) << "Platform: " << setw(10) << platform << endl;
				cout << setw(20) << "Genre: " << setw(10) << genre << endl;
			}
		}
	}

}

//end of game functionalities


//beginning of book functionalities

vector <Novel> Library::get_novel_vec()
{
	return all_novel;
}

void Library::add_novel(vector <Novel> from_cont)
{
	all_novel = from_cont;
	string title, author, year, genre;

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
	

		cout << "Who is the author? ";
		getline(cin, author);
		cout << endl;

		while (author.find(" ") != string::npos)
		{
			cout << "ERROR! Cannot have space in input" << endl;
			cout << endl;
			cout << "Name of author? ";
			getline(cin, author);
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


		cout << "What is the genre? ";
		getline(cin, genre);
		cout << endl;

		while (genre.find(" ") != string::npos)
		{
			cout << "ERROR! Cannot have space in input" << endl;
			cout << endl;
			cout << "What is the genre? ";
			getline(cin, genre);
			cout << endl;
		}

		Novel novel_1(title, author, genre, year);

		all_novel.push_back(novel_1);

		cout << "Press 1 to add another book" << endl;
		cout << "Press 0 to stop adding books" << endl;

		cout << endl;

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

		cout << endl;


	}

}

void Library::print_all_novels(vector <Novel> print_novel)
{
	all_novel = print_novel;
	int novel_size = all_novel.size();

	for (int i = 0; i < novel_size; i++)
	{
		Novel temp;
		string title, author, year, genre;

		temp = all_novel[i];
		title = temp.get_title();
		author = temp.get_author();
		year = temp.get_year();
		genre = temp.get_genre();

		cout << endl;
		cout << setw(10) << left << "Book # " << i+1 << endl;
		cout << setw(20) << "Title: " << setw(10) << title << endl;
		cout << setw(20) << "Author: " << setw(10) << author << endl;
		cout << setw(20) << "Year: " << setw(10) << year << endl;
		cout << setw(20) << "Genre: " << setw(10) << genre << endl;
	}
}

void Library::delete_novel(vector <Novel> from_cont)
{
	all_novel = from_cont;
	print_all_novels(all_novel);

	int delete_choice;

	cout << endl;
	cout << "Which book would you like to delete? ";
	cin >> delete_choice;

	all_novel.erase(all_novel.begin() + delete_choice-1);
}

void Library::sort_novel(vector <Novel> from_cont)
{
	all_novel = from_cont;
	string title_1, title_2;
	Novel temp;

	for (int i = 1; i < all_novel.size(); i++)
	{
		for (int j = 0; j < all_novel.size()-i; j++)
		{
			title_1 = all_novel[j].get_title();
			title_2 = all_novel[j+1].get_title();

			if (title_1.compare(title_2) > 0)
			{
				temp = all_novel[j+1];
				all_novel[j+1] = all_novel[j];
				all_novel[j] = temp;
			}
		}
	}
}

void Library::search_novel(vector <Novel> from_cont)
{
	cout << endl;
	cout << "Press 1 to search by Title" << endl;
	cout << "Press 2 to seach by Publisher" << endl;

	cout << endl;

	string title,title_2, author, author_2, year, genre;

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
				author = from_cont[i].get_author();
				year = from_cont[i].get_year();
				genre = from_cont[i].get_genre();

				cout << endl;
				cout << setw(10) << left << "Novel # " << i+1 << endl;
				cout << setw(20) << "Title: " << setw(10) << title << endl;
				cout << setw(20) << "Author: " << setw(10) << author << endl;
				cout << setw(20) << "Year: " << setw(10) << year << endl;
				cout << setw(20) << "Genre: " << setw(10) << genre << endl;
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
				author = from_cont[i].get_author();
				year = from_cont[i].get_year();
				title = from_cont[i].get_title();
				genre = from_cont[i].get_genre();

				cout << endl;
				cout << setw(10) << left << "Novel # " << i+1 << endl;
				cout << setw(20) << "Title: " << setw(10) << title << endl;
				cout << setw(20) << "Author: " << setw(10) << author << endl;
				cout << setw(20) << "Year: " << setw(10) << year << endl;
				cout << setw(20) << "Genre: " << setw(10) << genre << endl;
			}
		}
	}

}

//end of book functionalities


//beginning of media functionalities

vector <Media> Library::get_media_vec()
{
	return all_media;
}

void Library::add_media(vector <Media> from_cont)
{
	all_media = from_cont;
	string title, director, year, genre;

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
	

		cout << "Who is the director? ";
		getline(cin, director);
		cout << endl;

		while (director.find(" ") != string::npos)
		{
			cout << "ERROR! Cannot have space in input" << endl;
			cout << endl;
			cout << "Name of director? ";
			getline(cin, director);
			cout << endl;
		}
	

		cout << "What year was it released? ";
		getline(cin, year);
		cout << endl;

		while (year.find(" ") != string::npos)
		{
			cout << "ERROR! Cannot have space in input" << endl;
			cout << endl;
			cout << "What year was it released? ";
			getline(cin, year);
			cout << endl;
		}


		cout << "What is the genre? ";
		getline(cin, genre);
		cout << endl;

		while (genre.find(" ") != string::npos)
		{
			cout << "ERROR! Cannot have space in input" << endl;
			cout << endl;
			cout << "What is the genre? ";
			getline(cin, genre);
			cout << endl;
		}

		Media media_1(title, director, genre, year);

		all_media.push_back(media_1);

		cout << "Press 1 to add another book" << endl;
		cout << "Press 0 to stop adding books" << endl;

		cout << endl;

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

		cout << endl;


	}

}

void Library::print_all_media(vector <Media> print_media)
{
	all_media = print_media;
	int media_size = all_media.size();

	for (int i = 0; i < media_size; i++)
	{
		Media temp;
		string title, director, year, genre;

		temp = all_media[i];
		title = temp.get_title();
		director = temp.get_director();
		year = temp.get_year();
		genre = temp.get_genre();

		cout << endl;
		cout << setw(10) << left << "Movie # " << i+1 << endl;
		cout << setw(20) << "Title: " << setw(10) << title << endl;
		cout << setw(20) << "Director: " << setw(10) << director << endl;
		cout << setw(20) << "Year: " << setw(10) << year << endl;
		cout << setw(20) << "Genre: " << setw(10) << genre << endl;
	}
}

void Library::delete_media(vector <Media> from_cont)
{
	all_media = from_cont;
	print_all_media(all_media);

	int delete_choice;

	cout << endl;
	cout << "Which movie would you like to delete? ";
	cin >> delete_choice;

	all_media.erase(all_media.begin() + delete_choice-1);
}

void Library::sort_media(vector <Media> from_cont)
{
	all_media = from_cont;
	string title_1, title_2;
	Media temp;

	for (int i = 1; i < all_media.size(); i++)
	{
		for (int j = 0; j < all_media.size()-i; j++)
		{
			title_1 = all_media[j].get_title();
			title_2 = all_media[j+1].get_title();

			if (title_1.compare(title_2) > 0)
			{
				temp = all_media[j+1];
				all_media[j+1] = all_media[j];
				all_media[j] = temp;
			}
		}
	}
}

void Library::search_media(vector <Media> from_cont)
{
	cout << endl;
	cout << "Press 1 to search by Title" << endl;
	cout << "Press 2 to seach by Director" << endl;

	cout << endl;

	string title,title_2, director, director_2, year, genre;

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
				director = from_cont[i].get_director();
				year = from_cont[i].get_year();
				genre = from_cont[i].get_genre();

				cout << endl;
				cout << setw(10) << left << "Media # " << i+1 << endl;
				cout << setw(20) << "Title: " << setw(10) << title << endl;
				cout << setw(20) << "Director: " << setw(10) << director << endl;
				cout << setw(20) << "Year: " << setw(10) << year << endl;
				cout << setw(20) << "Genre: " << setw(10) << genre << endl;
			}
		}
	}

	if (choice == 2)
	{
		cout << "Who is the director? ";
		cin >> director;
		cout << endl;

		for (int i = 0; i < from_cont.size(); i++)
		{
			director_2 = from_cont[i].get_director();

			if (director.compare(director_2) == 0)
			{
				director = from_cont[i].get_director();
				year = from_cont[i].get_year();
				title = from_cont[i].get_title();
				genre = from_cont[i].get_genre();

				cout << endl;
				cout << setw(10) << left << "Media # " << i+1 << endl;
				cout << setw(20) << "Title: " << setw(10) << title << endl;
				cout << setw(20) << "Director: " << setw(10) << director << endl;
				cout << setw(20) << "Year: " << setw(10) << year << endl;
				cout << setw(20) << "Genre: " << setw(10) << genre << endl;
			}
		}
	}

}