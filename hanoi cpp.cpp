#include <algorithm>
#include <iostream>
#include <string>
#include <stack>
using namespace std;
 void startText();
 void howToPlay();
  int newGame();
 void displayColumns( stack<int> columnOne,stack<int> columnTwo, stack<int> columnThree);
 string toLower( string str);
   bool playAgain();
void moveDisk( stack<int> & stkA,  stack<int> & stkB);

  bool validateSelectedColumn( string column);

bool validMove( stack<int> columnOne,  stack<int> columnTwo);

  int main() {
	
bool continuePlaying = true;
	while (continuePlaying) {

		int disks = newGame();
       stack<int> columnOne;
		
		 stack<int> columnTwo;
		
		 stack<int> columnThree;

		
		for (int i = disks; i >= 1; --i) {
			
			columnOne.push(i);
		}

		
		bool isGameOver = false;

		
		while (!isGameOver) {

			
			 cout <<  string(25, '\n');

			
			displayColumns(columnOne, columnTwo, columnThree);

			bool isValidMove = false;

			while (!isValidMove) {
				
				 string columnA = "";

				
				 cout << "Which column do you want to move a disk from? : ";
				
				 cin >> columnA;

				
				while (!validateSelectedColumn(columnA)) {

					
					columnA.clear();
					
					 cout << "Input was invalid. Please try again : ";
					
					 cin >> columnA;
				}

			
				 string columnB = "";

				
				 cout << "Which column do you want to move a disk to? : ";
				
				 cin >> columnB;

				
				while (!validateSelectedColumn(columnB)) {

					
					columnB.clear();
					
					 cout << "Input was invalid. Please try again : ";
					
					 cin >> columnB;
				}

				
				

				
				if (columnA != columnB) {
					
					if (toLower(columnA) == "a") {
						
						if (toLower(columnB) == "b") {
							
							if (validMove(columnOne, columnTwo)) {
								
								moveDisk(columnOne, columnTwo);
								
								isValidMove = true;
							} else {}
						}
						
						else {
							
							if (validMove(columnOne, columnThree)) {
								
								moveDisk(columnOne, columnThree);
								
								isValidMove = true;
							} else { }
						}
					}
					
					else if (toLower(columnA) == "b") {
						
						if (toLower(columnB) == "a") {
							
							if (validMove(columnTwo, columnOne)) {
								
								moveDisk(columnTwo, columnOne);
								
								isValidMove = true;
							} else { }
						}
						
						else {
							
							if (validMove(columnTwo, columnThree)) {
								
								moveDisk(columnTwo, columnThree);
								
								isValidMove = true;
							} else {}
						}
					}
					
					else {
						
						if (toLower(columnB) == "a") {
							
							if (validMove(columnThree, columnOne)) {
								
								moveDisk(columnThree, columnOne);
								
								isValidMove = true;
							}
							else { }
						}
						
						else {
							
							if (validMove(columnThree, columnTwo)) {
								
								moveDisk(columnThree, columnTwo);
								
								isValidMove = true;
							}
							else {}
						}
					}
				}
				
				else {
					
					 cout << "You cannot pick the same columns!" <<  endl <<  endl;
				}

				
				if (!isValidMove) {
					
					 cout << "That move is not valid!" <<  endl;
				}else{}
			}

			
			if (columnTwo.size() == disks || columnThree.size() == disks) {
				isGameOver = true;
				 cout <<  endl << "Congratulations! You won!" <<  endl <<  endl;
			}
			else { }
		}
		continuePlaying = playAgain();
	}
	return 0;
}

void howToPlay() {
	 cout << "There are three rules to play." <<  endl;
	 cout << "1.) Only one disk can be moved in a single turn." <<  endl;
	 cout << "2.) Each turn, a single disk can be placed onto another disk" <<  endl;
	 cout << "    or into an empty column." <<  endl;
	 cout << "3.) A larger disk cannot be placed onto a smaller disk." <<  endl <<  endl;
	 cout << "To play, enter the letter of which column you would" <<  endl;
	 cout << "like to move the disk from and hit enter, a second line" <<  endl;
	 cout << "will appear for you to enter the letter of the column" <<  endl;
	 cout << "that you would like to enter the disk into." <<  endl <<  endl;
	 system("pause");
	 cout <<  endl <<  endl <<  endl;
}
int newGame() {
    
	int disks = -1;
	while (disks < 3 || disks > 9) {
		 cout << "How many rings would you like?" <<  endl;
		 cout << "Enter a number between 3 and 9 : ";
		 cin >> disks;
		if ( cin.fail()) {
			 cin.clear();
			 cin.ignore(1000, '\n');
			 cout << "Woops! Thats not a number. Lets try that again." <<  endl <<  endl;
		}
		else if (disks < 3 || disks > 9) {
			 cout << "Woops! It looks like that number is invalid. lets try that again!" <<  endl <<  endl;
		}
		else {
		}
	}
	return disks;
}

void displayColumns( stack<int> columnOne,
					 stack<int> columnTwo,
					 stack<int> columnThree) {
	int currentRow = 0;

	if ((columnOne.size() >= columnTwo.size()) && (columnOne.size() >= columnThree.size())) {
		currentRow = columnOne.size();
	}
	else if ((columnTwo.size() >= columnOne.size()) && (columnTwo.size() >= columnThree.size())) {
		currentRow = columnTwo.size();
	}
	else {
		currentRow = columnThree.size();
	}
	 cout << "-------------------" <<  endl;
	while (currentRow != 0) {
		 cout << "|  ";
		if (columnOne.size() == currentRow) {
			 cout << columnOne.top();
			columnOne.pop();
		}
		else {
			 cout << " ";
		}
		 cout << "  |  ";
		if (columnTwo.size() == currentRow) {
			 cout << columnTwo.top();
			columnTwo.pop();
		}
		else {
			 cout << " ";
		}
		 cout << "  |  ";
		if (columnThree.size() == currentRow) {
			 cout << columnThree.top();
			columnThree.pop();
		}
		else {
			 cout << " ";
		}
		 cout << "  |";
		 cout <<  endl;
		--currentRow;
	}
	 cout << "-------------------" <<  endl;
	 cout << "   A     B     C   " <<  endl;
}
 string toLower( string str) {
	 transform(str.begin(), str.end(), str.begin(), ::tolower);
	return str;
}
bool playAgain() {
	while (true) {
		 string input = "";
		 cout << "Would you like to play again? y/n : ";
		 cin >> input;
		if (toLower(input) != "y" && toLower(input) != "n") {
			 cout << "'" << input << "'" << " is not a valid input." <<  endl;
		}
		else if (toLower(input) == "n") {
			return false;
		}
		else {
			return true;
		}
	}
}
void moveDisk( stack<int> & stkA,  stack<int> & stkB) {
	//stkB.emplace(stkA.top());
	stkA.pop();
}
bool validateSelectedColumn( string column) {
	column = toLower(column);
	if (column != "a" && column != "b" && column != "c") {
		return false;
	}
	else {
		return true;
	}
}
bool validMove( stack<int> columnOne,  stack<int> columnTwo) {
	if (!columnOne.empty()) {
		if (!columnTwo.empty()) {
			if (columnOne.top() <= columnTwo.top()) {
				return true;
			}
			else {
				return false;
			}
		}
		else {
			return true;
		}
        }
	else {
		return false;
	}
}
   
    

