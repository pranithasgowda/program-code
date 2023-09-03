/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Ppran
 */
import java.util.*;
public class Selectionsort {
    public static void selectionsort(int arr[],int n)
 {
 for(int i=0;i<n;i++)
 {
     int index=i;
     for(int j=i+1;j<n;j++)
         if (arr[j]<arr[index]){
             index=j;
         }
     int temp=arr[index];
     arr[index]=arr[i];
     arr[i]=temp;
     
 }
        
}

  
public static void main (String[] args)
{
    Selectionsort s=new Selectionsort();
    Scanner sc= new Scanner(System.in);
    System.out.println("enter array size");
    int n= sc.nextInt();
    int arr[]=new int[50000];
    Random r =new Random();
    System.out.println("unsorted");
    for(int i=0;i<n;i++)
    {
    arr[i]=r.nextInt(100);
    System.out.println(arr[i]);
    }
    long Starttime=System.nanoTime();
     s.selectionsort(arr,n);
    long Endtime=System.nanoTime();
   long  duration=Endtime-Starttime;
     System.out.println("sorted");
     for( int i=0;i<n;i++)
    System.out.println(arr[i]);
    System.out.println("time=="+ duration);
    
}
}