# ASSB9

-- Ferramentas utilizadas a ser esxrito --

-- Descrição do projeto a ser escrita --


## Comunicação entre o o robo e o ROS

-- Marlon, coloque os nós aqui no git e fala como instalar/usar --

## Comandos compreendidos pelo robo

  O comando a ser realizado pelo robo é definido em 10 caracteres:
     - Os trer primeiros caracteres definem a direção:
        - 'FRE': Frente;
        - 'DIR': Direita;
        - 'TRA': Trás;
        - 'ESQ': Esquerda;
        - 'PAR': Parar;
        - 'CE1': Comandos especial um;
        - 'CE2': Comandos especial dois;
        - 'CE3': Comandos especial três;
        
     - Do terceiro ao sexto caracter é definida a velocidade, em porcentagem:
        - Varia de 000 a 100, onde 000 é 0% e 100 é 100%;
        
     - Os quatro ultimos determinam o tempo de execução do comando, em milissegundos (ms):
        - Valores de 0000 a 9999;
 
