#include<stdio.h>
struct poly
{
	int coeff;
	int exp;
};
int main()
{
	struct poly f[50],s[50],t[50],d[50];
	int deg1,deg2,k=0,l=0,m=0,i;
	printf("Enter the highest degree of first poly 1  ");
	scanf("%d",&deg1);
	printf("Enter the highest degree of second polynomial  ");
	scanf("%d",&deg2);
	
	for(i=0;i<=deg1;i++)
	{
		printf("Enter the coefficient of x^%d of first polynomial ",i);
		scanf("%d",&f[i].coeff);
		f[k++].exp=i;
	}
	
	for(i=0;i<=deg1;i++)
	{
		printf("Enter the coefficient of x^%d of second polynomial ",i);
		scanf("%d",&s[i].coeff);
		s[l++].exp=i;
	}
	
	if(deg1>deg2)
	{
		for(i=0;i<=deg2;i++)
		{
			t[m].coeff=f[i].coeff+s[i].coeff;
			t[m].exp=f[i].exp;
			m++;
		}
		for(i=deg2+1;i<=deg1;i++)
		{
			t[m].coeff=f[i].coeff;
			t[m].exp=f[i].exp;
			m++;
		}
	}
	
	else
	{
		for (i = 0; i <= deg1; i++)
        	{
            		t[m].coeff = f[i].coeff + s[i].coeff;
            		t[m].exp = s[i].exp;
            		m++;
        	}
        	for (i = deg1 + 1; i <= deg2; i++)
        	{
            		t[m].coeff = s[i].coeff;
            		t[m].exp = s[i].exp;
            		m++;
       	 }

    }
      for (i = 0; i <= deg1; i++)
        {
            printf("%d", t[i].coeff);
            printf("x^%d ", t[i].exp);
        }

    return 0;
}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	
	
	
			
