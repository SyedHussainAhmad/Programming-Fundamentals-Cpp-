//#include<iostream>
//using namespace std;
//
//int findSubString(const char *destination, const char * key, int start = 0)
//{
//	int index = -1;
//	int i = start;
//	while (destination[i] != '\0')
//	{
//		if (destination[i] == key[i])
//		{
//			index = i;
//			i = i + 1;
//			int cnt = 1, keyLen = 1;
//			while (key[keyLen] != '\0')
//			{
//				if (destination[i] == key[cnt])
//				{
//					cnt = cnt + 1;
//					i = i + 1;
//				}
//				keyLen = keyLen + 1;
//			}
//			if (cnt == keyLen)
//			{
//				return index;
//			}
//		}
//	}
//	return index;
//}
//
//void printAllOccurances(const char* destination, const char* key)
//{
//	int i = 0;
//	while (destination[i]!= '\0')
//	{
//		i = findSubString(destination,key, i);
//		if (i!=-1)
//		{
//			cout << i;
//		}
//		i = i + 1;
//	}
//}
//
//int searchNameList(const char destination[][20], int rows, const char * key)
//{
//	int index = -1;
//	int i = 0;
//	bool searchFLag = false;
//	while (i < rows && (!searchFLag))
//	{
//		index = findSubString(destination[i], key);
//		if (index != -1)
//		{
//			index = i;
//			searchFLag = true;
//		}
//		i = i + 1;
//	}
//	return index;
//}
//
//int main()
//{
//	cout << findSubString("BSEF22 Batch Morning Batch", "Batch") << '\n';/*
//	cout << findSubString("BSEF22 Batch Morning Batch", "tch") << '\n';
//	cout << findSubString("BSEF22 Batch Morning Batch", "Batch", 10) << '\n';*/
//    cout << endl;
//    return 0;
//}