using System.Linq.Expressions;

        Produto p1;
        Produto p2;
        Produto p3;
        float valor = 0;
        
        Console.WriteLine("Nome do primeiro produto: ");
        p1.Nome = Console.ReadLine() ?? "";
        Console.WriteLine("Codigo do primeiro produto: ");
        p1.Codigo = int.Parse(Console.ReadLine() ?? "0"); 
        Console.WriteLine("Preço do primeiro produto: ");
        p1.Preco = float.Parse(Console.ReadLine() ?? "0");
        Console.WriteLine("Quantidade do primeiro produto: ");
        p1.Quantidade = int.Parse(Console.ReadLine() ?? "0");

        Console.WriteLine("Nome do segundo produto: ");
        p2.Nome = Console.ReadLine() ?? "";
        Console.WriteLine("Codigo do segundo produto: ");
        p2.Codigo = int.Parse(Console.ReadLine() ?? "0"); 
        Console.WriteLine("Preço do segundo produto: ");
        p2.Preco = float.Parse(Console.ReadLine() ?? "0");
        Console.WriteLine("Quantidade do segundo produto: ");
        p2.Quantidade = int.Parse(Console.ReadLine() ?? "0");

        Console.WriteLine("Nome do terceiro produto: ");
        p3.Nome = Console.ReadLine() ?? "";
        Console.WriteLine("Codigo do terceiro produto: ");
        p3.Codigo = int.Parse(Console.ReadLine() ?? "0"); 
        Console.WriteLine("Preço do terceiro produto: ");
        p3.Preco = float.Parse(Console.ReadLine() ?? "0");
        Console.WriteLine("Quantidade do terceiro produto: ");
        p3.Quantidade = int.Parse(Console.ReadLine() ?? "0");


        Produto[] dadosInseridos = new Produto[] {p1, p2, p3};

        for(int i = 0; i < 3; i++)
        {
            valor = dadosInseridos[i].Preco * dadosInseridos[i].Quantidade;
        }

        Console.WriteLine($"O valor no estoque é de: R${valor} ");



public struct Produto
{
    public string Nome;
    public int Codigo;
    public float Preco;
    public int Quantidade;
}

