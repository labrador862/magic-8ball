#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void EightBall(){
    string question;

    cout << "Ask the Magic 8 Ball a question..." << endl << endl;

    for(int i = 0; true; i++){
        getline(cin, question);

        if (question == "done"){
            break;
        }
        string answer[5] = {"It is certain", "Most definitely", "I'd rather not say", "Outlook bad", "Try again"};

        srand(time (0));
        int randAnswer = (rand() % 5);
        cout << answer[randAnswer] << endl << endl;
        cout << "Ask another question or type 'done' to exit." << endl << endl;
    }
}
int main(){
    EightBall();
    return 0;
}
