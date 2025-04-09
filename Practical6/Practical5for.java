class Practical5   
{     
    public static void main(String args[])         
    {
    
       Practical5 fact1=new Practical5();
       System.out.println("Factorial Using For Loop : " + fact1.factorial1(2));
       
       Practical5 fact2=new Practical5();
       System.out.println("Factorial Using While Loop : " + fact2.factorial2(5));
       
       Practical5 fact3=new Practical5();
       System.out.println("Factorial Without Using Any Loop : " +fact3.factorial3(5));
       
       Practical5 sum=new Practical5();
       int [] arr={1,2,3,4,5};
       System.out.println("Sum Of Array : " + sum.Calsum(arr,0));
     }
    
    //Using For Loop
    int factorial1(int num)
    {
    
      if(num==0 || num==1)
      {
        return 1;
      }
      
      int fact=1;
      for(int i=2;i<=num;i++)
      {
        fact*=i;
      }
      return fact;
    }

    //Using While Loop
    int factorial2(int num)
    {
    
      if(num==0 || num==1)
      {
        return 1;
      }
      
      int fact=1;
      int i=2;
      while(i<=num)
      {
        fact*=i;
        i++;
      }
      return fact;
    }

    //Without using any loop
    int factorial3(int num)
    {
    
      if(num==0 || num==1)
      {
        return 1;
      }
      return num*factorial3(num-1);
      
    }
    
    int Calsum(int[] arr, int index)
    {
        if(index==arr.length)
        {
          return 0;
        }
        return arr[index]+Calsum(arr,index+1);
    }
}
