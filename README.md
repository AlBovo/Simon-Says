# Simon-Says
Simon Says implementato in C++ utilizzando Arduino Uno con Tinkercad.

## Struttura
Per fare questo sketch che si trova nel file <code>main.cpp</code> ho utilizzato il framework arduino con la board Arduino Uno.<br>
Gli ultimi pin digitali (10, 11, 12, 13) sono riservati all'input dai bottoni mentre i pin centrali (7, 6, 5, 4) sono riservati all'output su led.<br>
Le combinazioni sono generate "randomicamente" con la funzione <code>random()</code> di arduino.
<br>
Questo è la struttura schematizzata finale (board + bread board):<br>
![alt text](https://github.com/AlBovo/Simon-Says/main/image.png?raw=true)
