
#include<iostream>
#include <conio.h>
using namespace std;

int flag = 0;
void insertData(int arr[40], int value, int position) {
int i, tmp1, tmp2;
if (flag < position)
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
void deleteData(int arr[50], int value) {
int i, flag = 0, position;
 for (i = 0; i < flag; i++) {
 if (value == arr[i]) {
 position = i + 1;
 flag = 1;
 break;
 }
 }
 if (!flag) {
 cout << "Data is not exist";
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
 cout << value << "not prenent ";
 return;
 }
 }
 
 cout << value << "is not present";
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

cout << "Array is:";
 insertData(data, 2, 1);
 insertData(data, 4, 2);
 insertData(data, 6, 3);
 insertData(data, 8, 4);
 insertData(data, 10, 5);
 display(data);
 // deleting the array:
 
 cout << "Deleting 6 and 100 form the array:" << endl;
 deleteData(data, 6);
 deleteData(data, 8);
 display(data);
 searchData(data, 4);
 searchData(data, 100);
 // add 10 and 20 in the array:
 cout << "add 10 and 20 into array" << endl;
 
 insertData(data, 10, 1);
 insertData(data, 20, 2);
 
 cout << "After inserting data:";

 display(data);
 return 0;
 }