# ASSB9

-- Ferramentas utilizadas a ser esxrito --

-- Descrição do projeto a ser escrita --


## Comunicação entre o o robo e o ROS

-- Marlon, coloque os nós aqui no git e fala como instalar/usar --

## Comandos compreendidos pelo robo
<ul>
    <li>O comando do robo a ser executado é definido em 10 caracteres:
        <ol>
            <li>Os trer primeiros caracteres definem a direção:
                <ul>
                    <li>'FRE': Frente;</li>
                    <li>'DIR': Dizreita;/li>
                    <li>'TRA': Trás;</li>
                    <li>'ESQ': Esquerda;</li>
                    <li>'PAR': Parar;</li>
                    <li>'CE1': Comandos especial um;</li>
                    <li>'CE2': Comandos especial dois;</li>
                    <li>'CE3': Comandos especial três;</li>
                </ul>
            </li>
            <li>Do terceiro ao sexto caracter é definida a velocidade, em porcentagem:
                <ul>
                    <li>Varia de 000 a 100, onde 000 é 0% e 100 é 100%;</li>
                </ul>
            </li>
            <li>Os quatro ultimos determinam o tempo de execução do comando, em milissegundos (ms):
                <ul>
                    <li>Valores de 0000 a 9999;</li>
                </ul>
            </li>
        </ol>
        <li>Exemplo de comando, enviado usando o <a href="/Comunicação serial (python)/cmdSerial.py">codigo simples de comunicação serial</a>:
            <ul>
                <li>'FRE0804000': Para frente com 80% da velocidade por 4 segundos;</li>
            </ul>
        </li>
    </li>
</ul>
