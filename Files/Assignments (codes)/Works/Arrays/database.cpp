//#include<iostream>
//#include<iomanip>
//using namespace std;
//
//int findRecordIndex(int arr[], int value, int* size)
//{
//    bool findFlag = true;
//    int i = 0, index = -1;
//
//    while (i < *size && findFlag)
//    {
//        if (arr[i] == value)
//        {
//            findFlag = false;
//            index = i;
//        }
//    }
//
//    return index;
//}
//
//void filterSearchCgpa(int rollNo[], float cgpa[],float range1, float range2, int* size)
//{
//    cout << left << setfill(' ') << setw(10) << "Roll No" << setw(10) << "Cgpa";
//    for (int i = 0; i < *size; i= i + 1)
//    {
//        if (cgpa[i] < range1 && cgpa[i] > range2)
//        {
//            cout << left << setfill(' ') << setw(10) << rollNo[i] << setw(10) << cgpa[i];
//        }
//    }
//}
//
//void filterSearchRecord(int rollNo[], float cgpa[], int* noOfRecords)
//{
//    float range1, range2;
//    cout << "Enter the range between you want to search cgpa: ";
//    cin >> range1 >> range2;
//    filterSearchCgpa(rollNo, cgpa,range1,range2,noOfRecords);
//}
//
//void overWriteRecord(int rollNo[], float cgpa[], int * noOfRecords, int index)
//{
//    rollNo[index] = rollNo[*noOfRecords];
//    cgpa[index] = cgpa[*noOfRecords];
//}
//
//void removeRecord(int rollNo[], float cgpa[],int *noOfRecords)
//{
//    int userInputRollNumber;
//    cout << "Enter roll no which you want to delete";
//    cin >> userInputRollNumber;
//    int index = findRecordIndex(rollNo, userInputRollNumber, noOfRecords);
//
//    if (index != 1)
//    {
//        overWriteRecord(rollNo, cgpa, noOfRecords, index);
//        *noOfRecords = *noOfRecords - 1;
//    }
//}
//
//void printUpdateMessage(int *index)
//{
//    cout << (*index == -1 ? "Record Not Found.\n" : "Record Updated SUccessFully.\n");
//}
//
//void updateMenu()
//{
//    cout << "Press 1 to update the roll no: \n";
//    cout << "Press 2 to update the cgpa: \n";
//    cout << "Press 3 to update both: \n";
//}
//
//void changeRecord(int arr[], int value, int *index)
//{
//    arr[*index] = value;
//}
//
//void changeRecord(float arr[], int value, int *index)
//{
//    arr[*index] = value;
//}
//
//void updateRollNo(int rollNo[], int *noOfRecords, int *index)
//{
//    int oldRollNo, newRollNo;
//    cout << "Enter the roll no which you want to update: ";
//    cin >> oldRollNo;
//    cout << "Enter the new roll no which you want to change: ";
//    cin >> newRollNo;
//    *index = findRecordIndex(rollNo, oldRollNo, noOfRecords);
//    if (*index != -1)
//    {
//        changeRecord(rollNo,newRollNo,index);
//    }
//    printUpdateMessage(index);
//}
//
//void updateCgpa(int rollNo[], float cgpa[], int *size, int* index)
//{
//    int oldCgpa, newCgpa;
//    cout << "Enter the roll no which you want to update: ";
//    cin >> oldCgpa;
//    cout << "Enter the new roll no which you want to change: ";
//    cin >> newCgpa;
//    *index = findRecordIndex(rollNo, oldCgpa, size);
//    if (*index != -1)
//    {
//        changeRecord(cgpa, newCgpa, index);
//    }
//    printUpdateMessage(index);
//}
//
//void performDatabaseActionsUpdate(int rollNo[], float cgpa[], int option, int *noOfRecords)
//{
//    int index;
//    switch (option)
//    {
//        case 1:
//        {
//            updateRollNo(rollNo, noOfRecords, &index);
//            break;
//        }
//        case 2:
//        {
//            updateCgpa(rollNo, cgpa, noOfRecords, &index);
//            break;
//        }
//        case 3:
//        {
//            updateRollNo(rollNo, noOfRecords, &index);
//            updateCgpa(rollNo, cgpa, noOfRecords, &index);
//            break;
//        }
//    }
//}
//
//void updateRecord(int rollNo[],float cgpa[],int *noOfRecords)
//{
//    int option;
//    updateMenu();
//    cin >> option;
//    performDatabaseActionsUpdate(rollNo, cgpa, option, noOfRecords);
//}
//
//void inputRecord(int rollNo[], float cgpa[], int * noOfRecords)
//{
//    cout << "Enter Roll NO: ";
//    cin >> rollNo[*noOfRecords];
//    cout << "Enter CGPA: ";
//    cin >> cgpa[*noOfRecords];
//}
//
//void printSearchRecordStatus(int index)
//{
//    if (index == -1)
//    {
//        cout << "Your record is not found";
//    }
//    else
//    {
//        cout << "Your record is found at " << index << "\n";
//    }
//}
//
//void searchRecord(int rollNo[], int* noOfRecords)
//{
//    int userInputRollNumber;
//    cout << "Enter roll no: ";
//    cin >> userInputRollNumber;
//    int index = findRecordIndex(rollNo, userInputRollNumber, noOfRecords);
//    printSearchRecordStatus(index);
//}
//
//bool isDataBaseFull(int* noOfRecord, int size)
//{
//    if (size == *noOfRecord)
//    {
//        return true;
//    }
//    return false;
//}
//
//void printAddStatus(int response)
//{
//    switch (response)
//    {
//        case 0:
//        {
//            cout << "DataBase is Full..\n";
//            break;
//        }
//    case 1:
//    {
//        cout << "Roll NO already exists. Try different one.\n";
//        break;
//    }
//    case 2:
//    {
//        cout << "Succesfully Added the record.\n";
//        break;
//    }
//    }
//}
//
//void addRecord(int rollNo[], float cgpa[], int* noOfRecords, int size)
//{
//    int response;
//    if (isDataBaseFull(noOfRecords, size))
//    {
//        response = 0;
//    }
//
//    else
//    {
//        inputRecord(rollNo, cgpa, noOfRecords);
//        if (findRecordIndex(rollNo, rollNo[*noOfRecords-1] , noOfRecords) != -1)
//        {
//            response = 1;
//        }
//        else
//        {
//            *noOfRecords = *noOfRecords + 1;
//            response = 2;
//        }
//    }
//    printAddStatus(response);
//}
//
//void showMenu()
//{
//    cout << "Press 1 to add the record.\n";
//    cout << "Press 2 to remove the record.\n";
//    cout << "Press 3 to update the cgpa.\n";
//    cout << "Press 4 to show the record.\n";
//    cout << "Press 5 to get the records between specific cgpa.\n";
//    cout << "Press 0 to exit.\n";
//}
//
//void performDatabaseActions(int rollNo[], float cgpa[], int choice, int* noOfRecords, int size)
//{
//    if (!(choice > 0 && choice < 6))
//    {
//        return;
//    }
//
//    switch (choice)
//    {
//        case 1:
//        {
//            addRecord(rollNo, cgpa, noOfRecords, size);
//            break;
//        }
//        case 2:
//        {
//            removeRecord(rollNo, cgpa, noOfRecords);
//            break;
//        }
//        case 3:
//        {
//            updateRecord(rollNo, cgpa, noOfRecords);
//            break;
//        }
//        case 4:
//        {
//            searchRecord(rollNo, noOfRecords);
//            break;
//        }
//        case 5:
//        {
//            filterSearchRecord(rollNo, cgpa, noOfRecords);
//            break;
//        }
//    }
//}
//
//bool isAnyError(int choice)
//{
//    if (!(choice >= 0 && choice < 6))
//    {
//        return true;
//    }
//    return false;
//}
//
//void makeDataBaseApp()
//{
//    int rollNo[60];
//    float cgpa[60];
//    int noOfRecords = 0;
//    int size = 60;
//    int choice;
//    do
//    {
//        showMenu();
//        cin >> choice;
//        performDatabaseActions(rollNo, cgpa, choice, &noOfRecords, 60);
//        if (isAnyError(choice))
//        {
//            cout << "You have entered invalid value. Please Try Again.";
//        }
//    }
//    while (choice != 0);
//}
//
//int main()
//{
//    makeDataBaseApp();
//    cout << endl;
//    return 0;
//}