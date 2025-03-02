class Practical6
{
// 1.1st Pattern
void display1(int size) 
{
    for (int ln = 1; ln <= size; ln++) {
        for (int spaces = size - ln; spaces > 0; spaces--) {
            System.out.print(" ");
        }
        for (int symbols = 1; symbols <= 2*ln-1; symbols++) {
            if(symbols%2==1){
              System.out.print("+");
            }
            else{
               System.out.print(" ");
            }
        }
        System.out.println();
    }
    for(int ln=size-1;ln>=1;ln--){
      for(int spaces=1;spaces<=size-ln;spaces++){
        System.out.print(" ");
      }
      for(int symbols=1;symbols<=2*ln-1;symbols++){
        if(symbols%2==1){
          System.out.print("*");
        }
        else{
          System.out.print(" ");
        }
      }
      System.out.println();
    }
 }
  
  //2.2nd Pattern
void display2(int size)
 {
    for(int ln=1;ln<=size;ln++){
      for(int spaces=size-ln;spaces>0;spaces--){
          System.out.print(" ");
      }
      for(int symbols=1;symbols<=2*ln-1;symbols++){
            System.out.print("+");
      }
      System.out.println();
      }
      
      for(int ln=size-1;ln>=1;ln--){
          for(int spaces=1;spaces<=size-ln;spaces++){
              System.out.print(" ");
          }
          for(int symbols=1;symbols<=2*ln-1;symbols++){
              System.out.print("+");
          }
          System.out.println();
      }
 }
 
 
 //3.3rd Pattern
 void display3(int size)
 {
    for(int ln=1;ln<=size;ln++){
      for(int spaces=size-ln;spaces>0;spaces--){
          System.out.print(" ");
      }
      for(int symbols=1;symbols<=2*ln-1;symbols++){
      
          if(ln%2==0){
            if(symbols%2==1){
               System.out.print("+");
            }
            else{
              System.out.print("*");
            }
           }
            else if(symbols%2==1){
              System.out.print("*");
            }
            else{
              System.out.print("+");
            }
      }
      System.out.println();
      }
      
      for(int ln=size;ln>=1;ln--){
        for(int spaces=1;spaces<=size-ln;spaces++){
          System.out.print(" ");
        }
        for(int symbols=1;symbols<=2*ln-1;symbols++){
           if(ln%2==0){
            if(symbols%2==1){
               System.out.print("*");
            }
            else{
              System.out.print("+");
            }
           }
            else if(symbols%2==1){
              System.out.print("+");
            }
            else{
              System.out.print("*");
            }
        }
        System.out.println();
      }
   }
   
   public static void main(String args[])
   {
    Practical6 obj1=new Practical6();
   	obj1.display1(5);
   	
   	Practical6 obj2=new Practical6();
   	obj2.display2(5);
   	
   	Practical6 obj3=new Practical6();
   	obj3.display3(5);
   }
   
 }
