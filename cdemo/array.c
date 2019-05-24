#include <stdio.h>


int arrayAdd(int* arr, int s, int n)
{
        for (int i = 0; i < s; i++)
        {
        arr[i] = arr[i] + n;
        printf("%d\n", arr[i]);
        }
}

int main()
{

int arr[11];

for (int i = 0; i < 11; i++)
{
	arr[i] = i * i;
}

arrayAdd(arr,11,1);

}


