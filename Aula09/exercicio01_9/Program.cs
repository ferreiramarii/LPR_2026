using System;
using System.Collections.Specialized;
using System.Collections.Generic;

class Program
{
    static void Main()
    {
        List<int>notas = new();
        int media = 0;

        Console.WriteLine("Insira as notas:");

        for(int i=0;i < 5; i++)
        {
            Console.WriteLine("Nota: ");
            notas.Add(int.Parse(Console.ReadLine()!));
        }

        Console.WriteLine("Notas: ");
        foreach(int nota in notas)
        {
            Console.Write(nota + " ");
            Console.WriteLine("  ");
        }

        notas.Sort();
        Console.WriteLine("Maior nota: " + notas[4]);
        Console.WriteLine("Menor nota: " + notas[0]);

        Console.WriteLine(media);
    }
    
}
