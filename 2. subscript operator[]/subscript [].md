# Array subscripting operator [ ]
  1. The expression a[b] is equivalent to the expression *((a) + (b)), and, because addition is associative, it is also equivalent to b[a].
  2. between expressions a and b, __one must be a pointer to a type T__, and the other must have integral or enumeration type.

```cpp
int main(void) {
   int a[3] = { 10, 20, 30 };
   printf("a[0] = %d\n", a[0]);
   printf("a[1] = %d\n", 1[a]);
   printf("a[2] = %d\n", *(2 + a));
   return 0;
}

Output:
  a[0] = 10
  a[1] = 20
  a[2] = 30
```
