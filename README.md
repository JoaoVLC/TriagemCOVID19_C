# Triagem COVID19
## Projeto MAPA do meu curso de Engenharia de Software.
### O projeto tem como Objetivo:
Criar um programa, para um grande hospital, que faça uma triagem inicial através de totens eletrônicos que serão disponibilizados no pronto atendimento, agilizando assim o atendimento e fazendo a separação dos suspeitos de COVID-19 dos não suspeitos, garantindo um distanciamento e redução da infecção gerado pelas filas.
#### Neste programa o paciente chegará ao totem e fará um cadastro prévio indicando os seguintes dados:
* CPF
* Nome
* Sexo
* Idade

#### Após o cadastro o paciente deve responder a um questionário de sintomas no qual cada sintoma terá um peso para avaliação do risco de COVID, os sintomas são:
* Tem Febre? (5 pontos)
* Tem dor de cabeça? (1 ponto)
* Tem secreção nasal ou espirros? (1 ponto)
* Tem dor/irritação na garganta? (1 ponto)
* Tem tosse seca? (3 pontos)
* Tem dificuldade respiratória? (10 pontos)
* Tem dores no corpo? (1 ponto)
* Tem diarréia? (1 ponto)
* Esteve em contato, nos últimos 14 dias, com um caso diagnosticado com COVID-19? (10 pontos)
* Esteve em locais com grande aglomeração? (3 pontos)

O encaminhamento será feito para 3 alas, as de Risco Baixo, Risco Médio e Risco Alto.
* Para o risco baixo o total de pontos dos sintomas deverão ser de 0 a 9;
* Para o risco médio de 10 a 19 pontos;
* para o risco alto de 20 ou mais pontos.

Após preenchimento indicar para qual ala o paciente deverá se dirigir

##### Para finalizar deve ser salvo em um arquivo com os dados do paciente e qual sua pontuação de sintomas para que seja realizada possíveis auditorias por parte da direção do hospital.
