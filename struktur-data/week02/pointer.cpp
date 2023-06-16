// #include <iostream>

// using namespace std;

// int main () {
//   // int y = 5;
//   // int *ptr = &y;

//   // cout << y << endl;
//   // cout << ptr << endl;

//   // int num;
//   // int *ptr;

//   // ptr = &num;
//   // *ptr = 100;

//   // cout << num;
//   // cout << endl;

//   // cout << *ptr;
//   // cout << endl;

//   // cout << ptr;
//   // cout << endl;

//   // int x = 2;
//   // cout << ptr + x;
//   // cout << endl;

//   // int arr[10];

//   // cout << &arr << endl;
//   // cout << &arr[0] << endl;
//   // cout << &arr[1] << endl;
//   // cout << &arr[2] << endl;

//   // int x = 5;
//   // int* addr = &x;

//   // cout << x << endl;
//   // cout << &x << endl;
//   // cout << addr << endl;
//   // cout << &addr << endl;

//   // int a;
//   // int *b;
//   // int **c;
//   // int ***d;

//   // a = 1;
//   // b = &a;
//   // c = &b;
//   // d = &c;

//   // cout << a << endl;
//   // cout << *b << endl;
//   // cout << **c << endl;
//   // cout << ***d << endl;

//   // int x, y;
//   // int *px;

//   // x = 87;
//   // px = &x;
//   // y = *px;

//   // cout << &x << endl;
//   // cout << px << endl;
//   // cout << x << endl;
//   // cout << y << endl;
//   // cout << &px << endl;

//   // float d = 54.5f;
//   // float *pd;

//   // cout << "isi mula-mula " << d << endl;

//   // pd = &d;
//   // *pd += 10;

//   // cout << "isi sekarang " << d << endl;

//   return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #define MAX 20
// int *fibo;

// int main()
// {
//   int i;
//   fibo = (int *)malloc(MAX * sizeof(int));
//   *(fibo + 1) = 1;
//   *(fibo + 2) = 1;
//   for (i = 3; i <= MAX; i++)
//   {
//     *(fibo + i) = (*(fibo + i - 2) + *(fibo + i - 1));
//   }
//   printf("%d Bilangan Fibonaci Pertama adalah : \n", MAX);
//   for (i = 1; i < MAX; i++)
//   {
//     printf("%d", *(fibo + i));
//     printf("\n");
//   }
//   printf("\n");

//   return 0;
// }


#include <iostream>

using namespace std;

// int main()
// {
// char *s ="Pointer mudah digunakan.\n";
// cout << s;
// cout << s[0] << endl;
// cout << s[1] << endl;
// cout << s[2] << endl;

// return 0;
// } 


// int main()
// {
//   int num[10];
//   int *p = num;

//   cout << *p << endl;
//   p++;
//   cout << *p << endl;


//   // int num[10];
//   // int  *start, *end;
//   // start = num;
//   // end = &num[9];
//   // while(start != end) {
//   //   cout << start << endl;
//   //   cout << end << endl;
//   //   cout << "Masukkan bilangan sebanyak  9 data : ";
//   //   cin >> *start;
//   //   start++;
//   // }
//   return 0;
// }

