
#include <iostream>
#include<conio.h>
using namespace std;
 
int flag = 0;
void insertData(int arr[50], int value, int position) {
int i, tmp1, tmp2;

if (flag > position)
 {
 arr[flag++] = value;
 } else {
 tmp1 = arr[position - 1];
 arr[position - 1] = value;
 for (i = position; i < flag; i++) {
 tmp2 = arr[i];
 arr[i] = tmp1;
 tmp1 = tmp2;
 }
 arr[flag++] = tmp1;
 }
 return;
 }

// delete array element:
void delElement(int arr[50], int value) {
int i, flag = 0, position;
 for (i = 0; i < flag; i++) {
 if (value == arr[i]) {
 position = i + 1;
 flag = 1;
 break;
 }
 }
 if (!flag) {
cout << "Data is not exixt" << endl;
 } else {
 for (i = position; i < flag; i++)
 arr[i - 1] = arr[i];
 flag--;
 }
 return;
 }

 /** search val in the given array **/
 void searchData(int *array, int value) {
 int i;
 for (i = 0; i < flag; i++) {
 if (array[i] == value) {
 printf("%d is present in the input array!!\n", value);
 return;
 }
 }
 printf("%d is not present \n", value);
 return;
 }
 /** print the contents of the array **/
 void display(int *arr) {
 int i;
 for (i = 0; i < flag; i++) {
 printf("%d ", arr[i]);
 }
 printf("\n\n");
 return;
 }
 int main(int argc, char **argv) {
 int i, data[50];
 if (argc >= 50) {
 printf("Count done\n");
 return 0;
 }
 for (i = 1; i < argc; i++) {
 insertData(data, atoi(argv[i]), i);
 }
 printf("Given array------ \n");
 insertData(data, 25, 1);
 insertData(data, 50, 2);
 insertData(data, 100, 3);
 insertData(data, 200, 4);
 insertData(data, 500, 5);
 display(data);
 printf("Deleting 25 & 50 form the array\n");
 delElement(data, 25);
 delElement(data, 50);
 display(data);
 searchData(data, 100);
 searchData(data, 1000);
 printf("Add 10 & 20 at the position 1 & 2 correspondingly\n");
 insertData(data, 10, 1);
 insertData(data, 20, 2);
 printf("After inserting 10 and 20:\n");

 display(data);
 return 0;
 }