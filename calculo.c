#include <stdio.h>

// Função para calcular o imposto de renda
float calcular_ir(float salario) {
float ir;
if (salario <= 1903.98)
{
ir = 0;
}
else if (salario > 1903.98 && salario <= 2826.65)
{
ir = salario * 0.075 - 142.80;
}
else if (salario > 2826.65 && salario <= 3751.05)
{
ir = salario * 0.15 - 354.80;
}
else if (salario > 3751.05 && salario <= 4664.68)
{
ir = salario * 0.225 - 636.13;
}
else
{
ir = salario * 0.275 - 869.36;
}
return ir;
}

int main(int argc, char** argv) {
float salario, inss, ir, sal_liquido, outros_descontos;

printf("Digite o seu salario bruto: ");
scanf("%f", &salario);

// Calcular o inss de acordo com a faixa salarial
if (salario <= 1693.72)
{
inss = salario * 0.08;
}
else if (salario >= 1693.73 && salario <=2822.90)
{
inss = salario * 0.09;
}
else if (salario >= 2822.91 && salario <=5645.80)
{
inss = salario * 0.11;
}
else
{
inss = salario * 0.14;
}

// Calcular o imposto de renda
ir = calcular_ir(salario);

// Pedir ao usuário que digite o valor dos outros descontos
printf("\nDigite o valor total dos outros descontos: ");
scanf("%f", &outros_descontos);

// Calcular o salário líquido
sal_liquido = (salario - inss) - ir - outros_descontos;

// Imprimir os resultados
printf("\nDesconto Inss: %.2f\n", inss);
printf("\nDesconto IR: %.2f\n", ir);
printf("\nOutros Descontos: %.2f\n", outros_descontos);
printf("\nSalario Liquido: %.2f\n", sal_liquido);

return 0;
}