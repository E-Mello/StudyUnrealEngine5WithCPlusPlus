// Creator: Mello
#include <iostream>

using namespace std;

int main()
{
    const string AllLeters = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    const string SecreteLetters{"+_)(*!@#$p^:L>?<MVCADGYREW12hfbnm.;[]97543kl86qwerty%"};

    string UserInput{};

    cout << "Enter your message: " << endl;
    getline(cin, UserInput);

    string Exchange{};

    for (int i = 0; i < UserInput.size(); i++)
    {
        int CharPosition = AllLeters.find(UserInput.at(i));

        if (CharPosition != string::npos)
        {
            char SecreteChar = SecreteLetters.at(CharPosition);
            cout << "The secrete letter is: " << SecreteChar << endl;

            Exchange += SecreteChar;
        }
        else
        {
            cout << "Your secrete message is: " << UserInput << endl;

            Exchange += UserInput.at(i);
        }
    }

    cout << "Your secrete message is: " << Exchange << endl;

    return 0;
}