class Practical8
{
    public void pattern1(int line,int size)
    {
        if(line<size+1)
        {
            System.out.println("* ".repeat(line));
            pattern1(line+1,size);
        }
        System.out.println("* ".repeat(line));
    }

    public static void pattern2(int line, int size) 
    {
        if (line > (size / 2) + 1) return;

        System.out.print("  ".repeat(((size / 2) + 1) - line));
        System.out.println("* ".repeat(2 * line - 1));

        pattern2(line + 1, size);
        if (line < (size / 2) + 1) 
        {
            System.out.print("  ".repeat(((size / 2) + 1) - line));
            System.out.println("* ".repeat(2 * line - 1));
        }

        if (line == 1) 
        {
            for (int i = 0; i < size; i++) 
            {
                System.out.println("  ".repeat(size / 2) + "+");
            }
        }
    }
  
    public void pattern3(int line, int size) 
    {
        if (line <= size) 
        {
            System.out.println(" ".repeat((size + 1) - line) + "* ".repeat(line));
            pattern3(line + 1, size);
           
            System.out.println(" ".repeat((size + 1) - line) + "/ ".repeat(line));
        } 
        else if (line == size + 1) 
        {
            System.out.println("+ ".repeat(line));
            pattern3(line + 1, size);
        }
    }

    public void pattern4(int line,int size)
    {
        if(line<size+1)
        {
            System.out.print("  ".repeat(size-line));
            if(line%2==0)
            {
                System.out.println("/ ".repeat(2*line-1));
            }
            else 
            System.out.println("* ".repeat(2*line-1));
            pattern4(line+1,size);
            System.out.print("  ".repeat(size-line));

            if(line%2!=0)
            {
                System.out.println("/ ".repeat(2*line-1));
            }
            else System.out.println("* ".repeat(2*line-1));
            
        }      
        
    }
    public static void main(String args[])
    {
        Practical8 obj = new Practical8();
        System.out.println("Pattern 1 :");
        obj.pattern1(1,3);
        System.out.println("Pattern 2 :");
        obj.pattern2(1,5);
        System.out.println("Pattern 3 :");
        obj.pattern3(1, 3);
        System.out.println("Pattern 4 :");
        obj.pattern4(1, 4);
    }
}
