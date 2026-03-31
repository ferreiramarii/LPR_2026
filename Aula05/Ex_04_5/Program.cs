using System;

class Program
{
    static void Main()
    {
        Console.Write("Digite um número: ");
        long numero = long.Parse(Console.ReadLine());

        long quadrado = numero * numero;
        Console.WriteLine($"O quadrado de {numero} é: {quadrado}");
        long guardaQuadrado = quadrado;

        long soma = 0;
        
        while (guardaQuadrado > 0)
        {
            soma += guardaQuadrado % 10; // Pega o último dígito
            guardaQuadrado /= 10;        // Remove o último dígito
        }

        Console.WriteLine($"A soma dos dígitos de {quadrado} é: {soma}");
    }
}
