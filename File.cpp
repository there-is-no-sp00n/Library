#include "File.h"

using namespace std;

File::File()
{

}

//comic persistence

vector <Comic> File::comic_to_vector()
{
	vector <Comic> return_vec;
	//Comic temp;
	string num, title, publisher, year, author, illustrator;
	int counter = 0;
	comic_input.open("File_Comic.txt");

	while(comic_input >> num >> title >> publisher >> year >> author >> illustrator)
	{
		Comic temp(title, publisher, year, author, illustrator, "comic");
		//cout << comic_file << counter << "\t" << title << "\t\t" << publisher << "\t\t" << year << "\t" << author << "\t\t" << illustrator << endl;
		
		if (counter > 0)
		{
			return_vec.push_back(temp);
		}

		counter++;
	}
	
	return return_vec;

}

void File::comic_to_file(vector <Comic> c_file)
{
	int com_size = c_file.size();

	comic_file.open("File_Comic.txt");
	comic_file << "#" << "\t" << left << setw(30) << "Title" << " " <<  setw(20) << "Publisher" << " " << setw(20) << "Year" << " " << setw(20) << "Author" << " " << setw(20) << "Illustrator" << endl;
	comic_file << endl;

	for (int i = 0; i < com_size; i++)
	{
		Comic temp;
		string title, publisher, year, author, illustrator;

		temp = c_file[i];
		title = temp.get_title();
		publisher = temp.get_pub();
		year = temp.get_year();
		author = temp.get_author();
		illustrator = temp.get_illustrator();



		comic_file << i+1 << "\t" << left << setw(30) << title << " " << setw(20) << publisher << " " << setw(20) << year << " " << setw(20) << author << " " <<  setw(20) << illustrator << " " << endl; 

	}

	comic_file.close();
}

//game persistence

void File::game_to_file(vector <Game> g_file)
{
	int game_size = g_file.size();

	game_file.open("File_Game.txt");
	game_file << "#" << "\t" << left << setw(30) << "Title" << " " <<  setw(20) << "Publisher" << " " << setw(20) << "Year" << " " << setw(20) << "Platform" << " " << setw(20) << "Genre" << endl;
	game_file << endl;

	for (int i = 0; i < game_size; i++)
	{
		Game temp;
		string title, publisher, year, platform, genre;

		temp = g_file[i];
		title = temp.get_title();
		publisher = temp.get_publisher();
		year = temp.get_year();
		platform = temp.get_platform();
		genre = temp.get_genre();


		game_file << i+1 << "\t" << left << setw(30) << title << " " << setw(20) << publisher << " " << setw(20) << year << " " << setw(20) << platform << " " <<  setw(20) << genre << " " << endl; 

	}

	game_file.close();
}


vector <Game> File::game_to_vector()
{
	vector <Game> return_vec;
	string num, title, publisher, year, platform, genre;
	int counter = 0;
	game_input.open("File_Game.txt");

	while(game_input >> num >> title >> publisher >> year >> platform >> genre)
	{
		Game temp(title, publisher, year, platform, genre);
		
		if (counter > 0)
		{
			return_vec.push_back(temp);
		}

		counter++;
	}
	
	return return_vec;

}

//novel persistence

void File::novel_to_file(vector <Novel> n_file)
{
	int novel_size = n_file.size();

	novel_file.open("File_Book.txt");
	novel_file << "#" << "\t" << left << setw(30) << "Title" << " " <<  setw(20) << "Author" << " " << setw(20) << "Year" << " " << setw(20) << "Genre" << endl;
	novel_file << endl;

	for (int i = 0; i < novel_size; i++)
	{
		Novel temp;
		string title, author, year, genre;

		temp = n_file[i];
		title = temp.get_title();
		author = temp.get_author();
		year = temp.get_year();
		genre = temp.get_genre();


		novel_file << i+1 << "\t" << left << setw(30) << title << " " << setw(20) << author << " " << setw(20) << year << " " <<  setw(20) << genre << " " << endl; 

	}

	novel_file.close();
}


vector <Novel> File::novel_to_vector()
{
	vector <Novel> return_vec;
	string num, title, author, year, genre;
	int counter = 0;
	novel_input.open("File_Book.txt");

	while(novel_input >> num >> title >> author >> year >> genre)
	{
		Novel temp(title, author, year, genre);
		
		if (counter > 0)
		{
			return_vec.push_back(temp);
		}

		counter++;
	}
	
	return return_vec;

}


//media persistence

void File::media_to_file(vector <Media> m_file)
{
	int media_size = m_file.size();

	media_file.open("File_Media.txt");
	media_file << "#" << "\t" << left << setw(30) << "Title" << " " <<  setw(40) << "Director" << " " << setw(20) << "Year" << " " << setw(20) << "Genre" << endl;
	media_file << endl;

	for (int i = 0; i < media_size; i++)
	{
		Media temp;
		string title, director, year, genre;

		temp = m_file[i];
		title = temp.get_title();
		director = temp.get_director();
		year = temp.get_year();
		genre = temp.get_genre();


		media_file << i+1 << "\t" << left << setw(30) << title << " " << setw(40) << director << " " << setw(20) << year << " " <<  setw(20) << genre << " " << endl; 

	}

	media_file.close();
}

vector <Media> File::media_to_vector()
{
	vector <Media> return_vec;
	string num, title, director, year, genre;
	int counter = 0;
	media_input.open("File_Media.txt");

	while(media_input >> num >> title >> director >> year >> genre)
	{
		Media temp(title, director, year, genre);
		
		if (counter > 0)
		{
			return_vec.push_back(temp);
		}

		counter++;
	}
	
	return return_vec;

}