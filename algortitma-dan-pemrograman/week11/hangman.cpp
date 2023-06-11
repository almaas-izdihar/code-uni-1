#include <iostream>
#include <cstdlib>  // rand(), srand()
#include <ctime>    // time()
#include <cctype>   // toupper()

using namespace std;

string takeHangmanPics(int n);

int main ()
{

    // list kata-kata
    string words[] = 
    {
        "apel",
        "pisang",
        "anggur",
        "jambu",
        "mangga",
        "kiwi",
        "jeruk",
        "kelapa",
        "durian",
        "rambutan"
    };
    // ambil panjang array 'words'
    int N = end(words)-begin(words);
    

    // generate bilangan random
    srand((unsigned) time(0));
    int randomNumber = (rand() % N); // generate bilangan random 0 sampai N-1 (N = panjang array words)
    // ambil kata
    string word = words[randomNumber];
    // ambil jumlah karakter
    int wordLength = word.length();
    // ubah kata ke huruf kapital         
    for (int i = 0; i < wordLength; i++)    
    {
        word[i] = toupper(word[i]); 
    }
    // huruf yang berhasil ditebak
    string guessed = "";                    
    for (int i = 0; i < wordLength; i++) 
    {
        guessed += "-";
    }
    

    // PLAYER
    int health = 7;
    string userGuess;


    // GAMEPLAY
    while(true)
    {
        // print hangman 
        cout << takeHangmanPics(7-health) << endl;
        // print kata/huruf yang sudah berhasil ditebak
        cout << "Word:" << guessed << endl;
        
        // game over
        if (health == 0)
        {
            cout << "GAME OVER\n";
            break;
        }
        // win
        else if (guessed == word) 
        {
            cout << "YOU WIN\n";
            break;
        }

        // user input
        cout << "Guess:";
        cin >> userGuess;
        int userGuessLength = userGuess.length();   // ambil jumlah karakter
        for (int i = 0; i < userGuessLength; i++)   // ubah ke huruf kapital
        {
            userGuess[i] = toupper(userGuess[i]); 
        }

        // cek ketika user menebak 1 kata penuh
        if (userGuess == word) 
        {
            guessed = userGuess;
        }
        // cek ketika user menebak 1 huruf saja
        else if (userGuessLength == 1)
        {
            // cek apakah huruf tersebut ada di dalam kata
            int letterExist = 0;
            for (int i = 0; i < wordLength; i++)
            {
                if (userGuess[0] == word[i])
                {
                    guessed[i] = userGuess[0];
                    letterExist++;
                }
            }
            // user salah menebak huruf
            if (letterExist == 0) 
            {
                health--;
            }
        }
        // user salah menebak kata
        else
        {
            health--;
        }
    }

    return 0;
}

string takeHangmanPics(int n) 
{
        string hangmanPics[] = 
    {
        "      \n\
 ________      \n\
 |/            \n\
 |             \n\
 |             \n\
 |             \n\
 |             \n\
~|~~~~~~~~~~   \n\
        ",
        "      \n\
 ________      \n\
 |/     |      \n\
 |             \n\
 |             \n\
 |             \n\
 |             \n\
~|~~~~~~~~~~   \n\
        ",
        "      \n\
 ________      \n\
 |/     |      \n\
 |      O      \n\
 |             \n\
 |             \n\
 |             \n\
~|~~~~~~~~~~   \n\
        ",
        "      \n\
 ________      \n\
 |/     |      \n\
 |     \\O     \n\
 |             \n\
 |             \n\
 |             \n\
~|~~~~~~~~~~   \n\
        ",
        "      \n\
 ________      \n\
 |/     |      \n\
 |     \\O/    \n\
 |             \n\
 |             \n\
 |             \n\
~|~~~~~~~~~~   \n\
        ",
        "      \n\
 ________      \n\
 |/     |      \n\
 |     \\O/    \n\
 |      |      \n\
 |             \n\
 |             \n\
~|~~~~~~~~~~   \n\
        ",
        "      \n\
 ________      \n\
 |/     |      \n\
 |     \\O/    \n\
 |      |      \n\
 |     /       \n\
 |             \n\
~|~~~~~~~~~~   \n\
        ",
        "      \n\
 ________      \n\
 |/     |      \n\
 |     \\O/    \n\
 |      |      \n\
 |     / \\    \n\
 |             \n\
~|~~~~~~~~~~   \n\
        ",
    };

    return hangmanPics[n];
}