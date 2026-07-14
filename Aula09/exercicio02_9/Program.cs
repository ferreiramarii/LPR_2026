using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;

class Program
{
    static void Main()
    {
        List<string> nomes = new();
        int quant = 0;
        
        Console.WriteLine("Insira a quantidade de numeros: ");
        quant = int.Parse(Console.ReadLine()!);

        for(int i = 0; i < quant; i++)
        {
            nomes.Add(Console.ReadLine()!);
        }

        nomes.Sort();

        foreach(string nome in nomes)
        {
            Console.WriteLine(nome);
        }
    }
}
