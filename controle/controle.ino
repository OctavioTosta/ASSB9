/* 
  Ponte H com led não funcionando - Lado Direito    |  Ponte H com led funcionando - Lado Esquerdo
    cs 4                                            |  cs 9
    inA 3                                           |  inA 11
    inB 5                                           |  inb 12
    pwm 6                                           |  pwm 10                     */


// Criando struct comandos da porta serial e uma variavel cmd do tipo comandos da porta serial struct
struct comandosDaPortaSerial
{
  String direcao;
  int velocidade;
  int tempo;
}cmd;

// Criando struct ponteH
struct ponteH 
{
  int cs;
  int inA;
  int inB;
  int pwmPin;
};

// Criando ponteH direita e ponteH esquera do tipo ponteH struct, com seus conectores 
ponteH ponteHEsquerda = { 4, 3 , 5 , 6 };
ponteH ponteHDireita = { 9, 11, 12, 10};

// Variavel global pwm
int pwm = 0;

// Variavel que armazena a palavra de 10 caracteres lida na porta serial
String palavraSerial = "";

// Definindo a comunicacao serial e setando os pinos das ponteH's
void setup()
{
  Serial.begin(115200);
  delay(1000);
  Serial.println("APTO");
  
  pinMode(ponteHDireita.inA, OUTPUT);
  pinMode(ponteHDireita.inB, OUTPUT);
  pinMode(ponteHDireita.pwmPin, OUTPUT);
  pinMode(ponteHEsquerda.inA, OUTPUT);
  pinMode(ponteHEsquerda.inB, OUTPUT);
  pinMode(ponteHEsquerda.pwmPin, OUTPUT);
}

// Le a porta serial, muda os valores de cmd (comando) e pwm para os novos valores lidos e chama a funcao mover. 
void loop()
{
  lerSerial();
  setCmd();
  delay(50);
  setPwm(cmd.velocidade);
  mover();
}
