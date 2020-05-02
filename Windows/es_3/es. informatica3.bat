mkdir esercizi
title Esercizi svolti
mkdir esercizi\esercizi_svolti
mkdir esercizi\esercizi_non_svolti
notepad esercizi\esercizi_non_svolti\es.0
notepad esercizi\esercizi_non_svolti\es.1
notepad esercizi\esercizi_non_svolti\es.2
notepad esercizi\esercizi_non_svolti\es.3
echo Eseguo l'esercizio 0
move /Y esercizi\esercizi_non_svolti\es.0 esercizi\esercizi_svolti
echo echo Eseguo l'esercizio 1 > esegui_comandi.bat
echo move /Y esercizi\esercizi_non_svolti\es.1 esercizi\esercizi_svolti >> esegui_comandi.bat
start esegui_comandi.bat
echo Ho eseguito l'esercizio 1