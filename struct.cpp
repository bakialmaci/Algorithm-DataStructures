#include <iostream>
#include <sstream>
using namespace std;

struct movies_t {
	string title;
	int year;
} mine, yours;

void printmovie(movies_t movie); // prototype of function

int main()
{
	string mystr;

	mine.title = "2001 A Space Odyssey";
	mine.year = 1968;

	cout << "Enter title: ";
	getline(cin, yours.title);
	cout << "Enter year: ";

	getline(cin, mystr); // firstly we use an variable and we push it into the our struct with stringstream(mystr) >> your.year;
	stringstream(mystr) >> yours.year;

	cout << "My favorite movie is:\n ";
	printmovie(mine);
	cout << "And yours is:\n ";
	printmovie(yours);
	return 0;
}

void printmovie(movies_t movie)
{
	cout << movie.title;
	cout << " (" << movie.year << ")\n";
}

/*
>Enter title: developing cpp
>Enter year: 2019
My favorite movie is:
 2001 A Space Odyssey (1968)
And yours is:
 developing cpp (2019)
 */