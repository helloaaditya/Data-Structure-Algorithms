//program to demonstrate binary search
#include <iostream>
using namespace std;
int main()
{
int a[10], i, n, item, beg, end, mid, loc;
cout << "Enter the number of elements in the array: ";
cin >> n;
cout << "Enter the elements of the array in ascending order: ";
for (i = 0; i < n; i++)
cin >> a[i];
cout << "Enter the element to be searched: ";
cin >> item;
beg = 0;
end = n - 1;
loc = -1;
while (beg <= end)
{
mid = (beg + end) / 2;
if (item == a[mid])
{
loc = mid;
break;
}
else if (item < a[mid])
end = mid - 1;
else
beg = mid + 1;
}
if (loc != -1)
cout << "Item found at location " << loc + 1;
else
cout << "Item not found";
return 0;
}



