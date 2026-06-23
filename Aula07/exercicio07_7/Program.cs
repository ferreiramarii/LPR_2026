using System;
using System.Collections.Specialized;

class Program
{
    static void Main()
    {
        int[,] A = new int [3, 3];
        int[,] B = new int [3, 3];
        int linha1_A = 0;

        Console.WriteLine("Digite a primeira matriz de 9 numeros: ");

        for(int i =0; i < A.GetLength(0); i++)
        {
            for(int j = 0; j < A.GetLength(1); j++)
            {
                A[i, j] = int.Parse(Console.ReadLine()!);
            }
        }

        Console.WriteLine("Digite a segunda matriz de 9 numeros: ");

        for(int i =0; i < B.GetLength(0); i++)
        {
            for(int j = 0; j < B.GetLength(1); j++)
            {
                B[i, j] = int.Parse(Console.ReadLine()!);
            }
        }

        Console.WriteLine("Matriz A: ");
        for(int i = 0; i < A.GetLength(0); i++)
        {
            for(int j =0; j < A.GetLength(1); j++)
            {
                Console.Write(A[i, j] + "\t");
            }
            Console.WriteLine();
        }
        
        Console.WriteLine("Matriz B: ");
        for(int i = 0; i < B.GetLength(0); i++)
        {
            for(int j =0; j < B.GetLength(1); j++)
            {
                Console.Write(B[i, j] + "\t");
            }
            Console.WriteLine();
        }
        for (int j = 0; j < A.GetLength(1); j++)
        {
             produto *= matriz[0, j];
        }

    }
}    