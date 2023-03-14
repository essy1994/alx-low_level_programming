#include "main.h"
#include <math.h>
int sqrt_helper(int n, int start, int end)
{
   int mid = (start + end) / 2;
   int result = mid * mid;

  /* Base case */
   if (start > end)
     return (-1);
   if (result == n)              /* If n has a natural square root */
     return (mid);

   if (result < n)
     return (sqrt_helper(n, mid + 1, end));
   else
     return (sqrt_helper(n, start, mid - 1));
}

int _sqrt_recursion(int n)
{
   if (n < 0)                    /* If n is negative, return -1 */
     return (-1);

   return (sqrt_helper(n, 0, n));
}
