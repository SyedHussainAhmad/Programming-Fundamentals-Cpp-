//#include<iostream>
//using namespace std;
//struct Set
//{
//	int* data = nullptr;
//	int nOfElement = 0;
//	int capacity = 4;
//};
//void createSet(Set* s)
//{
//	(*s).data = new int[(*s).capacity];
//}
//void printSet(Set& s)
//{
//	cout << "{";
//	for (int i = 0; i < (s.nOfElement - 1); i++)
//	{
//		cout << s.data[i] << ",";
//	}
//	cout << s.data[s.nOfElement - 1] << "}";
//}
//void deleteSet(Set s)
//{
//	if (s.data != nullptr)
//		delete[] s.data;
//	s.data = nullptr;
//}
//void resizeSet(Set& s)
//{
//	int* temp = new int[s.capacity * 2];
//	for (int i = 0; i < s.nOfElement; i++)
//	{
//		temp[i] = s.data[i];
//	}
//	deleteSet(s);
//	s.data = temp;
//	s.capacity = s.capacity * 2;
//}
//int findElement(Set& s, int element)
//{
//	int i = 0;
//	while (i < s.capacity && s.data[i] != element)
//	{
//		i = i + 1;
//	}
//	return i == s.capacity ? -1 : i;
//}
//bool addElement(Set& s, int element)
//{
//	if (findElement(s, element) != -1)
//		return false;
//	if (s.nOfElement == s.capacity)
//		resizeSet(s);
//	s.data[s.nOfElement] = element;
//	s.nOfElement = s.nOfElement + 1;
//}
//int getCommonElements(Set& setA, Set& setB)
//{
//	int common = 0;
//	for (int i = 0; i < setA.capacity; i++)
//	{
//		for (int j = 0; j < setB.capacity; j++)
//		{
//			if (setA.data[i] == setB.data[j])
//			{
//				common = common + 1;
//			}
//		}
//	}
//	return common;
//}
//void getUnion(Set& setA, Set& setB)
//{
//	int comElements = getCommonElements(setA, setB);
//	int unionSetSize = setA.capacity + setB.capacity - comElements;
//	Set unionSet;
//	unionSet.capacity = unionSetSize;
//	createSet(&unionSet);
//	for (int i = 0; i < setA.nOfElement; i++)
//	{
//		unionSet.data[unionSet.nOfElement] = setA.data[i];
//		unionSet.nOfElement = unionSet.nOfElement + 1;
//	}
//	for (int i = 0; i < setB.capacity; i++)
//	{
//		if (findElement(setA, setB.data[i]) == -1)
//		{
//			unionSet.data[unionSet.nOfElement] = setB.data[i];
//			unionSet.nOfElement = unionSet.nOfElement + 1;
//		}
//	}
//	printSet(unionSet);
//}
//int main()
//{
//	Set setA, setB;
//	createSet(&setA);
//	addElement(setA, 1);
//	addElement(setA, 2);
//	addElement(setA, 1);
//	addElement(setA, 4);
//	createSet(&setB);
//	addElement(setB, 4);
//	addElement(setB, 5);
//	addElement(setB, 6);
//	addElement(setB, 1);
//	getUnion(setA, setB);
//	cout << endl;
//	return 0;
//}
