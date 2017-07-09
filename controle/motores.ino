
// Ordenando a movimentacao do robo na direcao lida na serial
void mover()
{ 
  if (cmd.direcao == "FRE")
  {
    frente();
    Serial.print("Tempo de execucao: ");
    Serial.println(cmd.tempo);
    delay(cmd.tempo);
  }
    
  else if (cmd.direcao == "DIR")
  {
    direita();
    Serial.print("Tempo de execucao: ");
    Serial.println(cmd.tempo);
    delay(cmd.tempo);
  }    
  
  else if (cmd.direcao == "TRA")
  {
    tras();
    Serial.print("Tempo de execucao: ");
    Serial.println(cmd.tempo);
    delay(cmd.tempo);
  }
      
  else if (cmd.direcao == "ESQ")
  {
    esquerda();
    Serial.print("Tempo de execucao: ");
    Serial.println(cmd.tempo);
    delay(cmd.tempo);
  }
      
  else if (cmd.direcao == "PAR")
  {
    parar();
    Serial.print("Tempo de execucao: ");
    Serial.println(cmd.tempo);
    delay(cmd.tempo);
  }
  
  // Comandos especiais 1, 2 e 3 (CE1, CE2 E CE3)   
  else if (cmd.direcao == "CE1")
  {
    //comando
    Serial.print("Tempo de execucao: ");
    Serial.println(cmd.tempo);
    delay(cmd.tempo);
  }
      
  else if (cmd.direcao == "CE2")
  {
    //comando
    Serial.print("Tempo de execucao: ");
    Serial.println(cmd.tempo);
    delay(cmd.tempo);
  }
      
  else if (cmd.direcao == "CE3")
  {
    //comando
    Serial.print("Tempo de execucao: ");
    Serial.println(cmd.tempo);
    delay(cmd.tempo);
  }
}

// ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- //

// Funcao para mover os motores direitos para frente
void ladoDireitoParaFrente()
{
  digitalWrite(ponteHDireita.inA, HIGH);
  digitalWrite(ponteHDireita.inB, LOW);
  analogWrite(ponteHDireita.pwmPin, pwm);
}

// Funcao para mover os motores esquerdos para frente
void ladoEsquerdoParaFrente()
{
  digitalWrite(ponteHEsquerda.inA, LOW);
  digitalWrite(ponteHEsquerda.inB, HIGH);
  analogWrite(ponteHEsquerda.pwmPin, pwm);
}

// Funcao para mover os motores direitos para tras
void ladoDireitoParaTras()
{
  digitalWrite(ponteHDireita.inA, LOW);
  digitalWrite(ponteHDireita.inB, HIGH);
  analogWrite(ponteHDireita.pwmPin, pwm);
}

// Funcao para parar os motores direitos
void ladoDireitoParar()
{
  digitalWrite(ponteHDireita.inA, LOW);
  digitalWrite(ponteHDireita.inB, LOW);
  analogWrite(ponteHDireita.pwmPin, pwm);
}

// Funcao para parar os motores esquerdos
void ladoEsquerdoParar()
{
  digitalWrite(ponteHDireita.inA, LOW);
  digitalWrite(ponteHDireita.inB, LOW);
  analogWrite(ponteHDireita.pwmPin, pwm);
}

// Funcao para mover os motores esquerdos para tras
void ladoEsquerdoParaTras()
{
  digitalWrite(ponteHEsquerda.inA, HIGH);
  digitalWrite(ponteHEsquerda.inB, LOW);
  analogWrite(ponteHEsquerda.pwmPin, pwm);
}

// ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- //

// Funcao para mover o robo para frente
void frente()
{
  ladoDireitoParaFrente();
  ladoEsquerdoParaFrente();
  Serial.println("MOVER PARA: FRENTE!");
}

// Funcao para mover o robo para tras
void tras()
{
  ladoDireitoParaTras();
  ladoEsquerdoParaTras();
  Serial.println("MOVER PARA: TRAS!");
}

// Funcao para mover o robo para esquerda
void esquerda()
{
  ladoDireitoParaFrente();
  ladoEsquerdoParaTras();
  Serial.println("MOVER PARA: ESQUERDA!");
}

// Funcao para mover o robo para direita
void direita()
{
  ladoDireitoParaTras();
  ladoEsquerdoParaFrente();
  Serial.println("MOVER PARA: DIREITA!");
}

// Funcao para parar o robo
void parar()
{
  ladoDireitoParar();
  ladoEsquerdoParar();
  Serial.println("PARAR!");
}



