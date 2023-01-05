# Pointers to Pointers

Pointers to pointers are variables that store the memory address of a pointer. They are used to store the address of a pointer to a variable, rather than the value of the variable itself.

Declaring a pointer to a pointer:

`int **pp;`

To use a pointer to a pointer, you can first assign the address of a pointer to it using the `&` operator. Then, you can use the pointer to pointer to access the value stored at the address stored in the pointer.

Example:
```
#include <stdio.h>

int main(void)
{
   int x = 10;
   int *p = &x;  // p stores the address of x
   int **pp = &p;  // pp stores the address of p

   printf("x = %d\n", x);
   *p = 20;  // modify the value of x through p
   printf("x = %d\n", x);
   **pp = 30;  // modify the value of x through pp
   printf("x = %d\n", x);

   return 0;
}
```
Output:
```
x = 10
x = 20
x = 30
```

Pointers to pointers can be useful in situations where you need to pass a pointer to a function and modify the value stored at the address stored in the pointer.

# Multidimensional Arrays

Multidimensional arrays are arrays of arrays, which means that they are arrays that contain a fixed number of elements, each of which is an array. Each element in a multidimensional array is also known as a "row".

Declaring a 2D array:
```
int array[2][3];

Initializing a 2D array:

int array[2][3] = {
   {1, 2, 3},
   {4, 5, 6}
};
```
Accessing elements in a 2D array:

`array[i][j]`

Printing the elements of a 2D array:

```
#include <stdio.h>

int main(void)
{
   int array[2][3] = {
      {1, 2, 3},
      {4, 5, 6}
   };
   int i, j;

   for (i = 0; i < 2; i++) {
      for (j = 0; j < 3; j++) {
         printf("%d ", array[i][j]);
      }
      printf("\n");
   }

   return 0;
}
```

Output:
```
1 2 3
4 5 6
```
# C Standard Library Functions for String Manipulation

The C standard library provides a number of functions for manipulating strings. Here are some of the most commonly used ones:

- `strlen`: returns the length of a null-terminated string
- `strcpy`: copies a null-terminated string
- `strncpy`: copies at most n characters of a null-terminated string
- `strcat`: concatenates (appends) one null-terminated string to the end of another
- `strncat`: concatenates at most n characters of one null-terminated string to the end of another
- `strcmp`: compares two null-terminated strings
- `strncmp`: compares at most n characters of two null-terminated strings
- `strstr`: searches for the first occurrence of a null-terminated string within another null-terminated string
- `strtok`: breaks a null-terminated string into a series of tokens, based on a specified delimiter
- `memset`: fills a block of memory with a specified value
- `memcpy`: copies a block of memory from one location to another
- `memmove`: copies a block of memory from one location to another, even if the locations overlap
It is important to note that these functions only work with null-terminated strings, which means that the strings must end with a '\0' character.

# Example usage of some of these functions:
```
#include <stdio.h>
#include <string.h>

int main(void)
{
char str1[20] = "Hello";
char str2[20] = "World";
char str3[20];

// strlen
printf("str1 length: %lu\n", strlen(str1));

// strcpy
strcpy(str3, str1);
printf("str3: %s\n", str3);

// strcat
strcat(str1, str2);
printf("str1: %s\n", str1);

// strcmp
if (strcmp(str1, str2) == 0) {
printf("str1 and str2 are equal\n");
} else {
printf("str1 and str2 are not equal\n");
}

// strstr
if (strstr(str1, "Wor") != NULL) {
printf("'Wor' found in str1\n");
}

// memset
memset(str3, 'a', 3);
printf("str3: %s\n", str3);

return 0;
}
```

Output:

```
str1 length: 5
str3: Hello
str1: HelloWorld
str1 and str2 are not equal
'Wor' found in str1
str3: aaa
