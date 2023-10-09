// Creator: Mello
#include <iostream>

using namespace std;

void ChoiceSelection(string AllLetters, string SecreteLetters);
void UserMessageChanger(string AllLetters, string SecreteLetters, char Choice);
string ExchangeMessage(string UserInput, string ConverFromLetters, string ConverToLetters);

int main()
{
    const string AllLeters = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    const string SecreteLetters{"+_)(*!@#$p^:L>?<MVCADGYREW12hfbnm.;[]97543kl86qwerty%"};

    ChoiceSelection(AllLeters, SecreteLetters);

    return 0;
}

void ChoiceSelection(string AllLeters, string SecreteLetters)
{
    char UserChoice{};

    do
    {
        cout << "What do you want to do? " << endl
             << endl;
        cout << "A. convert to secrete message." << endl;
        cout << "B. convert from secrete message. " << endl;
        cout << "Q. Exit" << endl;

        cin >> UserChoice;

        // If User input is A or user input is B
        if (UserChoice == 'A' || UserChoice == 'a' || UserChoice == 'B' || UserChoice == 'b')
        {
            UserMessageChanger(AllLeters, SecreteLetters, UserChoice);
        }
        // If User input is Q
        else if (UserChoice == 'Q' || UserChoice == 'q')
        {
            cout << "Thanks for using our program, comeback soon! Goodbye!" << endl
                 << endl;
        }
        else
        {
            cout << "Unknown selection, please try again." << endl;
        }
    } while (UserChoice != 'Q' && UserChoice != 'q');
}

void UserMessageChanger(string AllLetters, string SecreteLetters, char Choice)
{
    string UserInput{};

    if (Choice == 'A' || Choice == 'a')
    {
        cout << "Write your message to convert it to screte letters: " << endl;

        cin.ignore();
        getline(cin, UserInput);

        cout << "You Secrete Letters are: " << ExchangeMessage(UserInput, AllLetters, SecreteLetters) << endl;
    }
    else if (Choice == 'B' || Choice == 'b')
    {
        cout << "Write your message to convert it to screte letters: " << endl;

        cin.ignore();
        getline(cin, UserInput);

        cout << "You Message is: " << ExchangeMessage(UserInput, SecreteLetters, AllLetters) << endl
             << endl;
    }
}

string ExchangeMessage(string UserInput, string ConverFromLetters, string ConverToLetters)
{
    string Exchange{};

    for (int i = 0; i < UserInput.size(); i++)
    {
        int CharPosition = ConverFromLetters.find(UserInput.at(i));

        if (CharPosition != string::npos)
        {
            char NewLetter = ConverToLetters.at(CharPosition);
            Exchange += NewLetter;
        }
        else
        {
            Exchange += UserInput.at(i);
        }
    }

    return Exchange;
}