/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Ppran
 */



import java.util.*;
public class prims {
    public static void main(String[] args){
        int i,j,source,vertex,n;
        int v=0,u=0,min,sum=0;
        Scanner sc=new Scanner(System.in);
        int weight[][]=new int[10][10];
        int value[]=new int[1000];
        System.out.println("enter the number of vertex");
        n=sc.nextInt();
        for(i=0;i<n-1;i++)
            value[i]=0;
        System.out.println("enter weight");
        for(i=0;i<=n-1;i++)
            for(j=0;j<=n-1;j++)
                weight[i][j]=sc.nextInt();
        System.out.println("enter source");
        source=sc.nextInt();
        value[source]=1;
        vertex=1;
        while(vertex<=n-1)
        {
            min=999;
            for(i=0;i<=n-1;i++){
                for(j=0;j<=n-1;j++){
                    if(value[i]==1 && value[j]==0){
                        if(i!=j && min>weight[i][j]){
                            min=weight[i][j];
                            u=i;
                            v=j;
                        }
                    }
                }
            }
            value[v]=1;
            sum=sum+min;
            vertex++;
            System.out.println(u+"-->"+v+"="+min);
                            
        }
        System.out.println("the cost=="+sum);
        
        
    }
    
}
