# Esecuzione simbolica di computazioni in virgola mobile  


## Sommario
L’esecuzione simbolica è una tecnica di program analysis molto nota ed utilizzata per generare automaticamente input in grado di esercitare diversi percorsi di esecuzione di un programma dove, analizzando istruzione per istruzione il codice del programma, è possibile costruire delle formule che rappresentano il flusso di esecuzione e che saranno poi elaborate da un Satisfiability Modulo Theories (SMT) solver.

La componente principale di questa tecnica sono i simboli, ovvero input non concreti di cui non è noto il valore iniziale, che costituiscono le espressioni e su cui vengono effettuate delle operazioni o imposte delle condizioni a seconda della parte di codice che è stata analizzata.
Studiando tutte le possibili combinazioni di valori che questi simboli possono assumere in un determinato punto del programma, è possibile scoprire comportamenti interessanti nell’esecuzione in risposta a specifici input, che potranno poi condurre alla scoperta di nuovi bug e vulnerabilità all’interno di un software.

In questa tesi, consideriamo l’esecuzione concolica: tale tecnica affianca all’esecuzione simbolica anche un’esecuzione concreta, potendo in ogni momento sostituire un valore concreto ad una formula simbolica quando quest’ultima risulta troppo complessa da risolvere per il solver.

Una limitazione comune a diversi esecutori concolici esistenti è il mancato supporto al ragionamento simbolico su operazioni in virgola mobile: nostro obiettivo sarà analizzare in dettaglio il funzionamento delle operazioni in virgola mobile per architettura x86 e x86_64 e, successivamente, discutere come integrare il supporto ad una parte di queste operazioni all’interno dell’esecutore concolico binario SymQEMU.


## Prerequisiti
* Versione modificata di SymCC, disponibile al seguente indirizzo: "https://github.com/ZioSaba/symcc"
* Versione modificata di SymQEMU, disponibile al seguente indirizzo: "https://github.com/ZioSaba/symqemu"

Il simbolo "**" scrive in grassetto
**Sono in grassetto**

Il simbolo "##" crea un titolo piccolo con divisorio
## Sono un titolo piccolo

Il simbolo "*" crea un elemento di una lista
* Elem_1
* Elem_2

Il simbolo "_" scrive in corsivo
_Sono in corsivo_

## Funzionamento

Il simbolo "```sh" consente di scrivere testo di shell
```sh
$make 
```

Il simbolo "###" crea un titolo piccolo senza divisorio
### Sono un titolo piccolissimo
