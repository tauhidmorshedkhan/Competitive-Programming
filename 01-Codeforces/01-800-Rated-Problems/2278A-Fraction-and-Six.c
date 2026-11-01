#include <stdio.h>

int main() {
    int t1, n1, m1;
    char x1, y1;
    scanf("%d", &t1);
    for (int i1 = 0; i1 < t1; i1++)
    {
        int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0;
        int i = 0, j = 0, k = 0, l = 0, m = 0, n = 0, o = 0, p = 0; 
        int q = 0, r = 0, s = 0, t = 0, u = 0, v = 0, w = 0, x = 0, y = 0, z = 0;
        scanf("%d %d", &n1, &m1);
        for (int i1 = 0; i1 < n1; i1++)
        {
            scanf(" %c", &x1);
            if (x1 == 'a')
            {
                a++;
            }
            else if (x1 == 'b')
            {
                b++;
            }
            else if (x1 == 'c')
            {
                c++;
            }
            else if (x1 == 'd')
            {
                d++;
            }
            else if (x1 == 'e')
            {
                e++;
            }
            else if (x1 == 'f')
            {
                f++;
            }
            else if (x1 == 'g')
            {
                g++;
            }
            else if (x1 == 'h')
            {
                h++;
            }
            else if (x1 == 'i')
            {
                i++;
            }
            else if (x1 == 'j')
            {
                j++;
            }
            else if (x1 == 'k')
            {
                k++;
            }
            else if (x1 == 'l')
            {
                l++;
            }
            else if (x1 == 'm')
            {
                m++;
            }
            else if (x1 == 'n')
            {
                n++;
            }
            else if (x1 == 'o')
            {
                o++;
            }
            else if (x1 == 'p')
            {
                p++;
            }
            else if (x1 == 'q')
            {
                q++;
            }
            else if (x1 == 'r')
            {
                r++;
            }
            else if (x1 == 's')
            {
                s++;
            }
            else if (x1 == 't')
            {
                t++;
            }
            else if (x1 == 'u')
            {
                u++;
            }
            else if (x1 == 'v')
            {
                v++;
            }
            else if (x1 == 'w')
            {
                w++;
            }
            else if (x1 == 'x')
            {
                x++;
            }
            else if (x1 == 'y')
            {
                y++;
            }
            else if (x1 == 'z')
            {
                z++;
            }
        }
        for (int i1 = 0; i1 < m1; i1++)
        {
            scanf(" %c", &y1);
            if (y1 == 'a')
            {
                a--;
            }
            else if (y1 == 'b')
            {
                b--;
            }
            else if (y1 == 'c')
            {
                c--;
            }
            else if (y1 == 'd')
            {
                d--;
            }
            else if (y1 == 'e')
            {
                e--;
            }
            else if (y1 == 'f')
            {
                f--;
            }
            else if (y1 == 'g')
            {
                g--;
            }
            else if (y1 == 'h')
            {
                h--;
            }
            else if (y1 == 'i')
            {
                i--;
            }
            else if (y1 == 'j')
            {
                j--;
            }
            else if (y1 == 'k')
            {
                k--;
            }
            else if (y1 == 'l')
            {
                l--;
            }
            else if (y1 == 'm')
            {
                m--;
            }
            else if (y1 == 'n')
            {
                n--;
            }
            else if (y1 == 'o')
            {
                o--;
            }
            else if (y1 == 'p')
            {
                p--;
            }
            else if (y1 == 'q')
            {
                q--;
            }
            else if (y1 == 'r')
            {
                r--;
            }
            else if (y1 == 's')
            {
                s--;
            }
            else if (y1 == 't')
            {
                t--;
            }
            else if (y1 == 'u')
            {
                u--;
            }
            else if (y1 == 'v')
            {
                v--;
            }
            else if (y1 == 'w')
            {
                w--;
            }
            else if (y1 == 'x')
            {
                x--;
            }
            else if (y1 == 'y')
            {
                y--;
            }
            else if (y1 == 'z')
            {
                z--;
            }
        }
        if (s == 1 && i == 1 && x == 1)
        {
            if (a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f == 0 && 
                g == 0 && h == 0 && j == 0 && k == 0 && l == 0 && m == 0 && 
                n == 0 && o == 0 && p == 0 && q == 0 && r == 0 && t == 0 && 
                u == 0 && v == 0 && w == 0 && y == 0 && z == 0)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
        else
        {
            printf("NO\n");  
        }
    }
    return 0;
}