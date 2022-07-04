#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>

using namespace std;

void menu();
int cookies(char);
int cookie = 0;
void game();
void shop();

int main()
{
    menu();
    /*  while (x < 100) {
          char inp;
          cout << "Your Current Cookies are " << cookie << flush << endl;
          cout << "Enter a To Increase Cookies and d to end the game:" << flush;
          cin >> inp;
          if (inp == 'd' || inp == 'D')
          {

              break;
              return 0;
          }
          cout << "The Total Cookies Are : " << cookies(inp) << flush << endl;
          _getch();
          system("CLS");
      } */
    return 0;
}
int cookies(char x)
{
    if (x == 'a' || x == 'A')
    {
        cookie++;
        return cookie;
    }
    else
        return cookie;
}
void menu()
{
    int c = 0;
    int a = 0;
    cout << "Welcome To Cookie Clicker!" << flush << endl;

    while (a < 100)
    {
        cout << "1. Play\n"
            << "2. Sellout\n"
            << "3. Shop\n"
            << "4. Exit" << flush << endl;
        cout << "Enter Your Option: " << flush;
        cin >> c;
        if (c == 1) {
            system("CLS");
            game();
            a = 101;
        }
        else if (c == 2)
        {
            cout << "https://osu.ppy.sh/users/8690114/osu #1 osu pakistan player AND dev of this game (fxk the other dev)" << endl;
            _getch();
            a = 0;
            system("CLS");

        }
        else if (c == 3)
        {
            system("CLS");
            shop();
        }
        else if (c == 4)
        {
            cout << "Thanks For Playing!";
            a = 101;
        }
        else
            cout << "Invalid Input" << endl;
    }
}
void game()
{
    int x = 0;
    while (x < 100) {
        char inp;
        cout << "Your Current Cookies are " << cookie << flush << endl;
        cout << "Enter a To Increase Cookies and d to enter the menu:" << flush;
        cin >> inp;
        if (inp == 'd' || inp == 'D')
        {
            system("CLS");
            menu();
        }
        cout << "The Total Cookies Are : " << cookies(inp) << flush << endl;
        _getch();
        system("CLS");
    }
}
void shop()
{
    int c = 0;
    int a = 0;

    while (a == 0)
    {
        cout << "Welcome to the Shop! " << flush << endl;
        cout << "Your current cookies are " << cookie << flush << endl;
        cout << "1. 20 Cookies: Stronger Clicks (2 cookies per key press)\n"
            << "2. Coming soon\n"
            << "3. Exit" << flush << endl;
        cout << "Choose An Option: ";
        cin >> c;
        if (c == 1 && cookie >= 20)
        {
            cout << "You purchased Stronger Clicks! Pogchamp" << flush << endl;
            _getch();
            a = 0;
            cookie = cookie - 20;
            system("CLS");
        }
        else if (c == 1 && cookie < 20)
        {
            cout << "Not enough cookies noob! You need 20!" << flush << endl;
            a = 0;
            _getch();
            system("CLS");
        }
        else if (c == 2)
        {
            cout << "Not out yet!" << flush << endl;
            _getch();
            a = 0;
            system("CLS");

        }
        else if (c == 3)
        {
            cout << "See ya!" << flush << endl;
            _getch();
            a = 100;
            system("CLS");
        }
        else
        {
            cout << "Invalid input!" << flush << endl;
            _getch();
            system("CLS");
        }

    }
    menu();
}

