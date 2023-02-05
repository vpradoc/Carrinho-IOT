 // C++ code
//

/*

Carrinho Seguidor de Faixa
Autor: Vinicius do Prado Carneiro
12/10/2022
versão 1.0.0

*/

#define ME      11
#define MD     	10
#define SE      4
#define SD      2
#define VMax A0
  
int Valor_Velocidade;

void setup ()
{
  
  pinMode(ME, OUTPUT);
  pinMode(MD, OUTPUT);
  pinMode(SE, INPUT);
  pinMode(SD, INPUT);
  
}

void loop()
{
  
  	//Leitura da velocidade
	int leitura_pot = analogRead(VMax); 
  
	Valor_Velocidade = map(leitura_pot, 0, 1023, 0, 255);

  	//Lê os valores e liga/desliga o motor (ESQUERDO)
	if (digitalRead(SE)== LOW)analogWrite(ME,Valor_Velocidade);
	else analogWrite(ME,0);

  	//Lê os valores e liga/desliga o motor (DIREITO)
	if (digitalRead(SD)== LOW)analogWrite(MD,Valor_Velocidade);
	else analogWrite(MD,0);

}
