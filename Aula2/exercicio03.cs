int funcio, horas;
double valor, salario;

Console.WriteLine("Número de funcionário:");
funcio = Convert.ToInt32(Console.ReadLine());

Console.WriteLine("Horas de trabalho:");
horas = Convert.ToDouble(Console.ReadLine());

Console.WriteLine("Valor por hora:");
valor = Convert.ToDouble(Console.ReadLine());

salario = horas * valor;
Console.WriteLine($"Número: {numero}");
Console.WriteLine($"Salário: R$ {salario:F2}");