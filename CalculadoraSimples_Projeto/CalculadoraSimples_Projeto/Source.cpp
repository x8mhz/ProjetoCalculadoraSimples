#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

double erro(const string &e)	//"Tratamento" dos erros. Para deixar a calculadora mais simples poss�vel eu n�o usei try{} catch{}
{
	cerr << "ERRO: " << e << endl;
	system("PAUSE");
	return 0;
}

int main()
{
	double val1 = 0, val2 = 0;
	char op = '\n';		//Vari�veis usadas.

// --------------------------------------------------------------------------------------

	cout << " /------------------------------------------------------/" << endl;
	cout << " /             +++++CALCULADORA SIMPLES+++++            /" << endl;
	cout << " / **************************************************** /" << endl;
	cout << " /               Digite a '=' para calcular             /" << endl;
	cout << " /                 EXEMPLO: 10 + 2 * 2 =                /" << endl;
	cout << " /------------------------------------------------------/" << endl << endl;

	cout << " CALCULAR: ";
	cin >> val1;	//Coleta o n�mero da esquerda. 
	if (!cin)
	{
		erro("Comece o calculo com um n�mero.");			//Com a ajuda da fun��o erro, da o sinal da falta n�mero da esquerda.
	}
	while (cin >> op)	//Coleta o operador em estrutura de repeti��o, desta forma o usu�rio pode colocar quantos operadores quiser.
	{
		if (op != '=')	//Se o operar n�o for == '=', ele coletar� o valor do n�mero da direita, isso enquanto for colocado um operador.
		{
			cin >> val2;	//Coleta n�mero da direita.
		}
		if (!cin)
		{
			erro("Operador inv�lido!");
		}

		switch (op)		//Se a escolha do operador seja um dos "casos", ele ir� calcular parar "break", e voltando ao "while" do do operador "op".
		{
		case '+':
			val1 += val2;	 // � a mesma coisa que "val1 = val1 + val2;"
			break;

		case '-':
			val1 -= val2;
			break;

		case '*':
			val1 *= val2;
			break;

		case '/':
			val1 /= val2;
			break;

		default:
			cout << "\n RESULTADO: " << val1 << endl << endl << endl;	 //Mostra o resoltado do calculo!
			system("PAUSE");
			system("CLS");		//Limpa a tela
			main();		//Return para o inicio do programa "main()".
			return 0;
		}
	}
	erro("Reinicie a sua calculadora!");
}