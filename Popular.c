/************************************************************************************

POPULAR - Popularidade

Autor: Tiago Mota
Uma escola está promovendo uma eleição de popularidade, para determinar, naturalmente, quem é o aluno mais popular. Foi definido, 
então, que cada aluno deverá votar nos alunos de quem gosta. A quantidade de votos dados por cada aluno é variável, isto é, 
cada aluno pode votar em quantos alunos desejar, de acordo com suas preferências. O vencedor será aquele que receber mais votos,
ou seja, aquele para o qual mais alunos indicaram que gostam dele.

Para realizar a eleição, cada aluno receberá uma cédula eleitoral contendo os nomes de todos os alunos da escola 
(inclusive ele próprio), na qual deverá preencher os quadrados ao lado dos nomes dos alunos que gosta, utilizando caneta 
esferográfica azul ou preta. Após o término do período de votação, as cédulas serão colocadas numa máquina, a qual é capaz de
informar quais quadrados foram preenchidos em cada cédula.

Você, estagiário da escola em questão, ficou responsável por apresentar um protótipo do sistema que recebe as informações da máquina
e contabiliza os dados da eleição. Por se tratar de um protótipo, sua tarefa é apenas escrever um programa que, dadas as informações
sobre simulações de preenchimento das cédulas, informe quantos votos recebeu o vencedor da eleição.

Você pode assumir que os alunos da escola são participativos, de forma que todos compareceram à votação e cada um preencheu
exatamente uma cédula eleitoral. Você pode assumir, ainda, que os alunos não sofrem por conflitos internos, de modo que cada
aluno gosta de si mesmo e vota em si mesmo. Note, porém, que a relação ``gostar de'' não é simétrica, ou seja, se o aluno A gosta do
aluno B, não necessariamente o aluno B gosta do aluno A.

Entrada
A entrada é composta por vários casos de teste, cada um correspondendo a uma simulação de eleição.

A primeira linha de um caso de teste contém apenas um inteiro, n (1 <= n <= 100), indicando a quantidade de alunos da escola
(identificados por inteiros de 1 a n) e, por conseqüência, a quantidade de cédulas preenchidas. A seguir há n linhas, cada uma 
correspondendo a uma cédula processada.

Cada linha contém n inteiros, onde o j-ésimo inteiro da i-ésima linha é igual a 1, caso o j-ésimo quadrado da cédula i esteja 
preenchido (ou seja, o aluno de identificador i votou no aluno de identificador j); ou é igual a 0, caso contrário (o aluno de 
identificador i não votou no aluno de identificador j).

A entrada termina quando n = 0.

Saída
Para cada caso de teste, seu programa deve imprimir uma linha, contendo apenas um inteiro, correspondente à quantidade de votos 
recebidos pelo vencedor da eleição.

*****************************************************************************************************/

#include <stdio.h>

int main()
{

    int mat[100][100];
    int n, i, j, pop, soma;

    scanf("%d", &n);

    while(n!=0)
    {   pop=0;
        for(i=0; i<n; i++)
            for(j=0; j<n; j++)
                scanf("%d", &mat[i][j]);

        for(i=0; i<n; i++)
        {
            soma = 0;
            for(j=0; j<n; j++)
                soma = soma + mat[j][i];
            if(soma>pop)
                pop=soma;
        }

        printf("%d\n", pop);
        scanf("%d", &n);
    }

    return 0;
}
