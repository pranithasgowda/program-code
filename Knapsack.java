/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Ppran
 */

import java.util.*;
public class Knapsack
{
    public static void main(String[] args)
    {
        int i,j=0,n;
        float max,m,sum=0;
        Scanner sc=new Scanner(System.in);
        float profit[][]=new float[1][20];
        float weight[][]=new float[1][20];
        System.out.println("enter size");
        n=sc.nextInt();
        System.out.println("enter weight");
        for(i=0;i<n;i++)
        weight[0][i]=sc.nextInt();
         System.out.println("enter profit");
        for(i=0;i<n;i++)
        profit[0][i]=sc.nextInt();
         System.out.println("enter capacity");
        m=sc.nextInt();
        System.out.println("item no"+"\t"+"profit"+"\t"+"weight"+"fraction");
        while(m>=0)
        {
            max=0;
            for(i=0;i<n;i++)
            {
                if(profit[0][i]/weight[0][i]>max)
                {
                 max=profit[0][i]/weight[0][i];
                j=i;
                }
            }
            if(weight[0][j]>m){
                System.out.println((j+1)+"\t"+profit[0][j]+"\t"+weight[0][j]+"\t"+max);
                sum=sum+m*max;
                m=-1;
            }
            else{
                System.out.println((j+1)+"\t"+profit[0][j]+"\t"+weight[0][j]+"\t"+max);
                m=m-weight[0][j];
                sum=sum+profit[0][j];
              profit[0][j]=0;
            }
        }
        System.out.println("the total profit"+sum);
    }
}

