#ifndef MEDIA_H
#define MEDIA_H

#include <iostream>
#include <string>

using namespace std;

class Media
{
	public:
		Media();

		Media (string title_1, string director_1, string genre_1, string year_1)
		{
			title = title_1;
			director = director_1;
			genre = genre_1;
			year = year_1;
		}

		string get_title();
		string get_director();
		string get_genre();
		string get_year();

	private:
		string title;

		string director;

		string genre;

		string year;

};


#endif