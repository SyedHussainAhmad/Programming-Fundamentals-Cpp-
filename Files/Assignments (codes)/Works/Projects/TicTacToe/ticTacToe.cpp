//#include<iostream>
//using namespace std;
//
//void initializeBoard(char arr[][3], int size)
//{
//    for (int i = 0, number = '1'; i < size * size; i = i + 1, number = number + 1)
//    {
//        arr[0][i] = number;
//    }
//}
//
//void displayBoard(char arr[][3], int size)
//{
//    for (int i = 0; i < size * size; i = i + 1)
//    {
//        cout << "| " << arr[0][i] << " |";
//        cout << ((i + 1) % 3 == 0 ? "\n" : "");
//    }
//}
//
//void displayMessage(int num)
//{
//    cout << (num % 2 == 0 ? "Player's One Turn: " : "Player's two Turn: ");
//}
//
//void inputEntry(char arr[][3], int num)
//{
//    char entry;
//    do
//    {
//        cin >> entry;
//        if (entry < 0 && entry > 10)
//        {
//            cout << "Error! Try entering valid value between 1 and 9.\n";
//        }
//        else if (arr[0][entry - '1'] != entry)
//        {
//            cout << "Error! Try entering valid value. The value is already initialized/used.\n";
//        }
//    } while (entry < 1 && entry > 10 && arr[0][entry - '1'] != entry);
//
//    if (num % 2 == 0)
//    {
//        arr[0][entry - '1'] = 'X';
//    }
//    else
//    {
//        arr[0][entry - '1'] = 'T';
//    }
//}
//
//int rowCheck(char arr[], int columns, int character)
//{
//    int sum = 0;
//    for (int i = 0; i < columns; i = i + 1)
//    {
//        if (arr[i] == character)
//        {
//            sum = sum + 1;
//        }
//    }
//    return sum;
//}
//
//int columnCheck(char arr[][3], int columnNo, int rows, int character)
//{
//    int sum = 0;
//    for (int i = 0; i < rows; i = i + 1)
//    {
//        if (arr[i][columnNo] == character)
//        {
//            sum = sum + 1;
//        }
//    }
//    return sum;
//}
//
//int diagonalCheck(char arr[][3], int rows, int character)
//{
//    int sum = 0;
//
//    for (int i = 0, j = 0; i < rows && j < rows; i = i + 1, j = j + 1)
//    {
//        if (arr[i][j] == character)
//        {
//            sum = sum + 1;
//        }
//    }
//    return sum;
//}
//
//int antiDiagonalCheck(char arr[][3], int rows, int character)
//{
//    int sum = 0;
//
//    for (int i = 0, j = rows - 1; i < rows && j >= 0; i = i + 1, j = j - 1)
//    {
//        if (arr[i][j] == character)
//        {
//            sum = sum + 1;
//        }
//    }
//    return sum;
//}
//
//char checkWinner(char arr[][3], int size)
//{
//    for (int i = 0; i < size; i = i + 1)
//    {
//        if (rowCheck(arr[i], size, 'X') == 3 || columnCheck(arr, i, size, 'X') == 3 || diagonalCheck(arr, size, 'X') == 3 || antiDiagonalCheck(arr, size, 'X') == 3)
//        {
//            return '1';
//        }
//        else if (rowCheck(arr[i], size, 'T') == 3 || columnCheck(arr, i, size, 'T') == 3 || diagonalCheck(arr, size, 'T') == 3 || antiDiagonalCheck(arr, size, 'T') == 3)
//        {
//            return '2';
//        }
//        else
//        {
//            return '0';
//        }
//    }
//}
//
//void displayWinner(char winner, bool* winFlag)
//{
//    switch (winner)
//    {
//    case '1':
//    {
//        cout << "Player One Wins..\n";
//        *winFlag = true;
//        break;
//    }
//
//    case '2':
//    {
//        cout << "Player Two Wins..\n";
//        *winFlag = true;
//        break;
//    }
//    }
//}
//
//void performGameActions(char gameBoard[][3])
//{
//    int i = 0;
//    bool winFlag = false;
//
//    while (i < 9 && !winFlag)
//    {
//        displayBoard(gameBoard, 3);
//        displayMessage(i);
//        inputEntry(gameBoard, i);
//        char winner = checkWinner(gameBoard, 3);
//        if (winner)
//        {
//            displayWinner(winner, &winFlag);
//        }
//        i = i + 1;
//    }
//    if (!winFlag)
//    {
//        displayBoard(gameBoard, 3);
//    }
//
//    if (i == 9)
//    {
//        cout << "The game is drawn..";
//    }
//}
//void ticTacToeApp()
//{
//    char gameBoard[3][3];
//    initializeBoard(gameBoard, 3);
//    char playerOneChoice = 'T';
//    char playerTwoChoice = 'X';
//    performGameActions(gameBoard);
//}
//
//int main()
//{
//    ticTacToeApp();
//    cout << endl;
//    return 0;
//}