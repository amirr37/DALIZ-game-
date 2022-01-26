#include <iostream>
#include <windows.h>
using namespace std;
void start();
int MainMenu();
int aboutJuniors();
int _2Players();
int _3Players();
int _4Players();
int createAccount();
int deleteAccount();
int BoardGame();
int ChangeTheme();
int raahnamaa();
int main()
{

    start();

    int gowhere = 0;
    // meghdaresh tayin mikne koja berim.
    //  about Juniors -------------------1
    //  2 players -----------------------2
    //  3 players -----------------------3
    //  4 players -----------------------4
    //  BoardGame -----------------------B
    //  create account-------------------C
    //  Delete account ------------------D
    //  CHANGE THEME---------------------T

    while (gowhere == 0) // baes mishe bazi tamum nashe . va bad ejraye tavabe bargarde meno asli
    {
        system("color 07");
        gowhere = MainMenu();

        // cin >> gowhere;
        if (gowhere == 1)
        {
            gowhere = aboutJuniors();
            continue;
        }
        if (gowhere == 2)
        {
            system("cls");
            gowhere = _2Players();
        }
        if (gowhere == 3)
        {
            system("cls");
            gowhere = _3Players();
            continue;
        }
        if (gowhere == 4)
        {
            system("cls");
            gowhere = _4Players();
            continue;
        }
        if (gowhere == 5)
        {
            system("cls");
            gowhere = BoardGame();
            continue;
        }
        if (gowhere == 6)
        {
            system("cls");
            gowhere = createAccount();
            continue;
        }
        if (gowhere == 7)
        {
            system("cls");
            gowhere = deleteAccount();
            continue;
        }
        if (gowhere == 8)
        {
            system("cls");

            cout << "ARE YOU SURE YOU WANNA QUIT GAME?" << endl;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
            cout << " IF YES PRESS 'ENTER '" << endl;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

            cout << ".ELSE PRESS OTHER KEY" << endl;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            system("pause>nul");

            if (GetAsyncKeyState(VK_RETURN))
            {
                break;
            }
            else
            {
                gowhere = 0;
            }
        }
        if (gowhere == 10)
        {
            system("cls");
            gowhere = raahnamaa();
            continue;
        }
    }

    // ===========================================================

    return 0;
}
void start()

{

    system("cls");
    // system("color 40");
    // 0 = black . 1=blue p / 2 green/ 3 blue kam
    // 4 red //  5 bnfsh //  6 zrd // 7 white
    //  8 gray // 9 abi tokhmi //

    // 47 -- 87 -30 -20 - 40

    // Sleep(1500);
    // ===============timer=====================================

    cout << "--------    WELCOME TO [DALIZ] GAME    ---------" << endl;
    Sleep(1500);
    cout << "--------     DEVELOPED BY [JUNIORS]    ---------" << endl;
    Sleep(1500);
    cout << "--------   [AMIN MORADI            ]   ---------" << endl;
    Sleep(1500);
    cout << "--------   [      EHSAN AKBARI     ]   ---------" << endl;
    Sleep(1500);
    cout << "--------   [         AMIR JAHANGIRI]   ---------" << endl;
    Sleep(1500);
    cout << endl;

    for (size_t i = 5; i >= 0; i--)

    {

        system("cls");

        cout << "--------    WELCOME TO [DALIZ] GAME    ---------" << endl;
        cout << "--------     DEVELOPED BY [JUNIORS]    ---------" << endl;
        cout << "--------   [AMIN MORADI            ]   ---------" << endl;
        cout << "--------   [      EHSAN AKBARI     ]   ---------" << endl;
        cout << "--------   [         AMIR JAHANGIRI]   ---------" << endl;
        cout << endl;
        if (i != 1)
        {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
            cout << "GAME WILL START ON " << i << " SECONDS" << endl;
            Sleep(1200);
        }
        if (i == 1)
        {
            cout << "GAME WILL START ON " << i << "SECOND " << endl;
            Sleep(1200);
        }

        if (i == 1)
        {
            system("cls");
            system("color 07");
            break;
        }
    }
}
int MainMenu()
{
    int option = 1;
    char x;
    string meno[9];
    meno[0] = " RAH NAMAAYE BAZI ----------------- ";
    meno[1] = " ABOUT JUNIORS -------------------- ";
    meno[2] = " 2 PLAYERS ------------------------ ";
    meno[3] = " 3 PLAYERS ------------------------ ";
    meno[4] = " 4 PLAYERS ------------------------ ";
    meno[5] = " BOARDGAME ------------------------ ";
    meno[6] = " CREATE ACCOUNT-------------------- ";
    meno[7] = " DELETE ACCOUNT ------------------- ";
    meno[8] = " EXIT GAME ------------------------ ";

    while (true)
    {
        system("cls");
        for (int i = 0; i < 9; i++)
        {

            if (i == option)
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
                cout << "\t " << meno[i] << endl;
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            }
            else
            {
                cout << meno[i] << endl;
            }
        }

        cout << "press up and down to change " << endl;
        cout << "for choosing press enter" << endl;

        system("pause>nul");

        if (GetAsyncKeyState(VK_UP))
        {
            option -= 1;
            if (option < 0)
            {
                option = 8;
            }
        }
        else if (GetAsyncKeyState(VK_DOWN))
        {

            option += 1;
            if (option == 9)
            {
                option = 0;
            }
        }

        else if (GetAsyncKeyState(VK_RETURN))
        {
            break;
        }
    }
    if (option == 0)
    {
        return 10;
    }

    return option;
}
int aboutJuniors()
{
    system("cls");
    bool goMeno = false;
    while (goMeno == false)
    {
        system("cls");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
        cout << "----------------------------------------" << endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        cout << "Juniors is a group of three computer engineering students at the University of Isfahan." << endl
             << "The group was formed in December 2021 to participate in the UICPC." << endl
             << "DALIZ game is the first game developed by this group." << endl
             << "The members of the group are Amir Jahangiri, Ehsan Akbari and Amin Moradi" << endl
             << endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
        cout << "----------------------------------------" << endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        cout << "press 'Esc' to go to main menu." << endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
        cout << "----------------------------------------" << endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        system("pause>nul");

        if (GetAsyncKeyState(VK_ESCAPE))
        {
            goMeno = true;
        }
    }
    return 0;
}
int createAccount()
{
    system("cls");
    cout << "coming soon" << endl;
    cout << "going back to main menu" << endl;
    Sleep(1000);
    return 0;
}
int deleteAccount()
{
    system("cls");
    cout << "coming soon" << endl;
    cout << "going back to main menu" << endl;
    Sleep(1000);
    return 0;
}
int BoardGame()

{
    system("cls");
    cout << "coming soon" << endl;
    cout << "going back to main menu" << endl;
    Sleep(1000);
    return 0;
}
int raahnamaa()
{
    system("cls");
    int dobodi[19][19] = {

        {'#', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '#'}, // 0
        {'|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|'}, // 1
        {'|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|'}, // 2
        {'|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|'}, // 3
        {'|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '#', '#', '#', '|', '-', '|', '-', '|'}, // 4
        {'|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|'}, // 5
        {'|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|'}, // 6
        {'|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|'}, // 7
        {'|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|'}, // 8
        {'|', 'A', '#', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', 'B', '|'}, // 9
        {'|', '-', '#', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|'}, // 10
        {'|', ' ', '#', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|'}, // 11
        {'|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|'}, // 12
        {'|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|'}, // 13
        {'|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|'}, // 14
        {'|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|'}, // 15
        {'|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|'}, // 16
        {'|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|'}, // 17
        {'#', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '#'}, // 18

    };
    //    1= abi
    //    2=sabz
    // 3= firuzeyi
    // 4= red
    // 6 = zard
    // 7 sefid
    // 8 tusi
    // 9 abi nabi
    system("cls");
    bool goMeno = false;
    while (goMeno == false)
    {
        system("cls");

        for (size_t i = 0; i < 10; i += 2)
        {
            cout << i << "   ";
        }
        for (size_t i = 10; i < 19; i += 2)
        {
            cout << i << "  ";
        }

        cout << endl;

        for (size_t i = 0; i < 19; i++)
        {
            for (size_t j = 0; j < 19; j++)
            {

                cout << char(dobodi[i][j]) << " ";
            }
            if (i % 2 == 0)
            {
                cout << i;
            }

            cout << endl;
        }

        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
        cout << "----------------------------------------" << endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

        cout << "salam! be daliz khosh umadi." << endl
             << "khob! ghatan bazi o bldi va age balad nisti bnzrm tu net search kon." << endl
             << "vali inam ye kholase :" << endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
        cout << "----------------------------------------" << endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

        cout << " tu bazi 2 nfre har mohre zood tar berese be samt moghabele zamin barande mishe." << endl
             << " masalan : 'A' bayad vared khoone haye kenar divar samt rast beshe ta bebare." << endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
        cout << "----------------------------------------" << endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

        cout << "to bazi 3 nafare harki zodtar be parcham ya alamat '$' berese barande mishe." << endl
             << "faghat khoone haye payin , chap va rast parcham , khoone haye bord hsab mishan." << endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
        cout << "----------------------------------------" << endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

        cout << "tu bazi 4 nfre ham har mohre zood tar berese be samt moghabele zamin barande mishe." << endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
        cout << "----------------------------------------" << endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        cout << "tu bazi 4 nfre ham har mohre zood tar berese be samt moghabele zamin barande mishe." << endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
        cout << "----------------------------------------" << endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
        cout << "baraye divar az keyPad 'I' va 'J' estefade mikni. " << endl;
        cout << "'I' baraye divar amoudi." << endl;
        cout << "'J' baraye divar ofoghi." << endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
        cout << "----------------------------------------" << endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        cout << "badesh satr o stun o vared mikni(ba adaad zoj kenar board)" << endl;
        cout << " masalan tu shekl inaro vared kardim :" << endl;
        cout << "10 2" << endl;
        cout << "4 12" << endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
        cout << "----------------------------------------" << endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

        cout << "press 'Esc' to go to main menu.";

        system("pause>nul");

        if (GetAsyncKeyState(VK_ESCAPE))
        {
            goMeno = true;
        }
    }

    return 0;
}

int _2Players()
{
    int dobodi[19][19] = {

        {'#', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '#'}, // 0
        {'|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|'}, // 1
        {'|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|'}, // 2
        {'|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|'}, // 3
        {'|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|'}, // 4
        {'|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|'}, // 5
        {'|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|'}, // 6
        {'|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|'}, // 7
        {'|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|'}, // 8
        {'|', 'A', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', 'B', '|'}, // 9
        {'|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|'}, // 10
        {'|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|'}, // 11
        {'|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|'}, // 12
        {'|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|'}, // 13
        {'|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|'}, // 14
        {'|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|'}, // 15
        {'|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|'}, // 16
        {'|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|'}, // 17
        {'#', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '#'}, // 18

    };

    int locA[2] = {9, 1};
    int locB[2] = {9, 17};
    int wallA = 10;
    int wallB = 10;
    char turn = 'A';
    char move;
    bool falsInput = false;
    bool endGame = false;
    bool notQuit;
    bool endGoMeno = false;

    while (dobodi[1][1] != 'B' && dobodi[3][1] != 'B' && dobodi[5][1] != 'B' &&
           dobodi[7][1] != 'B' && dobodi[9][1] != 'B' && dobodi[11][1] != 'B' && dobodi[13][1] != 'B' &&
           dobodi[15][1] != 'B' && dobodi[17][1] != 'B' && dobodi[1][17] != 'A' && dobodi[3][17] != 'A' && dobodi[5][17] != 'A' &&
           dobodi[7][17] != 'A' && dobodi[9][17] != 'A' && dobodi[11][17] != 'A' && dobodi[13][17] != 'A' &&
           dobodi[15][17] != 'A' && dobodi[17][17] != 'A')

    {
        // =================================== board game ============================================
        system("cls");
        move = 'g';

        for (size_t i = 0; i < 10; i += 2)
        {
            cout << i << "   ";
        }
        for (size_t i = 10; i < 19; i += 2)
        {
            cout << i << "  ";
        }
        cout << endl;

        for (size_t i = 0; i < 19; i++)
        {
            for (size_t j = 0; j < 19; j++)
            {

                cout << char(dobodi[i][j]) << " ";
            }
            if (i % 2 == 0)
            {
                cout << i;
            }

            cout << endl;
        }
        cout << endl
             << "------------------------------------------" << endl
             << "WALLS OF A : " << wallA << endl
             << "WALLS OF B : " << wallB << endl
             << "------------------------------------------" << endl
             << "where you must go : " << endl
             << "A RIGHT || B LEFT" << endl

             << "------------------------------------------" << endl

             << "PRESS ArrowKeys for moving." << endl
             << "PRESS 'Q' for Quit game." << endl
             << "press 'I' key for divar amoudi." << endl
             << "press 'J' key for divar ofoghi." << endl
             << "press 1 to 7 keypads for change theme (right side of keyBoard)" << endl
             << "-------------------------------------------" << endl
             << endl
             << endl;
        if (falsInput == true)
        {
            cout << "wrong key. try again" << endl;
            falsInput = false;
        }
        // ================================= //board game ============================================
        // ======================================== turn A ===========================================
        if (turn == 'A')
        {
            cout << " it's A turn . move A!" << endl;
            system("pause>nul");
            if (GetAsyncKeyState(VK_UP))
            {
                if (dobodi[locA[0] - 2][locA[1]] == ' ' &&
                    dobodi[locA[0] - 1][locA[1]] != '#')
                {
                    dobodi[locA[0]][locA[1]] = ' ';
                    dobodi[locA[0] - 2][locA[1]] = 'A';
                    locA[0] -= 2;
                    turn = 'B';
                    continue;
                }
                else if (dobodi[locA[0] - 2][locA[1]] == 'B' &&
                         dobodi[locA[0] - 4][locA[1]] == ' ' &&
                         dobodi[locA[0] - 1][locA[1]] != '#' &&
                         dobodi[locA[0] - 3][locA[1]] != '#')
                {
                    dobodi[locA[0]][locA[1]] = ' ';
                    dobodi[locA[0] - 4][locA[1]] = 'A';
                    locA[0] -= 4;
                    turn = 'B';
                    continue;
                }

                else
                {
                    falsInput = true;
                    continue;
                }
            }
            else if (GetAsyncKeyState(VK_DOWN))
            {
                if (dobodi[locA[0] + 2][locA[1]] == ' ' &&
                    dobodi[locA[0] + 1][locA[1]] != '#')
                {
                    dobodi[locA[0]][locA[1]] = ' ';
                    dobodi[locA[0] + 2][locA[1]] = 'A';
                    locA[0] += 2;
                    turn = 'B';
                    continue;
                }
                else if (dobodi[locA[0] + 2][locA[1]] == 'B' && dobodi[locA[0] + 4][locA[1]] == ' ' &&
                         dobodi[locA[0] + 1][locA[1]] != '#' &&
                         dobodi[locA[0] + 3][locA[1]] != '#')
                {
                    dobodi[locA[0]][locA[1]] = ' ';
                    dobodi[locA[0] + 4][locA[1]] = 'A';
                    locA[0] += 4;
                    turn = 'B';
                    continue;
                }

                else
                {
                    falsInput = true;
                    continue;
                }
            }
            else if (GetAsyncKeyState(VK_LEFT))
            {
                if (dobodi[locA[0]][locA[1] - 2] == ' ' &&
                    dobodi[locA[0]][locA[1] - 1] != '#')
                {
                    dobodi[locA[0]][locA[1]] = ' ';
                    dobodi[locA[0]][locA[1] - 2] = 'A';
                    locA[1] -= 2;
                    turn = 'B';
                    continue;
                }
                else if (dobodi[locA[0]][locA[1] - 2] == 'B' &&
                         dobodi[locA[0]][locA[1] - 4] == ' ' &&
                         dobodi[locA[0]][locA[1] - 1] != '#' &&
                         dobodi[locA[0]][locA[1] - 3] != '#')
                {
                    dobodi[locA[0]][locA[1]] = ' ';
                    dobodi[locA[0]][locA[1] - 4] = 'A';
                    locA[1] -= 4;
                    turn = 'B';
                    continue;
                }
                else
                {
                    falsInput = true;
                    continue;
                }
            }
            else if (GetAsyncKeyState(VK_RIGHT))
            {
                if (dobodi[locA[0]][locA[1] + 2] == ' ' &&
                    dobodi[locA[0]][locA[1] + 1] != '#')
                {
                    dobodi[locA[0]][locA[1]] = ' ';
                    dobodi[locA[0]][locA[1] + 2] = 'A';
                    locA[1] += 2;
                    turn = 'B';
                    continue;
                }

                else if (dobodi[locA[0]][locA[1] + 2] == 'B' &&
                         dobodi[locA[0]][locA[1] + 4] == ' ' &&
                         dobodi[locA[0]][locA[1] + 1] != '#' &&
                         dobodi[locA[0]][locA[1] + 3] != '#')
                {
                    dobodi[locA[0]][locA[1]] = ' ';
                    dobodi[locA[0]][locA[1] + 4] = 'A';
                    locA[1] += 4;
                    turn = 'B';
                    continue;
                }

                else
                {
                    falsInput = true;
                    continue;
                }
            }
            else if (GetAsyncKeyState('Q'))
            {
                endGoMeno = true;
                // break;
                system("cls");
                system("color 04");
                cout << "ARE YOU SURE YOU WANNA QUIT GAME?" << endl;
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);

                cout << " IF YES PRESS 'Q'" << endl;
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

                cout << ".ELSE PRESS OTHER KEY" << endl;
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                system("pause>nul");

                if (GetAsyncKeyState('Q'))
                {
                    endGame = true;
                    endGoMeno = true;
                    break;
                }
                else
                {
                    continue;
                }
            }
            else if (GetAsyncKeyState('I') & 0x8000)
            {
                cout << "satr va stun ra be tartib vared konid." << endl;
                int satr, stun;
                cin >> satr >> stun;

                if (satr % 2 == 0 && stun % 2 == 0 && 0 < satr && satr < 18 && 0 < stun && stun < 18)
                {
                    if (dobodi[satr - 1][stun] != '#' && dobodi[satr + 1][stun] != '#' && dobodi[satr][stun] != '#')
                    {
                        dobodi[satr - 1][stun] = '#';
                        dobodi[satr][stun] = '#';
                        dobodi[satr + 1][stun] = '#';
                        wallA -= 1;
                        system("cls");
                        turn = 'B';
                        continue;
                    }

                    else
                    {
                        falsInput = true;
                        continue;
                    }
                }
                else
                {
                    falsInput = true;
                    continue;
                }
            }
            else if (GetAsyncKeyState('J') & 0x8000)
            {
                cout << "satr va stun ra be tartib vared konid.(ba adad joz)" << endl;
                int satr, stun;
                cin >> satr >> stun;

                if (satr % 2 == 0 && stun % 2 == 0 && 0 < satr && satr < 18 && 0 < stun && stun < 18)
                {
                    if (dobodi[satr][stun + 1] != '#' && dobodi[satr][stun - 1] != '#' && dobodi[satr][stun] != '#')
                    {
                        dobodi[satr][stun - 1] = '#';
                        dobodi[satr][stun] = '#';
                        dobodi[satr][stun + 1] = '#';
                        wallA -= 1;
                        system("cls");
                        turn = 'B';
                        continue;
                    }
                    else
                    {
                        falsInput = true;
                        system("cls");
                        continue;
                    }
                }
            }
            // else if (GetAsyncKeyState(VK_SPACE))
            // {
            //     if (wallA <= 0)
            //     {
            //         falsInput = true;
            //         continue;
            //     }
            //     cout << "for create amudi  wall enter 'i'  " << endl
            //          << "for create  ofoghi wall enter 'j'(ba adad joz) " << endl;
            //     cin >> move;

            //     if (move == 'i' || move == 'I')
            //     {
            //         cout << "satr va stun ra be tartib vared konid." << endl;
            //         int satr, stun;
            //         cin >> satr >> stun;

            //         if (satr % 2 == 0 && stun % 2 == 0 && 0 < satr && satr < 18 && 0 < stun && stun < 18)
            //         {
            //             if (dobodi[satr - 1][stun] != '#' && dobodi[satr + 1][stun] != '#' && dobodi[satr][stun] != '#')
            //             {
            //                 dobodi[satr - 1][stun] = '#';
            //                 dobodi[satr][stun] = '#';
            //                 dobodi[satr + 1][stun] = '#';
            //                 wallA -= 1;
            //                 system("cls");
            //                 turn = 'B';
            //                 continue;
            //             }
            //         }
            //         else
            //         {
            //             falsInput = true;
            //             continue;
            //         }
            //     }
            //     else if (move == 'j' || move == 'J')
            //     {
            //         cout << "satr va stun ra be tartib vared konid.(ba adad joz)" << endl;
            //         int satr, stun;
            //         cin >> satr >> stun;

            //         if (satr % 2 == 0 && stun % 2 == 0 && 0 < satr && satr < 18 && 0 < stun && stun < 18)
            //         {
            //             if (dobodi[satr][stun + 1] != '#' && dobodi[satr][stun - 1] != '#' && dobodi[satr][stun] != '#')
            //             {
            //                 dobodi[satr][stun - 1] = '#';
            //                 dobodi[satr][stun] = '#';
            //                 dobodi[satr][stun + 1] = '#';
            //                 wallA -= 1;
            //                 system("cls");
            //                 turn = 'B';
            //                 continue;
            //             }
            //             else
            //             {
            //                 falsInput = true;
            //                 system("cls");
            //                 continue;
            //             }
            //         }
            //     }
            //     else
            //     {
            //         falsInput = true;
            //         system("cls");
            //         continue;
            //     }
            // }
            else if (GetAsyncKeyState(VK_NUMPAD1) & 0x8000)
            {
                system("color 47");
                continue;
            }
            else if (GetAsyncKeyState(VK_NUMPAD2) & 0x8000)
            {
                system("color 87");
                continue;
            }
            else if (GetAsyncKeyState(VK_NUMPAD3) & 0x8000)
            {
                system("color 30");
                continue;
            }
            else if (GetAsyncKeyState(VK_NUMPAD4) & 0x8000)
            {
                system("color 20");
                continue;
            }
            else if (GetAsyncKeyState(VK_NUMPAD5) & 0x8000)
            {
                system("color 40");
                continue;
            }
            else if (GetAsyncKeyState(VK_NUMPAD6) & 0x8000)
            {
                system("color 07");
                continue;
            }
            else if (GetAsyncKeyState(VK_NUMPAD7) & 0x8000)
            {
                system("color 70");
                continue;
            }

            else
            {
                falsInput = true;
                continue;
            }
            turn = 'B';
            continue;
        }
        // ========================================// turn A =========================================
        // ======================================== turn B ===========================================
        if (turn == 'B')
        {
            cout << " it's B turn . move B!" << endl;
            // ==================================================
            system("pause>nul");
            if (GetAsyncKeyState(VK_UP))
            {
                if (dobodi[locB[0] - 2][locB[1]] == ' ' &&
                    dobodi[locB[0] - 1][locB[1]] != '#')
                {
                    dobodi[locB[0]][locB[1]] = ' ';
                    dobodi[locB[0] - 2][locB[1]] = 'B';
                    locB[0] -= 2;
                    turn = 'A';
                    continue;
                }
                else if (dobodi[locB[0] - 2][locB[1]] == 'A' &&
                         dobodi[locB[0] - 4][locB[1]] == ' ' &&
                         dobodi[locB[0] - 1][locB[1]] != '#' &&
                         dobodi[locB[0] - 3][locB[1]] != '#')
                {
                    dobodi[locB[0]][locB[1]] = ' ';
                    dobodi[locB[0] - 4][locB[1]] = 'B';
                    locB[0] -= 4;
                    turn = 'A';
                    continue;
                }
                else
                {
                    falsInput = true;
                    continue;
                }
            }
            else if (GetAsyncKeyState(VK_DOWN))
            {
                if (dobodi[locB[0] + 2][locB[1]] == ' ' &&
                    dobodi[locB[0] + 1][locB[1]] != '#')
                {
                    dobodi[locB[0]][locB[1]] = ' ';
                    dobodi[locB[0] + 2][locB[1]] = 'B';
                    locB[0] += 2;
                    turn = 'A';
                    continue;
                }
                else if (dobodi[locB[0] + 2][locB[1]] == 'A' &&
                         dobodi[locB[0] + 4][locB[1]] == ' ' &&
                         dobodi[locB[0] + 1][locB[1]] != '#' &&
                         dobodi[locB[0] + 3][locB[1]] != '#')
                {
                    dobodi[locB[0]][locB[1]] = ' ';
                    dobodi[locB[0] + 4][locB[1]] = 'B';
                    locB[0] += 4;
                    turn = 'A';
                    continue;
                }

                else
                {
                    falsInput = true;
                    continue;
                }
            }
            else if (GetAsyncKeyState(VK_LEFT))
            {
                if (dobodi[locB[0]][locB[1] - 2] == ' ' &&
                    dobodi[locB[0]][locB[1] - 1] != '#')
                {
                    dobodi[locB[0]][locB[1]] = ' ';
                    dobodi[locB[0]][locB[1] - 2] = 'B';
                    locB[1] -= 2;
                    turn = 'A';
                    continue;
                }
                else if (dobodi[locB[0]][locB[1] - 2] == 'A' &&
                         dobodi[locB[0]][locB[1] - 4] == ' ' &&
                         dobodi[locB[0]][locB[1] - 1] != '#' &&
                         dobodi[locB[0]][locB[1] - 3] != '#')
                {
                    dobodi[locB[0]][locB[1]] = ' ';
                    dobodi[locB[0]][locB[1] - 4] = 'B';
                    locB[1] -= 4;
                    turn = 'A';
                    continue;
                }
                else
                {
                    falsInput = true;
                    continue;
                }
            }
            else if (GetAsyncKeyState(VK_RIGHT))
            {
                if (dobodi[locB[0]][locB[1] + 2] == ' ' &&
                    dobodi[locB[0]][locB[1] + 1] != '#')
                {
                    dobodi[locB[0]][locB[1]] = ' ';
                    dobodi[locB[0]][locB[1] + 2] = 'B';
                    locB[1] += 2;
                    turn = 'A';
                    continue;
                }

                else if (dobodi[locB[0]][locB[1] + 2] == 'A' &&
                         dobodi[locB[0]][locB[1] + 4] == ' ' &&
                         dobodi[locB[0]][locB[1] + 1] != '#' &&
                         dobodi[locB[0]][locB[1] + 3] != '#')
                {
                    dobodi[locB[0]][locB[1]] = ' ';
                    dobodi[locB[0]][locB[1] + 4] = 'B';
                    locB[1] += 4;
                    turn = 'A';
                    continue;
                }

                else
                {
                    falsInput = true;
                    continue;
                }
            }
            else if (GetAsyncKeyState('Q'))
            {
                endGoMeno = true;
                // break;
                system("cls");
                system("color 04");
                cout
                    << "ARE YOU SURE YOU WANNA QUIT GAME?" << endl;
                // SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);

                cout << " IF YES PRESS 'Q'" << endl;
                // SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

                cout << ".ELSE PRESS OTHER KEY" << endl;
                // SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                system("pause>nul");

                if (GetAsyncKeyState('Q'))
                {
                    endGame = true;
                    endGoMeno = true;
                    break;
                }
                else
                {
                    continue;
                }
            }
            else if (GetAsyncKeyState('I') & 0x8000)
            {
                cout << "satr va stun ra be tartib vared konid." << endl;
                int satr, stun;
                cin >> satr >> stun;

                if (satr % 2 == 0 && stun % 2 == 0 && 0 < satr && satr < 18 && 0 < stun && stun < 18)
                {
                    if (dobodi[satr - 1][stun] != '#' && dobodi[satr + 1][stun] != '#' && dobodi[satr][stun] != '#')
                    {
                        dobodi[satr - 1][stun] = '#';
                        dobodi[satr][stun] = '#';
                        dobodi[satr + 1][stun] = '#';
                        wallB -= 1;
                        system("cls");
                        turn = 'A';
                        continue;
                    }
                }
                else
                {
                    falsInput = true;
                    continue;
                }
            }
            else if (GetAsyncKeyState('J') & 0x8000)
            {
                cout << "satr va stun ra be tartib vared konid.(ba adad joz)" << endl;
                int satr, stun;
                cin >> satr >> stun;

                if (satr % 2 == 0 && stun % 2 == 0 && 0 < satr && satr < 18 && 0 < stun && stun < 18)
                {
                    if (dobodi[satr][stun + 1] != '#' && dobodi[satr][stun - 1] != '#' && dobodi[satr][stun] != '#')
                    {
                        dobodi[satr][stun - 1] = '#';
                        dobodi[satr][stun] = '#';
                        dobodi[satr][stun + 1] = '#';
                        wallB -= 1;
                        system("cls");
                        turn = 'A';
                        continue;
                    }
                    else
                    {
                        falsInput = true;
                        system("cls");
                        continue;
                    }
                }
            }
            else if (GetAsyncKeyState(VK_NUMPAD1) & 0x8000)
            {
                system("color 47");
                continue;
            }
            else if (GetAsyncKeyState(VK_NUMPAD2) & 0x8000)
            {
                system("color 87");
                continue;
            }
            else if (GetAsyncKeyState(VK_NUMPAD3) & 0x8000)
            {
                system("color 30");
                continue;
            }
            else if (GetAsyncKeyState(VK_NUMPAD4) & 0x8000)
            {
                system("color 20");
                continue;
            }
            else if (GetAsyncKeyState(VK_NUMPAD5) & 0x8000)
            {
                system("color 40");
                continue;
            }
            else if (GetAsyncKeyState(VK_NUMPAD6) & 0x8000)
            {
                system("color 07");
                continue;
            }
            else if (GetAsyncKeyState(VK_NUMPAD7) & 0x8000)
            {
                system("color 70");
                continue;
            }
            else
            {
                falsInput = true;
                continue;
            }
            turn = 'A';
            continue;
        }
        // ======================================== //turn B ==========================================
    }

    if (endGoMeno == true)
    {
        return 0;
    }

    char exit;

    while (true)
    {
        system("cls");
        for (size_t i = 0; i < 10; i += 2)
        {
            cout << i << "   ";
        }
        for (size_t i = 10; i < 19; i += 2)
        {
            cout << i << "  ";
        }
        cout << endl;

        for (size_t i = 0; i < 19; i++)
        {
            for (size_t j = 0; j < 19; j++)
            {

                cout << char(dobodi[i][j]) << " ";
            }
            if (i % 2 == 0)
            {
                cout << i;
            }

            cout << endl;
        }

        if (dobodi[1][1] == 'B' || dobodi[3][1] == 'B' || dobodi[5][1] == 'B' ||
            dobodi[7][1] == 'B' || dobodi[9][1] == 'B' || dobodi[11][1] == 'B' || dobodi[13][1] == 'B' == dobodi[15][1] == 'B' && dobodi[17][1] == 'B')
        {
            cout << " B won the game" << endl;
        }
        else if (dobodi[1][17] == 'A' || dobodi[3][17] == 'A' || dobodi[5][17] == 'A' ||
                 dobodi[7][17] == 'A' || dobodi[9][17] == 'A' || dobodi[11][17] == 'A' || dobodi[13][17] == 'A' ||
                 dobodi[15][17] != 'A' || dobodi[17][17] == 'A')
        {
            cout << "A won the game" << endl;
        }

        cout << "for going to main menu press 'Esc'" << endl;
        system("pause > nul");

        if (GetAsyncKeyState(VK_ESCAPE))
        {
            return 0;
        }
        else
        {
            continue;
        }
    }
}
int _3Players()

{
    int dobodi[19][19] = {

        {'#', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '#'}, // 0
        {'|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', '$', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|'}, // 1
        {'|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|'}, // 2
        {'|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|'}, // 3
        {'|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|'}, // 4
        {'|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|'}, // 5
        {'|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|'}, // 6
        {'|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|'}, // 7
        {'|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|'}, // 8
        {'|', 'B', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', 'C', '|'}, // 9
        {'|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|'}, // 10
        {'|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|'}, // 11
        {'|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|'}, // 12
        {'|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|'}, // 13
        {'|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|'}, // 14
        {'|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|'}, // 15
        {'|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|'}, // 16
        {'|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', 'A', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|'}, // 17
        {'#', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '#'}, // 18

    };

    int loA[2] = {17, 9};
    int loB[2] = {9, 1};
    int loC[2] = {9, 17};
    int locF[2] = {1, 9};
    int locA[2] = {17, 9};
    int walA = 6;
    int walB = 6;
    int walC = 6;
    int wallA = 6;
    char other1;
    char other2;
    char turn = 'A';
    char move;
    bool changeTurn = false;
    bool falsInput = false;
    bool endGame = false;
    bool notQuit;
    bool enterWall = false;
    bool endGoMeno = false;
    while (dobodi[1][7] == ' ' && dobodi[1][11] == ' ' && dobodi[3][9] == ' ')

    {

        if (changeTurn == true)
        {
            if (turn == 'A')
            {
                loA[0] = locA[0];
                loA[1] = locA[1];
                walA = wallA;
                turn = 'B';
                wallA = walB;
                locA[0] = loB[0];
                locA[1] = loB[1];
                other1 = 'A';
                other2 = 'C';
            }
            else if (turn == 'B')
            {
                walB = wallA;
                loB[0] = locA[0];
                loB[1] = locA[1];
                turn = 'C';
                wallA = walC;
                locA[0] = loC[0];
                locA[1] = loC[1];
                other1 = 'A';
                other2 = 'B';
            }
            else if (turn == 'C')
            {
                walC = wallA;
                loC[0] = locA[0];
                loC[1] = locA[1];
                wallA = walC;
                locA[0] = loA[0];
                locA[1] = loA[1];
                turn = 'A';
                wallA = walA;
                other1 = 'C';
                other2 = 'B';
            }

            changeTurn = false;
        }
        // =================================== board game ============================================
        system("cls");
        move = 'g';
        // cout << "  ";
        for (size_t i = 0; i < 10; i += 2)
        {
            cout << i << "   ";
        }
        for (size_t i = 10; i < 19; i += 2)
        {
            cout << i << "  ";
        }
        cout << endl;

        for (size_t i = 0; i < 19; i++)
        {
            for (size_t j = 0; j < 19; j++)
            {
                cout << char(dobodi[i][j]) << " ";
            }
            if (i % 2 == 0)
            {
                cout << i;
            }

            cout << endl;
        }
        cout << endl
             << "------------------------------------------" << endl
             << "WALLS OF A : " << walA << endl
             << "WALLS OF B : " << walB << endl
             << "WALLS OF C : " << walC << endl
             << "------------------------------------------" << endl
             << "PRESS ArrowKeys for moving." << endl
             << "PRESS 'Q' for Quit game." << endl
             << "press 'I' key for divar amoudi." << endl
             << "press 'J' key for divar ofoghi." << endl
             << "press 1 to 7 keypads for change theme (right side of keyBoard)" << endl
             << "-------------------------------------------" << endl
             << endl
             << endl;
        if (falsInput == true)
        {
            cout << "wrong key. try again" << endl;
            falsInput = false;
        }
        // ================================= //board game ============================================
        // ======================================== turn A ===========================================
        if (turn == 'A' || turn == 'B' || turn == 'C')
        {

            cout << " it's " << turn << " turn . move " << turn << "!" << endl;
            system("pause>nul");

            if (GetAsyncKeyState(VK_UP))
            {
                if (dobodi[locA[0] - 2][locA[1]] == ' ' &&
                    dobodi[locA[0] - 1][locA[1]] != '#')
                {
                    dobodi[locA[0]][locA[1]] = ' ';
                    dobodi[locA[0] - 2][locA[1]] = turn;
                    locA[0] -= 2;
                    changeTurn = true;
                    continue;
                }
                else if ((dobodi[locA[0] - 2][locA[1]] == other1 || dobodi[locA[0] - 2][locA[1]] == other2) &&
                         dobodi[locA[0] - 4][locA[1]] == ' ' &&
                         dobodi[locA[0] - 1][locA[1]] != '#' &&
                         dobodi[locA[0] - 3][locA[1]] != '#')
                {
                    dobodi[locA[0]][locA[1]] = ' ';
                    dobodi[locA[0] - 4][locA[1]] = turn;
                    locA[0] -= 4;
                    changeTurn = true;
                    continue;
                }
                else if ((dobodi[locA[0] - 2][locA[1]] == other1 || dobodi[locA[0] - 2][locA[1]] == other2) &&
                         (dobodi[locA[0] - 4][locA[1]] == other1 || dobodi[locA[0] - 4][locA[1]] == other2) &&
                         dobodi[locA[0] - 6][locA[1]] == ' ' &&
                         dobodi[locA[0] - 1][locA[1]] != '#' &&
                         dobodi[locA[0] - 3][locA[1]] != '#' &&
                         dobodi[locA[0] - 5][locA[1]] != '#')
                {
                    dobodi[locA[0]][locA[1]] = ' ';
                    dobodi[locA[0] - 6][locA[1]] = turn;
                    locA[0] -= 6;
                    changeTurn = true;
                    continue;
                }
                else
                {
                    falsInput = true;
                    continue;
                }
            }
            else if (GetAsyncKeyState(VK_DOWN))
            {
                if (dobodi[locA[0] + 2][locA[1]] == ' ' &&
                    dobodi[locA[0] + 1][locA[1]] != '#')
                {
                    dobodi[locA[0]][locA[1]] = ' ';
                    dobodi[locA[0] + 2][locA[1]] = turn;
                    locA[0] += 2;
                    changeTurn = true;
                    continue;
                }
                else if ((dobodi[locA[0] + 2][locA[1]] == other1 || dobodi[locA[0] + 2][locA[1]] == other2) &&
                         dobodi[locA[0] + 4][locA[1]] == ' ' &&
                         dobodi[locA[0] + 1][locA[1]] != '#' &&
                         dobodi[locA[0] + 3][locA[1]] != '#')
                {
                    dobodi[locA[0]][locA[1]] = ' ';
                    dobodi[locA[0] + 4][locA[1]] = turn;
                    locA[0] += 4;
                    changeTurn = true;
                    continue;
                }
                else if ((dobodi[locA[0] + 2][locA[1]] == other1 || dobodi[locA[0] + 2][locA[1]] == other2) &&
                         (dobodi[locA[0] + 4][locA[1]] == other1 || dobodi[locA[0] + 4][locA[1]] == other2) &&
                         dobodi[locA[0] + 6][locA[1]] == ' ' &&
                         dobodi[locA[0] + 1][locA[1]] != '#' &&
                         dobodi[locA[0] + 3][locA[1]] != '#' &&
                         dobodi[locA[0] + 5][locA[1]] != '#')
                {
                    dobodi[locA[0]][locA[1]] = ' ';
                    dobodi[locA[0] + 6][locA[1]] = turn;
                    locA[0] += 6;
                    changeTurn = true;
                    continue;
                }
                else
                {
                    falsInput = true;
                    continue;
                }
            }
            else if (GetAsyncKeyState(VK_LEFT))
            {
                if (dobodi[locA[0]][locA[1] - 2] == ' ' &&
                    dobodi[locA[0]][locA[1] - 1] != '#')
                {
                    dobodi[locA[0]][locA[1]] = ' ';
                    dobodi[locA[0]][locA[1] - 2] = turn;
                    locA[1] -= 2;
                    changeTurn = true;
                    continue;
                }
                else if ((dobodi[locA[0]][locA[1] - 2] == other1 || dobodi[locA[0]][locA[1] - 2] == other2) &&
                         dobodi[locA[0]][locA[1] - 4] == ' ' &&
                         dobodi[locA[0]][locA[1] - 1] != '#' &&
                         dobodi[locA[0]][locA[1] - 3] != '#')
                {
                    dobodi[locA[0]][locA[1]] = ' ';
                    dobodi[locA[0]][locA[1] - 4] = turn;
                    locA[1] -= 4;
                    changeTurn = true;
                    continue;
                }
                else if ((dobodi[locA[0]][locA[1] - 2] == other1 || dobodi[locA[0]][locA[1] - 2] == other2) &&
                         (dobodi[locA[0]][locA[1] - 4] == other1 || dobodi[locA[0]][locA[1] - 4] == other2) &&
                         (dobodi[locA[0]][locA[1] - 6] == ' ' &&
                          dobodi[locA[0]][locA[1] - 1] != '#' &&
                          dobodi[locA[0]][locA[1] - 3] != '#' &&
                          dobodi[locA[0]][locA[1] - 5] != '#'))
                {
                    dobodi[locA[0]][locA[1]] = ' ';
                    dobodi[locA[0]][locA[1] - 6] = turn;
                    locA[1] -= 6;
                    changeTurn = true;
                    continue;
                }
                else
                {
                    falsInput = true;
                    continue;
                }
            }
            else if (GetAsyncKeyState(VK_RIGHT))
            {
                if (dobodi[locA[0]][locA[1] + 2] == ' ' &&
                    dobodi[locA[0]][locA[1] + 1] != '#')
                {
                    dobodi[locA[0]][locA[1]] = ' ';
                    dobodi[locA[0]][locA[1] + 2] = turn;
                    locA[1] += 2;
                    changeTurn = true;
                    continue;
                }
                else if ((dobodi[locA[0]][locA[1] + 2] == other1 || dobodi[locA[0]][locA[1] + 2] == other2) &&
                         dobodi[locA[0]][locA[1] + 4] == ' ' &&
                         dobodi[locA[0]][locA[1] + 1] != '#' &&
                         dobodi[locA[0]][locA[1] + 3] != '#')
                {
                    dobodi[locA[0]][locA[1]] = ' ';
                    dobodi[locA[0]][locA[1] + 4] = turn;
                    locA[1] += 4;
                    changeTurn = true;
                    continue;
                }
                else if ((dobodi[locA[0]][locA[1] + 2] == other1 || dobodi[locA[0]][locA[1] + 2] == other2) &&
                         (dobodi[locA[0]][locA[1] + 4] == other1 || dobodi[locA[0]][locA[1] + 4] == other2) &&
                         dobodi[locA[0]][locA[1] + 6] == ' ')
                {
                    dobodi[locA[0]][locA[1]] = ' ';
                    dobodi[locA[0]][locA[1] + 6] = turn;
                    locA[1] += 6;
                    changeTurn = true;
                    continue;
                }
                else
                {
                    falsInput = true;
                    continue;
                }
            }
            else if (GetAsyncKeyState('Q'))
            {
                endGoMeno = true;
                // break;
                system("cls");
                system("color 04");
                cout
                    << "ARE YOU SURE YOU WANNA QUIT GAME?" << endl;
                // SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);

                cout << " IF YES PRESS 'ENTER '" << endl;
                // SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

                cout << ".ELSE PRESS OTHER KEY" << endl;
                // SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                system("pause>nul");

                if (GetAsyncKeyState('Q'))
                {
                    endGame = true;
                    endGoMeno = true;
                    break;
                }
                else
                {
                    continue;
                }
            }
            else if (GetAsyncKeyState('I') & 0x8000)
            {
                cout << "satr va stun ra be tartib vared konid." << endl;
                int satr, stun;
                cin >> satr >> stun;

                if (satr % 2 == 0 && stun % 2 == 0 && 0 < satr && satr < 18 && 0 < stun && stun < 18)
                {
                    if (dobodi[satr - 1][stun] != '#' && dobodi[satr + 1][stun] != '#' && dobodi[satr][stun] != '#')
                    {
                        dobodi[satr - 1][stun] = '#';
                        dobodi[satr][stun] = '#';
                        dobodi[satr + 1][stun] = '#';
                        wallA -= 1;
                        system("cls");
                        changeTurn = true;
                        continue;
                    }
                    else
                    {
                        falsInput = true;
                        continue;
                    }
                }
                else
                {
                    falsInput = true;
                    continue;
                }
            }
            else if (GetAsyncKeyState('J') & 0x8000)
            {
                cout << "satr va stun ra be tartib vared konid.(ba adad joz)" << endl;
                int satr, stun;
                cin >> satr >> stun;

                if (satr % 2 == 0 && stun % 2 == 0 && 0 < satr && satr < 18 && 0 < stun && stun < 18)
                {
                    if (dobodi[satr][stun + 1] != '#' && dobodi[satr][stun - 1] != '#' && dobodi[satr][stun] != '#')
                    {
                        dobodi[satr][stun - 1] = '#';
                        dobodi[satr][stun] = '#';
                        dobodi[satr][stun + 1] = '#';
                        wallA -= 1;
                        system("cls");
                        changeTurn = true;
                        continue;
                    }
                    else
                    {
                        falsInput = true;
                        system("cls");
                        continue;
                    }
                }
                else
                {
                    falsInput = true;
                    system("cls");
                    continue;
                }
            }
            else if (GetAsyncKeyState(VK_NUMPAD1) & 0x8000)
            {
                system("color 47");
                continue;
            }
            else if (GetAsyncKeyState(VK_NUMPAD2) & 0x8000)
            {
                system("color 87");
                continue;
            }
            else if (GetAsyncKeyState(VK_NUMPAD3) & 0x8000)
            {
                system("color 30");
                continue;
            }
            else if (GetAsyncKeyState(VK_NUMPAD4) & 0x8000)
            {
                system("color 20");
                continue;
            }
            else if (GetAsyncKeyState(VK_NUMPAD5) & 0x8000)
            {
                system("color 40");
                continue;
            }
            else if (GetAsyncKeyState(VK_NUMPAD6) & 0x8000)
            {
                system("color 07");
                continue;
            }
            else if (GetAsyncKeyState(VK_NUMPAD7) & 0x8000)
            {
                system("color 70");
                continue;
            }
            else
            {
                falsInput = true;
                continue;
            }
            turn = 'B';
            continue;
        }
    }

    // if (endGoMeno == true)
    // {
    //     return 0;
    // }

    char exit;
    while (true)
    {
        system("cls");
        move = 'g';
        // cout << "  ";
        for (size_t i = 0; i < 10; i += 2)
        {
            cout << i << "   ";
        }
        for (size_t i = 10; i < 19; i += 2)
        {
            cout << i << "  ";
        }
        cout << endl;

        for (size_t i = 0; i < 19; i++)
        {
            for (size_t j = 0; j < 19; j++)
            {
                cout << char(dobodi[i][j]) << " ";
            }
            if (i % 2 == 0)
            {
                cout << i;
            }

            cout << endl;
        }

        if (dobodi[1][7] != ' ')
        {
            cout << char(dobodi[1][7]) << " won the game" << endl;
        }
        else if (dobodi[3][9] != ' ')
        {
            cout << char(dobodi[3][9]) << " won the game" << endl;
        }
        else if (dobodi[1][11] != ' ')
        {
            cout << char(dobodi[1][11]) << " won the game" << endl;
        }
        cout << "press 'Esc' for going to main menu" << endl;
        system("pause>nul");

        if (GetAsyncKeyState(VK_ESCAPE))
        {
            return 0;
        }
        else
        {
            continue;
        }
    }
}
int _4Players()
{

    int dobodi[19][19] = {

        {'#', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '#'}, // 0
        {'|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', 'D', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|'}, // 1
        {'|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|'}, // 2
        {'|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|'}, // 3
        {'|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|'}, // 4
        {'|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|'}, // 5
        {'|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|'}, // 6
        {'|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|'}, // 7
        {'|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|'}, // 8
        {'|', 'A', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', 'B', '|'}, // 9
        {'|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|'}, // 10
        {'|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|'}, // 11
        {'|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|'}, // 12
        {'|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|'}, // 13
        {'|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|'}, // 14
        {'|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|'}, // 15
        {'|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|', '-', '|'}, // 16
        {'|', ' ', '|', ' ', '|', ' ', '|', ' ', '|', 'C', '|', ' ', '|', ' ', '|', ' ', '|', ' ', '|'}, // 17
        {'#', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '#'}, // 18

    };
    int loC[2] = {17, 9}; //
    int loA[2] = {9, 1};  //
    int loB[2] = {9, 17}; //
    int loD[2] = {1, 9};
    int locA[2] = {9, 1}; // ======================

    int walA = 5;
    int walB = 5;
    int walC = 5;
    int walD = 5;
    int wallA = 5; //========================================================
    char turn = 'A';

    char other1;
    char other2;
    char other3;

    char move;
    bool falsInput = false;
    bool endGame = false;
    bool notQuit;
    bool enterWall = false;
    bool endGoMeno = false;
    bool changeTurn = false;

    while ((dobodi[1][1] != 'B' && dobodi[3][1] != 'B' && dobodi[5][1] != 'B' &&
            dobodi[7][1] != 'B' && dobodi[9][1] != 'B' && dobodi[11][1] != 'B' &&
            dobodi[13][1] != 'B' && dobodi[15][1] != 'B' && dobodi[17][1] != 'B') &&
           (dobodi[1][17] != 'A' && dobodi[3][17] != 'A' && dobodi[5][17] != 'A' &&
            dobodi[7][17] != 'A' && dobodi[9][17] != 'A' && dobodi[11][17] != 'A' &&
            dobodi[13][17] != 'A' && dobodi[15][17] != 'A' && dobodi[17][17] != 'A') &&
           (dobodi[1][1] != 'C' && dobodi[1][3] != 'C' && dobodi[1][5] != 'C' &&
            dobodi[1][7] != 'C' && dobodi[1][9] != 'C' && dobodi[1][11] != 'C' &&
            dobodi[1][13] != 'C' && dobodi[1][15] != 'C' && dobodi[1][17] != 'C') &&
           ((dobodi[17][1] != 'D' && dobodi[17][3] != 'D' && dobodi[17][5] != 'D' &&
             dobodi[17][7] != 'D' && dobodi[17][9] != 'D' && dobodi[17][11] != 'D' &&
             dobodi[17][13] != 'D' && dobodi[17][15] != 'D' && dobodi[17][17] != 'D')))

    {

        if (changeTurn == true)
        {
            if (turn == 'A')
            {
                loA[0] = locA[0];
                loA[1] = locA[1];
                walA = wallA;
                turn = 'B';
                wallA = walB;
                locA[0] = loB[0];
                locA[1] = loB[1];
                other1 = 'A';
                other2 = 'D';
                other3 = 'C';
            }
            else if (turn == 'B')
            {
                walB = wallA;
                loB[0] = locA[0];
                loB[1] = locA[1];
                turn = 'C';
                wallA = walC;
                locA[0] = loC[0];
                locA[1] = loC[1];
                other1 = 'A';
                other2 = 'B';
                other3 = 'D';
            }
            else if (turn == 'C')
            {
                walC = wallA;
                loC[0] = locA[0];
                loC[1] = locA[1];
                wallA = walC;
                locA[0] = loD[0];
                locA[1] = loD[1];
                turn = 'D';
                wallA = walD;
                other1 = 'A';
                other2 = 'B';
                other3 = 'C';
            }
            else if (turn == 'D')
            {
                walD = wallA;
                loD[0] = locA[0];
                loD[1] = locA[1];
                wallA = walD;
                locA[0] = loA[0];
                locA[1] = loA[1];
                turn = 'A';
                wallA = walA;
                other1 = 'D';
                other2 = 'B';
                other3 = 'C';
            }
            changeTurn = false;
        }

        // =================================== board game ============================================
        system("cls");
        move = 'g';
        for (size_t i = 0; i < 10; i += 2)
        {
            cout << i << "   ";
        }
        for (size_t i = 10; i < 19; i += 2)
        {
            cout << i << "  ";
        }
        cout << endl;

        for (size_t i = 0; i < 19; i++)
        {
            for (size_t j = 0; j < 19; j++)
            {
                cout << char(dobodi[i][j]) << " ";
            }
            if (i % 2 == 0)
            {
                cout << i;
            }

            cout << endl;
        }
        cout << endl
             << "------------------------------------------" << endl

             << "WALLS OF A : " << walA << endl
             << "WALLS OF B : " << walB << endl
             << "WALLS OF C : " << walC << endl
             << "WALLS OF D : " << walD << endl
             << "------------------------------------------" << endl
             << " WHERE YOU MUST GO :" << endl
             << " A RIGHT || B LEFT || C UP || D DOWN" << endl
             << "------------------------------------------" << endl
             << "PRESS ArrowKeys for moving." << endl
             << "PRESS 'Q' for Quit game." << endl
             << "press 'I' key for divar amoudi." << endl
             << "press 'J' key for divar ofoghi." << endl
             << "press 1 to 7 keypads for change theme (right side of keyBoard)" << endl
             << "-------------------------------------------" << endl
             << endl
             << endl;
        if (falsInput == true)
        {
            cout << "wrong key. try again" << endl;
            falsInput = false;
        }

        // ================================= //board game ============================================
        // ======================================== turn A ===========================================
        if (turn == 'A' || turn == 'B' || turn == 'C' || turn == 'D')
        {

            cout << " it's " << turn << " turn . move " << turn << "!" << endl;
            system("pause");

            if (GetAsyncKeyState(VK_UP))
            {
                if (dobodi[locA[0] - 2][locA[1]] == ' ' &&
                    dobodi[locA[0] - 1][locA[1]] != '#')
                {
                    dobodi[locA[0]][locA[1]] = ' ';
                    dobodi[locA[0] - 2][locA[1]] = turn;
                    locA[0] -= 2;
                    changeTurn = true;
                    continue;
                }
                else if ((dobodi[locA[0] - 2][locA[1]] == other1 || dobodi[locA[0] - 2][locA[1]] == other2 || dobodi[locA[0] - 2][locA[1]] == other3) &&
                         dobodi[locA[0] - 4][locA[1]] == ' ' &&
                         dobodi[locA[0] - 1][locA[1]] != '#' &&
                         dobodi[locA[0] - 3][locA[1]] != '#')
                {
                    dobodi[locA[0]][locA[1]] = ' ';
                    dobodi[locA[0] - 4][locA[1]] = turn;
                    locA[0] -= 4;
                    changeTurn = true;
                    continue;
                }
                else if ((dobodi[locA[0] - 2][locA[1]] == other1 || dobodi[locA[0] - 2][locA[1]] == other2 || dobodi[locA[0] - 2][locA[1]] == other3) &&
                         (dobodi[locA[0] - 4][locA[1]] == other1 || dobodi[locA[0] - 4][locA[1]] == other2 || dobodi[locA[0] - 4][locA[1]] == other3) &&
                         dobodi[locA[0] - 6][locA[1]] == ' ' &&
                         dobodi[locA[0] - 1][locA[1]] != '#' &&
                         dobodi[locA[0] - 3][locA[1]] != '#' &&
                         dobodi[locA[0] - 5][locA[1]] != '#')
                {
                    dobodi[locA[0]][locA[1]] = ' ';
                    dobodi[locA[0] - 6][locA[1]] = turn;
                    locA[0] -= 6;
                    changeTurn = true;
                    continue;
                }
                else if ((dobodi[locA[0] - 2][locA[1]] == other1 || dobodi[locA[0] - 2][locA[1]] == other2 || dobodi[locA[0] - 2][locA[1]] == other3) &&
                         (dobodi[locA[0] - 4][locA[1]] == other1 || dobodi[locA[0] - 4][locA[1]] == other2 || dobodi[locA[0] - 4][locA[1]] == other3) &&
                         (dobodi[locA[0] - 6][locA[1]] == other1 || dobodi[locA[0] - 6][locA[1]] == other2 || dobodi[locA[0] - 6][locA[1]] == other3) &&
                         dobodi[locA[0] - 8][locA[1]] == ' ' &&
                         dobodi[locA[0] - 1][locA[1]] != '#' &&
                         dobodi[locA[0] - 3][locA[1]] != '#' &&
                         dobodi[locA[0] - 5][locA[1]] != '#' &&
                         dobodi[locA[0] - 7][locA[1]] != '#')
                {
                    dobodi[locA[0]][locA[1]] = ' ';
                    dobodi[locA[0] - 8][locA[1]] = turn;
                    locA[0] -= 8;
                    changeTurn = true;
                    continue;
                }
                else
                {
                    falsInput = true;
                    continue;
                }
            }
            else if (GetAsyncKeyState(VK_DOWN))
            {
                if (dobodi[locA[0] + 2][locA[1]] == ' ' &&
                    dobodi[locA[0] + 1][locA[1]] != '#')
                {
                    dobodi[locA[0]][locA[1]] = ' ';
                    dobodi[locA[0] + 2][locA[1]] = turn;
                    locA[0] += 2;
                    changeTurn = true;
                    continue;
                }
                else if ((dobodi[locA[0] + 2][locA[1]] == other1 || dobodi[locA[0] + 2][locA[1]] == other2 || dobodi[locA[0] + 2][locA[1]] == other3) &&
                         dobodi[locA[0] + 4][locA[1]] == ' ' &&
                         dobodi[locA[0] + 1][locA[1]] != '#' &&
                         dobodi[locA[0] + 3][locA[1]] != '#')
                {
                    dobodi[locA[0]][locA[1]] = ' ';
                    dobodi[locA[0] + 4][locA[1]] = turn;
                    locA[0] += 4;
                    changeTurn = true;
                    continue;
                }
                else if ((dobodi[locA[0] + 2][locA[1]] == other1 || dobodi[locA[0] + 2][locA[1]] == other2 || dobodi[locA[0] + 2][locA[1]] == other3) &&
                         (dobodi[locA[0] + 4][locA[1]] == other1 || dobodi[locA[0] + 4][locA[1]] == other2 || dobodi[locA[0] + 4][locA[1]] == other3) &&
                         dobodi[locA[0] + 6][locA[1]] == ' ' &&
                         dobodi[locA[0] + 1][locA[1]] != '#' &&
                         dobodi[locA[0] + 3][locA[1]] != '#' &&
                         dobodi[locA[0] + 5][locA[1]] != '#')
                {
                    dobodi[locA[0]][locA[1]] = ' ';
                    dobodi[locA[0] + 6][locA[1]] = turn;
                    locA[0] += 6;
                    changeTurn = true;
                    continue;
                }
                else if ((dobodi[locA[0] + 2][locA[1]] == other1 || dobodi[locA[0] + 2][locA[1]] == other2 || dobodi[locA[0] + 2][locA[1]] == other3) &&
                         (dobodi[locA[0] + 4][locA[1]] == other1 || dobodi[locA[0] + 4][locA[1]] == other2 || dobodi[locA[0] + 4][locA[1]] == other3) &&
                         (dobodi[locA[0] + 6][locA[1]] == other1 || dobodi[locA[0] + 6][locA[1]] == other2 || dobodi[locA[0] + 6][locA[1]] == other3) &&

                         dobodi[locA[0] + 8][locA[1]] == ' ' &&
                         dobodi[locA[0] + 1][locA[1]] != '#' &&
                         dobodi[locA[0] + 3][locA[1]] != '#' &&
                         dobodi[locA[0] + 5][locA[1]] != '#' &&
                         dobodi[locA[0] + 7][locA[1]] != '#')
                {
                    dobodi[locA[0]][locA[1]] = ' ';
                    dobodi[locA[0] + 8][locA[1]] = turn;
                    locA[0] += 8;
                    changeTurn = true;
                    continue;
                }
                else
                {
                    falsInput = true;
                    continue;
                }
            }
            else if (GetAsyncKeyState(VK_LEFT))
            {
                if (dobodi[locA[0]][locA[1] - 2] == ' ' &&
                    dobodi[locA[0]][locA[1] - 1] != '#')
                {
                    dobodi[locA[0]][locA[1]] = ' ';
                    dobodi[locA[0]][locA[1] - 2] = turn;
                    locA[1] -= 2;
                    changeTurn = true;
                    continue;
                }
                else if ((dobodi[locA[0]][locA[1] - 2] == other1 || dobodi[locA[0]][locA[1] - 2] == other2 || dobodi[locA[0]][locA[1] - 2] == other3) &&
                         dobodi[locA[0]][locA[1] - 4] == ' ' &&
                         dobodi[locA[0]][locA[1] - 1] != '#' &&
                         dobodi[locA[0]][locA[1] - 3] != '#')
                {
                    dobodi[locA[0]][locA[1]] = ' ';
                    dobodi[locA[0]][locA[1] - 4] = turn;
                    locA[1] -= 4;
                    changeTurn = true;
                    continue;
                }
                else if ((dobodi[locA[0]][locA[1] - 2] == other1 || dobodi[locA[0]][locA[1] - 2] == other2 || dobodi[locA[0]][locA[1] - 2] == other3) &&
                         (dobodi[locA[0]][locA[1] - 4] == other1 || dobodi[locA[0]][locA[1] - 4] == other2 || dobodi[locA[0]][locA[1] - 4] == other3) &&
                         (dobodi[locA[0]][locA[1] - 6] == ' ' &&
                          dobodi[locA[0]][locA[1] - 1] != '#' &&
                          dobodi[locA[0]][locA[1] - 3] != '#' &&
                          dobodi[locA[0]][locA[1] - 5] != '#'))
                {
                    dobodi[locA[0]][locA[1]] = ' ';
                    dobodi[locA[0]][locA[1] - 6] = turn;
                    locA[1] -= 6;
                    changeTurn = true;
                    continue;
                }
                else if ((dobodi[locA[0]][locA[1] - 2] == other1 || dobodi[locA[0]][locA[1] - 2] == other2 || dobodi[locA[0]][locA[1] - 2] == other3) &&
                         (dobodi[locA[0]][locA[1] - 4] == other1 || dobodi[locA[0]][locA[1] - 4] == other2 || dobodi[locA[0]][locA[1] - 4] == other3) &&
                         (dobodi[locA[0]][locA[1] - 6] == other1 || dobodi[locA[0]][locA[1] - 6] == other2 || dobodi[locA[0]][locA[1] - 6] == other3) &&
                         (dobodi[locA[0]][locA[1] - 8] == ' ' &&
                          dobodi[locA[0]][locA[1] - 1] != '#' &&
                          dobodi[locA[0]][locA[1] - 3] != '#' &&
                          dobodi[locA[0]][locA[1] - 5] != '#' &&
                          dobodi[locA[0]][locA[1] - 7] != '#'))
                {
                    dobodi[locA[0]][locA[1]] = ' ';
                    dobodi[locA[0]][locA[1] - 8] = turn;
                    locA[1] -= 8;
                    changeTurn = true;
                    continue;
                }
                else
                {
                    falsInput = true;
                    continue;
                }
            }
            else if (GetAsyncKeyState(VK_RIGHT))
            {
                if (dobodi[locA[0]][locA[1] + 2] == ' ' &&
                    dobodi[locA[0]][locA[1] + 1] != '#')
                {
                    dobodi[locA[0]][locA[1]] = ' ';
                    dobodi[locA[0]][locA[1] + 2] = turn;
                    locA[1] += 2;
                    changeTurn = true;
                    continue;
                }
                else if ((dobodi[locA[0]][locA[1] + 2] == other1 || dobodi[locA[0]][locA[1] + 2] == other2 || dobodi[locA[0]][locA[1] + 2] == other3) &&
                         dobodi[locA[0]][locA[1] + 4] == ' ' &&
                         dobodi[locA[0]][locA[1] + 1] != '#' &&
                         dobodi[locA[0]][locA[1] + 3] != '#')
                {
                    dobodi[locA[0]][locA[1]] = ' ';
                    dobodi[locA[0]][locA[1] + 4] = turn;
                    locA[1] += 4;
                    changeTurn = true;
                    continue;
                }
                else if ((dobodi[locA[0]][locA[1] + 2] == other1 || dobodi[locA[0]][locA[1] + 2] == other2 || dobodi[locA[0]][locA[1] + 2] == other3) &&
                         (dobodi[locA[0]][locA[1] + 4] == other1 || dobodi[locA[0]][locA[1] + 4] == other2 || dobodi[locA[0]][locA[1] + 4] == other3) &&
                         dobodi[locA[0]][locA[1] + 6] == ' ' &&
                         dobodi[locA[0]][locA[1] + 1] != '#' &&
                         dobodi[locA[0]][locA[1] + 3] != '#' &&
                         dobodi[locA[0]][locA[1] + 5] != '#')
                {
                    dobodi[locA[0]][locA[1]] = ' ';
                    dobodi[locA[0]][locA[1] + 6] = turn;
                    locA[1] += 6;
                    changeTurn = true;
                    continue;
                }
                else if ((dobodi[locA[0]][locA[1] + 2] == other1 || dobodi[locA[0]][locA[1] + 2] == other2 || dobodi[locA[0]][locA[1] + 2] == other3) &&
                         (dobodi[locA[0]][locA[1] + 4] == other1 || dobodi[locA[0]][locA[1] + 4] == other2 || dobodi[locA[0]][locA[1] + 4] == other3) &&
                         (dobodi[locA[0]][locA[1] + 6] == other1 || dobodi[locA[0]][locA[1] + 6] == other2 || dobodi[locA[0]][locA[1] + 6] == other3) &&
                         dobodi[locA[0]][locA[1] + 6] == ' ' &&
                         dobodi[locA[0]][locA[1] + 1] != '#' &&
                         dobodi[locA[0]][locA[1] + 3] != '#' &&
                         dobodi[locA[0]][locA[1] + 5] != '#' &&
                         dobodi[locA[0]][locA[1] + 7] != '#')
                {
                    dobodi[locA[0]][locA[1]] = ' ';
                    dobodi[locA[0]][locA[1] + 8] = turn;
                    locA[1] += 8;
                    changeTurn = true;
                    continue;
                }
                else
                {
                    falsInput = true;
                    continue;
                }
            }
            else if (GetAsyncKeyState('Q'))
            {
                endGoMeno = true;
                // break;
                system("cls");
                system("color 04");
                cout
                    << "ARE YOU SURE YOU WANNA QUIT GAME?" << endl;
                // SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);

                cout << " IF YES PRESS 'ENTER '" << endl;
                // SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

                cout << ".ELSE PRESS OTHER KEY" << endl;
                // SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                system("pause>nul");

                if (GetAsyncKeyState('Q'))
                {
                    endGame = true;
                    endGoMeno = true;
                    break;
                }
                else
                {
                    continue;
                }
            }
            else if (GetAsyncKeyState('I') & 0x8000)
            {
                cout << "satr va stun ra be tartib vared konid." << endl;
                int satr, stun;
                cin >> satr >> stun;

                if (satr % 2 == 0 && stun % 2 == 0 && 0 < satr && satr < 18 && 0 < stun && stun < 18)
                {
                    if (dobodi[satr - 1][stun] != '#' && dobodi[satr + 1][stun] != '#' && dobodi[satr][stun] != '#')
                    {
                        dobodi[satr - 1][stun] = '#';
                        dobodi[satr][stun] = '#';
                        dobodi[satr + 1][stun] = '#';
                        wallA -= 1;
                        system("cls");
                        changeTurn = true;
                        continue;
                    }
                    else
                    {
                        falsInput = true;
                        continue;
                    }
                }
                else
                {
                    falsInput = true;
                    continue;
                }
            }
            else if (GetAsyncKeyState('J') & 0x8000)
            {
                cout << "satr va stun ra be tartib vared konid.(ba adad joz)" << endl;
                int satr, stun;
                cin >> satr >> stun;

                if (satr % 2 == 0 && stun % 2 == 0 && 0 < satr && satr < 18 && 0 < stun && stun < 18)
                {
                    if (dobodi[satr][stun + 1] != '#' && dobodi[satr][stun - 1] != '#' && dobodi[satr][stun] != '#')
                    {
                        dobodi[satr][stun - 1] = '#';
                        dobodi[satr][stun] = '#';
                        dobodi[satr][stun + 1] = '#';
                        wallA -= 1;
                        system("cls");
                        changeTurn = true;
                        continue;
                    }
                    else
                    {
                        falsInput = true;
                        system("cls");
                        continue;
                    }
                }
                else
                {
                    falsInput = true;
                    system("cls");
                    continue;
                }
            }
            else if (GetAsyncKeyState(VK_NUMPAD1) & 0x8000)
            {
                system("color 47");
                continue;
            }
            else if (GetAsyncKeyState(VK_NUMPAD2) & 0x8000)
            {
                system("color 87");
                continue;
            }
            else if (GetAsyncKeyState(VK_NUMPAD3) & 0x8000)
            {
                system("color 30");
                continue;
            }
            else if (GetAsyncKeyState(VK_NUMPAD4) & 0x8000)
            {
                system("color 20");
                continue;
            }
            else if (GetAsyncKeyState(VK_NUMPAD5) & 0x8000)
            {
                system("color 40");
                continue;
            }
            else if (GetAsyncKeyState(VK_NUMPAD6) & 0x8000)
            {
                system("color 07");
                continue;
            }
            else if (GetAsyncKeyState(VK_NUMPAD7) & 0x8000)
            {
                system("color 70");
                continue;
            }

            else
            {
                falsInput = true;
                continue;
            }
            turn = 'B';
            move = 'g';
            continue;
        }
    }
    char winner;

    // dobodi[1][7] == ' ' && dobodi[1][11] == ' ' && dobodi[3][9] == ' '
    if (dobodi[1][1] == 'B' || dobodi[3][1] == 'B' || dobodi[5][1] == 'B' ||
        dobodi[7][1] == 'B' || dobodi[9][1] == 'B' || dobodi[11][1] == 'B' ||
        dobodi[13][1] == 'B' || dobodi[15][1] == 'B' || dobodi[17][1] == 'B')
    {
        winner = 'B';
    }
    else if (dobodi[1][17] == 'A' || dobodi[3][17] == 'A' || dobodi[5][17] == 'A' ||
             dobodi[7][17] == 'A' || dobodi[9][17] == 'A' || dobodi[11][17] == 'A' ||
             dobodi[13][17] == 'A' || dobodi[15][17] == 'A' || dobodi[17][17] == 'A')
    {
        winner = 'A';
    }
    else if (dobodi[1][1] == 'C' || dobodi[1][3] == 'C' || dobodi[1][5] == 'C' ||
             dobodi[1][7] == 'C' || dobodi[1][9] == 'C' || dobodi[1][11] == 'C' ||
             dobodi[1][13] == 'C' || dobodi[1][15] == 'C' || dobodi[1][17] == 'C')
    {
        winner = 'C';
    }
    else if (dobodi[17][1] == 'D' || dobodi[17][3] == 'D' || dobodi[17][5] == 'D' ||
             dobodi[17][7] == 'D' || dobodi[17][9] == 'D' || dobodi[17][11] == 'D' ||
             dobodi[17][13] == 'D' || dobodi[17][15] == 'D' || dobodi[17][17] == 'D')
    {
        winner = 'D';
    }
    while (true)
    {
        system("cls");
        move = 'g';
        // cout << "  ";
        for (size_t i = 0; i < 10; i += 2)
        {
            cout << i << "   ";
        }
        for (size_t i = 10; i < 19; i += 2)
        {
            cout << i << "  ";
        }
        cout << endl;

        for (size_t i = 0; i < 19; i++)
        {
            for (size_t j = 0; j < 19; j++)
            {
                cout << char(dobodi[i][j]) << " ";
            }
            if (i % 2 == 0)
            {
                cout << i;
            }

            cout << endl;
        }

        cout << winner << " won the game. " << endl;

        cout << "press 'Esc' for going to main menu" << endl;
        system("pause>nul");

        if (GetAsyncKeyState(VK_ESCAPE))
        {
            return 0;
        }
        else
        {
            continue;
        }
    }

    return 0;
}