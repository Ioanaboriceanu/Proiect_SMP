# Proiect_SMP
Boriceanu Ioana-Roxana 331AB

Proiectul meu simulează comportamentul unei tastaturi de tip Braille ce poate fi conectată la PC unde, cu ajutorul unui terminal pentru comunicații seriale, pot fi citite("traduse") caracterele introduse.

Componentele hardware folosite sunt:
  - Arduino Uno R3
  - 6 Butoane
  - 1 Switch mini 2 poziții
  - Breadboard
  - Rezistori 1k
  - Fire
  
Componente software necesare funcționării: Cool Term (https://drive.google.com/drive/folders/1ANV2kW5r-ynvxdDrKEXf6GDcNKl0JOjO)
  
 Link către proiect în Tinkercad:
  - Cu push-buttons (la fel ca schema fizică): https://www.tinkercad.com/things/d3JyBZIlGPE?sharecode=hcGNP5PKd2Nhn8G1HwRLMAuVrKng2lMRJtA_DqjHnZM
  - Cu switch-uri (se poate verifica mai ușor funcționalitatea codului): https://www.tinkercad.com/things/3bo5mDSRSSR

# Funcționare
Comportamentul ansamblului este unul destul de simplu, programul este format doar din cele două funcții standard: setup() și loop() și șapte variabile globale, fiecare având valoarea unui pin digital de pe plăcuța Arduino.

În funcția *setup()* am configurat toate variabilele ca variabile de intrare.

Funcția *loop()* e formată din două părți.

În prima parte citim informația de pe fiecare pin și o memorăm în variabilele locale de tip întreg, iar în a doua parte verificăm starea acestora.

Variabila 'o' e cea care memorează starea switch-ului, pe care l-am folosit pentru a oferi utilizatorilor posibilitatea de a introduce de la tastatură atât litere, cât și cifre. Acest lucru a fost destul de simplu de făcut, ținând cont că anumite caractere au același cod(de exemplu: '1' și 'A').

După ce se verifică starea switch-ului(LOW-litere, HIGH-cifre) se trece la verificarea celor șase butoane(HIGH-apăsat, LOW-neapăsat).

Fiecare buton reprezintă un "punctuleț" din cele șase care definesc un caracter. O să dau ca exemplu caracterul H. 

În alfabetul Braille el este reprezentat în felul următor:
⠓ 

Ceea ce în codul e meu se traduce ca:

i==HIGH l==LOW            
j==HIGH m==HIGH    
k==LOW  n==LOW    

 <=>  
 
buton1=apăsat   buton4=neapăsat

buton2=apăsat   buton5=apăsat

buton3=neapăsat buton6=neapăsat


Pe schemă ordinea butoanelor este:

B1 B2 B3 B4 B5 B6


# Bibliografie
  - https://www.arduino.cc/en/Tutorial/BuiltInExamples/Debounce
  - https://www.instructables.com/Braille-Keyboard-With-Voice-Output/
  - https://www.mostphotos.com/en-us/1704020/braille-alphabet
