//HOa22028306


#include <iostream>
#include <string>
//#include <cstdlib>
 
using namespace std;

const string figure[]
{
       "                              -------------    \n"
         "                              |                \n"
         "                              |                \n"
         "                              |                \n"
         "                              |                \n"
         "                              |     \n"
         "                              -----   \n",

         "                              -------------    \n"
         "                              |           |    \n"
         "                              |                \n"
         "                              |                \n"
         "                              |                \n"
         "                              |     \n"
         "                            -----   \n",

         "                              -------------    \n"
         "                              |           |    \n"
         "                              |           O    \n"
         "                              |                \n"
         "                              |                \n"
         "                              |     \n"
         "                            -----   \n",
        "                              -------------    \n"
         "                              |           |    \n"
         "                              |           O    \n"
         "                              |           |    \n"
         "                              |                \n"
         "                              |     \n"
         "                            -----   \n",

         "                              -------------    \n"
         "                              |           |    \n"
         "                              |           O    \n"
         "                              |          /|    \n"
         "                              |                \n"
         "                              |     \n"
         "                            -----   \n",

         "                              -------------    \n"
         "                              |           |    \n"
         "                              |           O    \n"
         "                              |          /|\\  \n"
         "                              |                \n"
         "                              |     \n"
         "                            -----   \n",
                  "                              -------------    \n"
         "                              |           |    \n"
         "                              |           O    \n"
         "                              |          /|\\  \n"
         "                              |          /     \n"
         "                              |     \n"
         "                            -----   \n",

         "                              -------------    \n"
         "                              |           |    \n"
         "                              |           O    \n"
         "                              |          /|\\  \n"
         "                              |          / \\  \n"
         "                              |     \n"
         "                            -----   \n"
};

const string WordList[]{ "angle", "ant", "apple", "arch", "arm", "army",
        "baby", "bag", "ball", "band", "basin", "basket", "bath", "bed", "bee", "bell", "berry",
        "bird", "blade", "board", "boat", "bone", "book", "boot", "bottle", "box", "boy",
        "brain", "brake", "branch", "brick", "bridge", "brush", "bucket", "bulb", "button",
        "cake", "camera", "card",  "cart", "carriage", "cat", "chain", "cheese", "chest",
        "chin", "church", "circle", "clock", "cloud", "coat", "collar", "comb", "cord",
        "cow", "cup", "curtain", "cushion",
        "dog", "door", "drain", "drawer", "dress", "drop", "ear", "egg", "engine", "eye",
        "face", "farm", "feather", "finger", "fish", "flag", "floor", "fly",
        "foot", "fork", "fowl", "frame", "garden", "girl", "glove", "goat", "gun",
        "hair", "hammer", "hand", "hat", "head", "heart", "hook", "horn", "horse",
        "hospital", "house", "island", "jewel",  "kettle", "key", "knee", "knife", "knot",
        "leaf", "leg", "library", "line", "lip", "lock",
        "map", "match", "monkey", "moon", "mouth", "muscle",
        "nail", "neck", "needle", "nerve", "net", "nose", "nut",
        "office", "orange", "oven", "parcel", "pen", "pencil", "picture", "pig", "pin",
        "pipe", "plane", "plate", "plow", "pocket", "pot", "potato", "prison", "pump",
        "rail", "rat", "receipt", "ring", "rod", "roof", "root",
        "sail", "school", "scissors", "screw", "seed", "sheep", "shelf", "ship", "shirt",
        "shoe", "skin", "skirt", "snake", "sock", "spade", "sponge", "spoon", "spring",
        "square", "stamp", "star", "station", "stem", "stick", "stocking", "stomach",
        "store", "street", "sun", "table", "tail", "thread", "throat", "thumb", "ticket",
        "toe", "tongue", "tooth", "town", "train", "tray", "tree", "trousers", "umbrella",
        "wall", "watch", "wheel", "whip", "whistle", "window", "wire", "wing", "worm" };

string SecretWord()
{
    srand(time(NULL));
    return WordList[rand() % 199];
    /*return "book";*/
}

char GuessLetter()
{
    cout << "Enter your guess letter: ";
    char ch;
    cin >> ch;
    return ch;
}

bool check(char ch, string word)
{
    return word.find_first_of(ch) != string::npos;
}

void UpdateWord(char ch, string secretword, string& guessword)
{
    int n = secretword.length();
    for (int i = 0; i < n; i++)
    {
        if (ch == secretword[i])
            guessword[i] = secretword[i];
    }
}

void Result(bool lost,string word,int &score)
{
    if (lost) {
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n...............................You lost................................ \n";
        cout << figure[7] << endl;
    }

    else { cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n.................................You won.................................." << endl; score++; }
    cout << "                                 The Secret word is: " << word << endl;
    cout << "                                 Your score is: " << score << endl;
    cout << "                                 Continue press y\n                                 Quit press n\n";
}

int StartGame()
{
    cout << "\n \n \n \n \n \n \n \n \n \n \n \n \n \n _________________________________________GAME HANGMAN MADE BY HOA____________________________________\n \n \n \n  "
        "                                                -------------                                                                                            \n"
        "                                               |           |    \n"
        "                                               |           O    \n"
        "                                               |          /|\\  \n"
        "                                               |          / \\  \n"
        "                                               |     \n"
        "                                             -----   \n";
    cout << "   _______________________________________________________________________________________________________\n\n\n";
    cout << "         Nhap 1 de bat dau tro choi , Nhap 2 de thoat tro choi :   ";
    int inp;
    cin >> inp;
    if (inp == 1) cout << "\n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n";
    else if (inp == 2) return inp = 2;
    else {
        "\n \n \n \n \n \n \n \n \n \n \n \n \n \n";
        StartGame();
    }
}

bool ContinueGame() {
    char ch;
    cin >> ch;
    if (ch == 'y') return true;
    else if (ch == 'n') return false;
    else { 
        ContinueGame(); 
    }
}

//string WrongGuess(char& guessletter)
//{
//    return " " + guessletter;
//}

int main(int argc, char* argv[])
{
    int inp;
    inp = StartGame();
    if (inp == 2) return 0;

    int CountScore = 0;

    while (true)
    {
        string SecretWord_;
        SecretWord_ = SecretWord();
        string GuessWord_ = string(SecretWord_.length(), '-');
        int BadCount = 0;

        string Wrongguess;

        do {

            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

            //Treo co
            cout << figure[BadCount] << endl;

            cout << "The wrong letter you guess: " << Wrongguess << endl;

            cout << "The guess word is: "<< GuessWord_ << endl;


            char GuessLetter_;
            GuessLetter_ = GuessLetter();

            if (check(GuessLetter_, SecretWord_)) {
                UpdateWord(GuessLetter_, SecretWord_, GuessWord_);
            }
            else {
                Wrongguess = Wrongguess + " " + GuessLetter_;
                BadCount++;
            }
        } while (BadCount < 7 && SecretWord_ != GuessWord_);

        
        Result(SecretWord_ != GuessWord_,SecretWord_,CountScore);



        if (ContinueGame()) continue;
        else break;
    }

}