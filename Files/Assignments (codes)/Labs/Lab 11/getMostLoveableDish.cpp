//#include<iostream>
//using namespace std;
//
//int getValueFromSingleColumn(bool mat[][3], int N, int columnNo)
//{
//	int count = 0;
//	for (int i = 0; i < N; i=i+1)
//	{
//		if (mat[i][columnNo] == 1)
//		{
//			count = count + 1;
//		}
//	}
//	return count;
//}
//
//void swapElement(int *var1, int *var2)
//{
//	int tem = *var1;
//	*var1 = *var2;
//	*var2 = tem;
//}
//int getMostLoveableDish(bool mat[][3], int N, int M)
//{
//	int var1, var2, var1Index, var2Index=0, tem=0;
//	for (int i = 0; i < M; i = i + 1)
//	{
//		var1 = getValueFromSingleColumn(mat,N,i);
//		var1Index = i;
//		var2Index = i+1;
//		var2 = getValueFromSingleColumn(mat, N, i+1);
//		if (var2<var1)
//		{
//			swapElement(&var1Index,&var2Index);
//		}
//		tem = var2Index;
//	}
//	return tem;
//}
//
//int main()
//{
//	bool mat[3][3] = { {0,1, 1},{0,1, 0}, {1, 1, 1} };
//	cout << getMostLoveableDish(mat, 3, 3);
//    cout << endl;
//    return 0;
//}