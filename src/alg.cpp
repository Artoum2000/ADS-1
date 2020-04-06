int cbinsearch(int* arr, int size, int value)
{
	int k = 0;
	int left = 0;
	int right = size - 1;
	while (left <= right) {
		int mid = (left + right) / 2;
		if (arr[mid] == value) {
			int p = mid - 1;
			while (arr[mid] == value) { k++; mid++; }
			while (arr[p] == value) { k++; p--; }
			return k;
		}
		else if (arr[mid] < value)
			left = mid + 1;
		else right = mid - 1;
	}
}
