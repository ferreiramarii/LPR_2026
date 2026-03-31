int soma = 0;
int pares = 0;
int i = 1;

Console.WriteLine("Digite a quantidade de números (primeiro dígito) e os números em seguida");
string[] valores = Console.ReadLine().Split(' ')?? new string[0];
int quantidade = int.Parse(valores[0]);

while(i <= quantidade){
    int numero = int.Parse(valores[i]);

    if(numero % 2 == 0){
        soma += numero;
        pares++;
    }
    i++;
}
    double media = (double)soma / pares;
    Console.WriteLine($"A média é: {media}");
