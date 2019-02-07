#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

	//variables
	string myData;
	ifstream inFile;
	int count = 0;
	int choice;
	string line;
	string word;
	int offset;
	string search;

	// start/main menu

	//cout << "please choose an option, 1 = Count number of tweets, 2 = Tweets with word Uber, 3 = Tweets that mention politics," << endl;
    //cout << "4 = Tweets that mention money, Tweets that mention paris, 5 = Tweets that mention Dreamworks" << endl;

	cout << "Please choose an option and type the number corresponding: " << endl;
	cout << "1 = Count the total number of tweets " << endl;
	cout << "2 = Preset/specific words and count amount of tweets with that word " << endl;
	cout << "3 = Search for any word of your choice and count the amount of tweets containing that word " << endl;
	cin >> choice;

	// Option 1 counting number of tweets

	if (choice == 1) {

		cout << "You have choose count number of tweets" << endl;
		cout << "Please wait while the console adds them up" << endl;


		inFile.open("sampleTweets.csv");

		if (inFile.good()) {
			cout << "File is ready" << endl;

			while (!inFile.eof()) {
				getline(inFile, myData);
				//
				cout << count << endl;

				count++;
			}
			inFile.close();

		}

		else {
			cout << "no file can be found" << endl;
		}
		cout << "Data set has " << count << " tweets" << endl;
	}


	// Search and count tweets option including the core and custom words

	if (choice == 2) {

		inFile.open("sampleTweets.csv");

		cout << "Please type one of the Core or Custom words below (be aware this is case sensitive) " << endl;
		cout << "A list of tweets will appear in the console and the total number will appear at the bottom of the console " << endl;
		cout << "Core Words: Uber, Dreamworks, Paris, politics, money" << endl;
		cout << "Custom Words: Brexit, football, candle, dog, cat" << endl;
		cin >> search;

		if (inFile.good()) {
			cout << "File is ready" << endl;

			while (!inFile.eof()) {

				getline (inFile, line);

				if ((offset=line.find(search,0)) !=string::npos) {
					cout << "the word " << search <<" has been found : " << line << endl;

					count++;
				}

		

				
			}

			
			inFile.close();


		}
		else {
			cout << "no file can be found" << endl;
		}

		cout << "Data set has found " << count << " tweets " << "containing the word "<< search << endl;
	}


	// Search and count any tweets of your choice

	if (choice == 3) {

		inFile.open("sampleTweets.csv");

		cout << "Please search for any word (be aware this is case sensitive) " << endl;
		cout << "A list of tweets  will appear in the console and the total number will appear at the bottom of the console " << endl;
		
		cin >> search;

		if (inFile.good()) {
			cout << "File is ready" << endl;

			while (!inFile.eof()) {

				getline(inFile, line);

				if ((offset = line.find(search, 0)) != string::npos) {
					cout << "the word " << search << " has been found : " << line << endl;

					count++;
				}




			}


			inFile.close();


		}
		else {
			cout << "no file can be found" << endl;
		}

		cout << "Data set has found " << count << " tweets " << "containing the word " << search << endl;
	}


	/*if (choice == 3) {


		cout << "You have choose to show the 10th tweet " << endl;
		//cin >> word;

		inFile.open("sampleTweets.csv");

		if (inFile.good()) {
			cout << "File is ready" << endl;

			while (!inFile.eof()) {


				if (count==10) {

					getline(inFile, myData);
					count++;

					cout << myData << endl;

				}

				//getline(cin, word);
				//cout << word << endl;
			}

		//(getline(inFile, myData))
			inFile.close();


		}
		else {
			cout << "no file can be found" << endl;
		}
		cout << "the 10th tweet is: "<< myData << endl;
		
	}*/

	system("pause");
	return 0;
}
	



