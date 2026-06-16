using System;
using System.Collections.Specialized;

class Program
{
    

    static void Main()
    {
        int[] numerosDigi = new int[5];
        int maiorValor = 0;

        Console.WriteLine("Digite os 5 numeros:");
        for(int i = 0; i < 5; i++)
        {
            numerosDigi[i] = int.Parse(Console.ReadLine()!);
        }

        for(int i = 0; i < 5; i++)
        {
            Console.Write($"Vetor: {numerosDigi[i]}  ");
            
        }
        
        //maiorValor = Array.Find(numerosDigi,);
        Array.Sort(numerosDigi);
        Console.WriteLine($"O maior valor é: {numerosDigi[4]}");
    }
}
