// iterative
#include <stdio.h>
#include <conio.h>

int binarySearch(int arr[], int low, int high, int x)
{
    while (low <= high) {
	int mid = low + (high - low) / 2;


	if (arr[mid] == x)
	    return mid;

	if (arr[mid] < x)
	    low = mid + 1;

	else
	    high = mid - 1;
    }

    return -1;
}

int main(void)
{
    int arr[] = {1, 2, 3, 4, 10, 15, 30 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 15;
    int result = binarySearch(arr, 0, n - 1, x);
    clrscr();
      if(result == -1) printf("Element is not present in array");
   else printf("Element is present at index %d",result);
   getch();
      return 0;
}

