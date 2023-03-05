# Simon-Says
Simon Says implementato in C++ utilizzando Arduino Uno con Tinkercad.

## Struttura
Per fare questo sketch che si trova nel file <code>main.cpp</code> ho utilizzato il framework arduino con la board Arduino Uno.<br>
Gli ultimi pin digitali (10, 11, 12, 13) sono riservati all'input dai bottoni mentre i pin centrali (7, 6, 5, 4) sono riservati all'output su led.<br>
Per calcolare le resistenze dei led ho usato la legge di Ohm ovvero : $\frac{\Delta V}{A} = \frac{V_2 - V_1}{A}$, dove $V_2=5V$, $V_1 =$ voltaggio del led e $A = 0.02A$<br>
Le combinazioni sono generate "randomicamente" con la funzione <code>random()</code> di arduino.
<br>
Questa è la struttura schematizzata finale (board + bread board):<br>
![struttura finale](https://github.com/AlBovo/Simon-Says/blob/main/image.png?raw=true)
