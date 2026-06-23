using System;
using System.Collections.Specialized;

class Program
{
    static void Main()
    {
        int[,] numeros = new int[3,3];
        int soma = 0;

        Console.WriteLine("Digite os 9 numeros: ");

        for(int i =0; i < numeros.GetLength(0); i++)
        {
            for(int j = 0; j < numeros.GetLength(1); j++)
            {
                numeros[i, j] = int.Parse(Console.ReadLine()!);
            }
        }

        Console.WriteLine("Matriz: ");
        for(int i =0; i < numeros.GetLength(0); i++)
        {
            for(int j =0; j < numeros.GetLength(1); j++)
            {
                Console.Write(numeros[i, j] + "\t");
                soma += numeros[i, j];
            }
            Console.WriteLine();
        }
        Console.WriteLine("Soma: " + soma);
    }
}
