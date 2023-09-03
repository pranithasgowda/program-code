//sort the elements using merge sort
import java.util.Scanner;
import java.util.Random;
public class Mergesort
{
    void Merge(int a[],int low,int mid,int high)
    {
        int h=low;
        int i=low;
        int j=mid+1;
        int b[]=new int[10000];
        while(h<=mid && j<=high)
        {
            if(a[h]<a[j])
            {
                b[i]=a[h];
                h++;
               i++;
            }
            else{
                b[i]=a[j];
                j++;
                i++;
               
            }
           
        }
        if(h>mid)
        {
            for(int k=j;k<high;k++)
                b[i]=a[k];
            i++;
        }  
        else
        {
            for(int k=h;k<mid;k++)
                b[i]=a[k];
            i++;
        }
        for(int k=low;k<high;k++)
        {
            a[k]=b[k];
        }
                
    }

void sort(int a[],int low,int high)
{
 if(low<high)
 {
  int mid=(low+high)/2;
  sort(a,low,mid);
  sort(a,mid+1,high);
  Merge(a,low,mid,high);
 }
}
public static void main(String[] args)
{
Mergesort m=new Mergesort();
int a[]=new int[10000];
System.out.println("enter the array size");
Scanner sc=new Scanner(System.in);
int n=sc.nextInt();
Random generator=new Random();
System.out.println("unsorted");
for( int i=0;i<n;i++)
{
   a[i]=generator.nextInt(n);
   System.out.println(a[i]);
}
long StartTime=System.nanoTime();
m.sort(a,0,n-1);
long StopTime=System.nanoTime();
long ElaspeTime=(StopTime-StartTime);
System.out.println("sorted");
for(int i=0;i<n;i++)
   System.out.println(a[i]);
System.out.println(ElaspeTime+"nanoseconds");
}
}
