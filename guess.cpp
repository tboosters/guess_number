#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
	srand(time(NULL));
	int target = rand()%100 + 1;
	int guess;
	int number = 0;
	bool correct = false;
	bool guessed[100] = {};
	int order[100] = {};

	cout << target <<endl;

	while(!correct){
        cout << "Please make a guess: ";
        cin >> guess;
        if(cin.fail()){
            cout << "Please enter a valid number!" << endl;
            cin.clear();
            cin.ignore(1024, '\n');
            continue;
        };
        if(!guessed[guess]){
        	order[number] = guess;
        	guessed[guess] = true;
        	number++;
        	if(guess > target){
        		cout << "Too large!" << endl;
         	}else if(guess < target){
         		cout << "Too small!" << endl;
         	}else{
         		correct = true;
        	}
        }else{
        	cout << "Repeated guess!" << endl;
        };
    };

	cout << "Congrats you have made the guess! The number is " << target << endl 
		<< "You have made " << number << " valid guesses." << endl;
    for(int i = 0; i < number; i++){
        cout << order[i] << endl;
    };
    system("pause");
    return 0;
};
