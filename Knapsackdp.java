//java program to solve o/i knapsack problem using dynamic programming method
import java.util.Scanner;
public class Knapsackdp {
    public void solve(int wt[], int val[], int m, int n)
{
int i,j;
int sol[][] = new int[20][20];
for ( i = 0; i <= n; i++)
{
for ( j = 0; j <= m; j++)
{
if(i==0||j==0)
sol[i][j]=0;

else if(wt[i]>j)
sol[i][j]=sol[i-1][j];

else
sol[i][j]=Math.max((sol[i-1][j]), (sol[i - 1][j - wt[i]] + val[i]));
}
}
System.out.println("The max profit is "+sol[n][m]);

int selected[]  = new int[20];
for(i=0;i<n+1;i++)
selected[i]=0;
 i=n;
j=m;    
while (i>0&&j>0)
{
if (sol[i][j] !=sol[i-1][j])
{
selected[i] = 1;
j = j - wt[i];
}
i--;
}
System.out.println("\nItems selected : ");
for ( i = 1; i < n + 1; i++)
if (selected[i] == 1)
System.out.print(i +" ");
 System.out.println();
}
    
public static void main(String[] args)
{
Scanner sc = new Scanner(System.in);
Knapsackdp ks = new Knapsackdp();
System.out.println("Enter number of elements ");
int n = sc.nextInt();
int weight[]  = new int[20];
int  profit[] = new int[20];
System.out.println("\nEnter weight for "+ n +"elements");
for (int i = 1; i <= n; i++)
weight[i] = sc.nextInt();
 System.out.println("\nEnter profit for "+ n +"elements");
for (int i = 1; i <= n; i++)
profit[i] = sc.nextInt();
 System.out.println("\nEnter knapsack weight ");
 int m = sc.nextInt();
ks.solve(weight, profit, m, n);
}
}

