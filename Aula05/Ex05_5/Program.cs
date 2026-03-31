double horas;
double horasTotal = 0;
double horasSem;
int contaDias = 0;
int diasDaSem;


Console.WriteLine("Horas de treino por dia: ");
horas = double.Parse(Console.ReadLine());
horasSem = horas * 5;

while(horasTotal < 1000)
{
    contaDias++;

    diasDaSem = (contaDias - 1) % 7 +1;
    if(diasDaSem <= 5)
    {
        horasTotal += horas;
    }
}
double semanas = contaDias / 7.0;
double meses = semanas / 4.5;

Console.WriteLine($"Horas de treinamento por semana: {horasSem} ");
Console.WriteLine($"Semanas para chegar em 1000 horas: {semanas} ");
Console.WriteLine($"Meses para chegar em 1000 horas: {meses} ");