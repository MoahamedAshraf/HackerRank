#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
double Area(triangle* t,int i)
{
    double p = (t[i].a + t[i].b + t[i].c)/2.0;
    double res;
    res = sqrt(p*(p-t[i].a)*(p-t[i].b)*(p-t[i].c));
    return res;


}
void sort_by_area(triangle* tr, int n) 
{
	double x,y;
    int i,j;
    triangle temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            x = Area(tr,j);
            y = Area(tr,j+1);
            if(x>y)
            {
                temp = tr[j];
                tr[j] = tr[j+1];
                tr[j+1] = temp;
                
            }
        }
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}