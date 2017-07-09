#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  cmdSerial.py
#  
#  Copyright 2017 Octavio Tosta <Octavio Tosta@OCTAVIO>
#  

import serial

def escreverNaSerial(msg):
	
	porta = 'COM3' 		#Diretorio da porta se estiver no linux, Ex.: '/dev/ttyACM0'; Nome da porta se estiver no Windows, Ex,: 'COM1'
	velocidade = 9600	#Velocidade de comunicacao, deve ser igual dos dois lados da comunicacao
	tempoEspera = 0		#Tempo de espera para o envio do caracter, aqui zerado pois esse tempo ja esta do outro lado da porta
	ser = serial.Serial(porta, velocidade, timeout=tempoEspera)		#Abre a porta com os parametros definidos
	ser.write(msg)		#Escrevendo os caracteres na porta
	ser.close()			#Fecha a porta serial

