#include "File.h"

using namespace std;

File::File()
{

}

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

		//cout << endl;
		//cout << "Comic # " << i+1 << endl;
		//cout << "Title: " << title << endl;
		//cout << "Publisher: " << publisher << endl;
		//cout << "Year: " << year << endl;
		//cout << "Author: " << author << endl;
		//cout << "Illustrator: " << illustrator << endl;

		comic_file << i+1 << "\t" << left << setw(30) << title << " " << setw(20) << publisher << " " << setw(20) << year << " " << setw(20) << author << " " <<  setw(20) << illustrator << " " << endl; 

	}

	comic_file.close();
}