using System;

class Program
{
    

    static void Main()
    {
        int[] numerosDigi = new int[10];
        string num;

        for(int i = 0; i < 10; i++)
        {
            num = Console.ReadLine()!;
            numerosDigi[i] = int.Parse(num);  
        }
    }
}
