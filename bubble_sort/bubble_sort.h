#pragma once


namespace random_templates
{
	template < typename T1>
	void Swap(T1& A, T1& B);

	template < typename T1, typename T2>
	void BubbleSortFirstArr(T1* Arr1, T2* Arr2, size_t dSize)
	{
		bool bIsSwapped;

		for (size_t i = 0; i < dSize - 1; ++i)
		{
			bIsSwapped = false;

			for (size_t j = 0; j < dSize - 1 - i; ++j)
			{

				if (Arr1[j] > Arr1[j + 1])
				{
					Swap<T1>(Arr1[j], Arr1[j + 1]);
					Swap<T2>(Arr2[j], Arr2[j + 1]);
					bIsSwapped = true;
				}
			}

			if (!bIsSwapped)
			{
				break;
			}
		}
	}


	template < typename T1>
	void BubbleSortArr(T1* Arr1, size_t dSize)
	{
		bool bIsSwapped;

		for (size_t i = 0; i < dSize - 1; ++i)
		{
			bIsSwapped = false;

			for (size_t j = 0; j < dSize - 1 - i; ++j)
			{

				if (Arr1[j] > Arr1[j + 1])
				{
					Swap<T1>(Arr1[j], Arr1[j + 1]);
					bIsSwapped = true;
				}
			}

			if (!bIsSwapped)
			{
				break;
			}
		}
	}


	template < typename T1>
	void Swap(T1& A, T1& B)
	{
		T1 temp = A;
		A = B;
		B = temp;
	}


}