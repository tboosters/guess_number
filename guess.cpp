#include <iostream>
#include <stdlib.h>

using namespace std;

bool check(int g, int l, int a[]);

int main(){
	srand(time(NULL));
	int target = rand()%100 + 1;
	int guess;
	int length = 0;
	bool correct = false;
	int guessed[length];
	while(!correct){
        cout << "Please make a guess: ";
        cin >> guess;
        if(cin.fail()){
            cout << "Please enter a valid number!" << endl;
            cin.clear();
            cin.ignore(1024, '\n');
            continue;
        };
        if(guess > target){
            if(!check(guess, length, guessed)){
                length++;
                guessed[length-1] = guess;
                cout << "Too large!" << endl;
            }else{
                cout << "Repeated guess!" << endl;
            };
        }else if(guess < target){
            if(!check(guess, length, guessed)){
                length++;
                guessed[length-1] = guess;
                cout << "Too small!" << endl;
            }else{
                cout << "Repeated guess!" << endl;
            };
        }else{
            length++;
            guessed[length-1] = guess;
            correct = true;
        };
    };
	cout << "Congrats you have made the guess! The number is " << target << endl << "You have made " << length << " valid guesses." << endl;
    for(int i = 0; i < length; i++){
        cout << guessed[i] << endl;
    };
    system("pause");
    return 0;
};

bool check(int g,int l,int a[]){
    bool found = false;
    int i = 0;
    while(!found && i <= l-1){
        if(g == a[i]){
            found = true;
        }else{
            i++;
        };
    };
    return found;
};
