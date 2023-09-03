/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Ppran
 */

import java.util.Random;
import java.util.Scanner;
public class Quicksort 
{
    public static int partition (int arr[],int p,int r)
    {
        int pivot = arr[r];
        int i =p-1;
        for(int j=p;j<=r-1;j++)
        {
            if (arr[j]<= pivot)
            { 
                i=i+1;
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                        
            }
        } 
                int temp=arr[i+1];
                arr[i+1]=arr[r];
                arr[r]=temp;
                
        
          return(i+1);
            
    }
    public static void quicksort( int arr[],int p,int r){
        if(p<r){
            int q= partition(arr ,p,r);
            quicksort(arr,p,q-1);
            quicksort(arr,q+1,r);
            
        }
    }

public static void main (String[] args)
{
int n;
Scanner sc =new Scanner(System.in);
System.out.println("enter the array size");
n=sc.nextInt();
int arr[]=new int[10000];
Random r=new Random();
System.out.println("system generate number");
for(int i=0;i<n;i++){
    arr[i]=r.nextInt(10000);
    System.out.println(arr[i]+"");
    
}
long Starttime=System.nanoTime();
Quicksort  q =new Quicksort();
q.quicksort(  arr,0,n-1);
long Endtime=System.nanoTime();
long duration =Endtime-Starttime;
System.out.println("after sorting");
for(int i=0;i<n;i++)

    System.out.println(arr[i]+"");

System.out.println("duration="+ duration);
}

}
