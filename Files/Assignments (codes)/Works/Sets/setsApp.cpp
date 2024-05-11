#include<iostream>
#include<iomanip>
using namespace std;

struct Set
{
    int *data;
    int size = 0;
    int capacity = 10;
    char name[15];
    int index;
};

struct SetRecord
{
    Set **data;
    int size = 0;
    int capacity = 3;
};

void printSet(const Set set)
{
    cout << "{ ";
    for (int i = 0; i < set.size; i = i + 1)
    {
        cout << set.data[i] << " ";
    }
    cout << "}\n";
}


void displayAllSets(const SetRecord * const record)
{
    cout << "The available sets are: \n";
    for (int i = 0; i < record->size; i = i + 1)
    {
        cout << record->data[i]->name<< '\t';
        cout << (i % 4 != 0 ? "\n" : "");
    }
    cout << '\n';
}

int copyString(char arr1[], char arr2[], int size = 0)
{
    int temp = size;
    int i = 0;
    while (arr1[i] != '\0')
    {
        arr2[size] = arr1[i];
        size = size + 1;
        i = i + 1;
    }
    arr2[temp+i] = '\0';
    return size;
}

bool compareString(char arr1[], char arr2[])
{
    int i = 0;
    bool findFlag = true;
    while (arr1[i]!='\0' && findFlag)
    {
        if (arr1[i] != arr2[i])
        {
            findFlag = false;
        }
        i = i + 1;
    }
    return findFlag;
}

void showMenu()
{
    cout << "Press 1 to Create a Set.\n";
    cout << "Press 2 to Add values in a Set.\n";
    cout << "Press 3 to Delete a Set.\n";
    cout << "Press 4 Print Set Elements.\n";
    cout << "Press 5 to Get a Union.\n";
    cout << "Press 6 to Get a Intersection.\n";
    cout << "Press Q to exit.\n";
}

void getUserInput(char * input)
{
    cin >> *input;
}

Set * getSearchedSet(char* temp, SetRecord *record)
{
    bool findFlag = false;
    int i = 0;
    while (i < record->size && !findFlag)
    {
        if (compareString(record->data[i]->name, temp))
        {
            findFlag = true;
        }
        i = i + 1;
    }

    if (findFlag)
    {
        return &(*record->data[i - 1]);
    }
}

void resizeSet(SetRecord *record)
{
    Set ** temp = new Set * [record->capacity * 2];
    for (int i = 0; i < record->capacity; i = i+1)
    {
        temp[i] = record->data[i];
    }
    delete[] record->data;
    record->data = temp;
}

void resizeSet(Set& set)
{
    int* temp = new int[set.capacity * 2];
    for (int i = 0; i < set.size; i++)
    {
        temp[i] = set.data[i];
    }
    delete[] set.data;
    set.data = temp;
    set.capacity = set.capacity * 2;
}

void addRecord(SetRecord *record, Set *set)
{
    if (record->size == record->capacity)
    {
        resizeSet(record);
    }
    record->data[record->size] = set;
    record->size = record->size + 1;
}

void createSet(SetRecord *record, char name[])
{
    Set *a = new Set;
    copyString(name,a->name);
    a->data = new int[10];
    a->index = record->size;
    addRecord(record, a);
}

void createSetApp(SetRecord *record)
{
    char arr[15];
    cout << "Enter the name of the set: ";
    cin >> arr;
    createSet(record, arr);
}

bool isELementFound(int* arr, int size, int number)
{
    for (int i = 0; i < size; i = i + 1)
    {
        if (number == arr[i])
        {
            return true;
        }
    }
    return false;
}


void inputElement(Set set, int * element)
{
    do
    {
        cout << "Enter element: ";
        cin >> *element;
        cout << (isELementFound(set.data, set.size, *element) ? "Enter Unique Element: " : "");
    }
    while (isELementFound(set.data, set.size, *element));
}

void addSetValue(Set *set,int amount)
{
    if (set->size == set->capacity)
    {
        resizeSet(*set);
    }
    int i,element;
    for (i = set->size; i < set->size+amount; i = i + 1)
    {
        inputElement(*set,&element);
        set->data[i] = element;
    }
    set->size = i;
}

void addSetValuesApp(SetRecord *record)
{
    displayAllSets(record);
    cout << "Enter the name of the set in which you want to add data: ";
    char arr[15];
    cin >> arr;
    Set *set = getSearchedSet(arr, record);
    int amount;
    cout << "Enter the amount of elements you wanna enter: ";
    cin >> amount;
    addSetValue(set,amount);
}

void freeSet(Set set, SetRecord *record)
{
    Set* a = record->data[set.index];
    delete[] a->data;
    record->data[set.index] = record->data[record->size-1];
    record->size = record->size - 1;
}

void deleteSetApp(SetRecord *record)
{
    displayAllSets(record);
    char arr[15];
    cout << "Enter the name of the set you want to delete: ";
    cin >> arr;
    Set *set = getSearchedSet(arr,record);
    freeSet(*set,record);
}

int getUnionSetSize(Set a, Set b)
{
    int unionSetSize = 0;
    for (int i = 0; i < a.size; i = i + 1)
    {
        if (isELementFound(a.data, a.size, b.data[i]))
        {
            unionSetSize = unionSetSize + 1;
        }
    }
    return unionSetSize;
}

Set getUnionSet(Set a, Set b)
{
    Set unionSet;
    unionSet.size = a.size + b.size - getUnionSetSize(a,b);
    unionSet.data = new int[unionSet.size];

    if (unionSet.size == unionSet.capacity)
    {
        resizeSet(unionSet);
    }

    int i;
    for (i = 0; i < a.size; i = i + 1)
    {
        unionSet.data[i] = a.data[i];
    }

    for (int j = 0; i < unionSet.size; j = j + 1)
    {
        if (!isELementFound(a.data, a.size, b.data[j]))
        {
            unionSet.data[i] = b.data[j];
            i = i + 1;
        }
    }
    return unionSet;
}

void getSetName(char *setA, char *setB, char * setName)
{
    int size = 4;
    size = copyString(setA, setName ,size);
    setName[size] = '&';
    size = size + 1;
    size = copyString(setB, setName ,size);
}

void setInterface(Set a, Set b, Set unionSet,int condition)
{
    cout << "Set " << a.name << " : ";
    printSet(a);
    cout << "Set " << b.name << " : ";
    printSet(b);
    cout << (condition == 0?"Union of ": "Intersection of ");
    cout << a.name << " & " << b.name << " : ";
    printSet(unionSet);

}

void getUnionSetApp(SetRecord *record)
{
    displayAllSets(record);
    char unionSetName[40] = "USet ";
    cout << "Enter the name of the sets you want to get union: \n";
    char  temp1[15], temp2[15];
    cout << "First Set: " ;
    cin >> temp1;
    cout << "Second Set: ";
    cin >> temp2;
    getSetName(temp1,temp2, unionSetName);
    Set *a = getSearchedSet(temp1,record);
    Set *b = getSearchedSet(temp2,record);
    Set* unionSet = new Set;
    *unionSet = getUnionSet(*a,*b);
    copyString(unionSetName,unionSet->name);
    unionSet->index = record->size;
    record->data[record->size] = unionSet;
    record->size = record->size + 1;
    setInterface(*a,*b,*unionSet,0);
}

int getIntersectionSetSize(Set a, Set b)
{
    int intersectionSetSize = 0;
    for (int i = 0; i < a.size; i = i + 1)
    {
        if (isELementFound(a.data, a.size, b.data[i]))
        {
            intersectionSetSize = intersectionSetSize + 1;
        }
    }
    return intersectionSetSize;
}

Set getIntersectionSet(Set a, Set b)
{
    Set intersectionSet;
    intersectionSet.size = getIntersectionSetSize(a, b);
    intersectionSet.data = new int[intersectionSet.size];
    int i;
    for (i = 0; i < intersectionSet.size;)
    {
        if (isELementFound(a.data, a.size, b.data[i]))
        {
            intersectionSet.data[i] = b.data[i];
            i = i + 1;
        }
    }
    return intersectionSet;
}

void getIntersectionSetApp(SetRecord *const record)
{
    displayAllSets(record);
    char interSectionSetName[40] = "ISet ";
    cout << "Enter the name of the sets you want to get intersection: \n";
    char  temp1[15], temp2[15];
    cout << "First Set: ";
    cin >> temp1;
    cout << "Second Set: ";
    cin >> temp2;
    getSetName(temp1, temp2, interSectionSetName);
    Set *a = getSearchedSet(temp1, record);
    Set *b = getSearchedSet(temp2, record);
    Set* interSectionSet = new Set;
    *interSectionSet = getIntersectionSet(*a, *b);
    copyString(interSectionSetName, interSectionSet->name);
    interSectionSet->index = record->size;
    record->data[record->size] = interSectionSet;
    record->size = record->size + 1;
    setInterface(*a, *b, *interSectionSet,1);
}

void printSetElementsApp(SetRecord* record)
{
    displayAllSets(record);
    char arr[15];
    cout << "Enter the name of the set which you want to see elements: ";
    cin >> arr;
    Set *a = getSearchedSet(arr,record);
    printSet(*a);

}

void performUserActions(char input, SetRecord *record)
{
    switch (input)
    {
        case '1':
        {
            createSetApp(record);
            break;
        }
        case '2':
        {
            addSetValuesApp(record);
            break;
        }
        case '3':
        {
            deleteSetApp(record);
            break;
        }
        case '4':
        {
            printSetElementsApp(record);
            break;
        }
        case '5':
        {
            getUnionSetApp(record);
            break;
        }
        case '6':
        {
            getIntersectionSetApp(record);
            break;
        }
        default:
        {
            return;
        }
    }
}

void setApp()
{
    SetRecord record;
    record.data = new Set * [15]; // Holds the adress of all the sets.

    char userInput;
    do
    {
        showMenu();
        getUserInput(&userInput);
        performUserActions(userInput, &record);
    }
    while (userInput != 'Q');
}

int main()
{
    setApp();
    return 0;
}