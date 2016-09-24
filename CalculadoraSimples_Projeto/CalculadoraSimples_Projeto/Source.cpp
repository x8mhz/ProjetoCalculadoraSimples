#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

double erro(const string &e)	//"Tratamento" dos erros. Para deixar a calculadora mais simples possível eu não usei try{} catch{}
{
	cerr << "ERRO: " << e << endl;
	system("PAUSE");
	return 0;
}

int main()
{
	double val1 = 0, val2 = 0;
	char op = '\n';		//Variáveis usadas.

// --------------------------------------------------------------------------------------

	cout << " /------------------------------------------------------/" << endl;
	cout << " /             +++++CALCULADORA SIMPLES+++++            /" << endl;
	cout << " / **************************************************** /" << endl;
	cout << " /          DICA: Aperte = e ENTER para calcular        /" << endl;
	cout << " /                 DIGITE: 10 + 2 * 2 =                 /" << endl;
	cout << " /------------------------------------------------------/" << endl << endl;

	cout << " DIGITE: ";
	cin >> val1;	//Coleta o número da esquerda. 
	if (!cin)
	{
		erro("Comece o calculo com um número.");			//Com a ajuda da função erro, da o sinal da falta número da esquerda.
	}
	while (cin >> op)	//Coleta o operador em estrutura de repetição, desta forma o usuário pode colocar quantos operadores quiser.
	{
		if (op != '=')	//Se o operar não for == '=', ele coletará o valor do número da direita, isso enquanto for colocado um operador.
		{
			cin >> val2;	//Coleta número da direita.
		}
		if (!cin)
		{
			erro("Operador inválido!");
		}

		switch (op)		//Se a escolha do operador seja um dos "casos", ele irá calcular parar "break", e voltando ao "while" do do operador "op".
		{
		case '+':
			val1 += val2;	 // É a mesma coisa que "val1 = val1 + val2;"
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
			cout << "\n RESULTADO: " << val1 << endl << endl << endl;	//Mostra o resoltado do calculo!
			system("PAUSE");
			system("CLS");		//Limpa a tela
			main();		//Return para o inicio do programa "main()".
			return 0;
		}
	}
	erro("Reinicie a sua calculadora!");
}
