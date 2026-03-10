double preco1, preco2, valor;
int codigo1, codigo2, quant1, quant2;

Console.WriteLine("Código da peça 1:");
codigo1 = Convert.ToInt32(Console.ReadLine());

Console.WriteLine("Preço da peça 1:");
preco1 = Convert.ToDouble(Console.ReadLine());

Console.WriteLine("Quantidade da peça 1:");
quant1 = Convert.ToInt32(Console.ReadLine());   

Console.WriteLine("Código da peça 2:");
codigo2 = Convert.ToInt32(Console.ReadLine());

Console.WriteLine("Preço da peça 2:");
preco2 = Convert.ToDouble(Console.ReadLine());

Console.WriteLine("Quantidade da peça 2:");
quant2 = Convert.ToInt32(Console.ReadLine());  

valor = (preco1 * quant1) + (preco2 * quant2);
Console.WriteLine($"Valor a pagar: R$ {valor}");
