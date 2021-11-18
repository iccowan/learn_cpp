#include <iostream>
#include <list>
#include <fstream>

using namespace std;

/**
 * Gets the user input from the console
 *
 * @param userInput the pointer to output the user input to
 */
void getUserInput(string &userInput) {
    cout << "Press `l` to list movies or type the name of a new movie: ";
    getline(cin, userInput);
}

int main() {
    // List to put the movies into
    list<string> movies;

    // Let's read the movies and add them to the list for
    // quick updating and access
    string line;
    ifstream movies_file ("movies.txt");
    if (movies_file.is_open()) {
        while (getline(movies_file, line)) {
            movies.push_back(line);
        }
        movies_file.close();
    } else {
        cout << "Could not open file!" << endl;
    }

    // See if the user wants to add movies or list the movies
    // and quit when the user inputs "q"
    string userInput;
    getUserInput(userInput);

    while (userInput != "q") {
        if (userInput != "l")
            movies.push_back(userInput);

        cout << endl << "Current Movies:" << endl;
        for (list<string>::iterator movie = movies.begin(); movie != movies.end(); movie++) {
            cout << *movie << endl;
        }

        getUserInput(userInput);
    }

    // Now, let's put the movies back into the file
    ofstream moviesFileOut;
    moviesFileOut.open("movies.txt", ofstream::out | ofstream::trunc);

    if (moviesFileOut.is_open())
        for (list<string>::iterator movie = movies.begin(); movie != movies.end(); movie++)
            moviesFileOut << *movie << endl;
    else cout << "Could not open file!" << endl;

    return 0;
}

