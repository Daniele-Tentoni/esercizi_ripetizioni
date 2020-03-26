# Esercitazione sull'utilizzo del Sistema Operativo

In questa esercitazione proveremo ad utilizzare il sistema operativo con le sue funzionalità base usufruendone sia con la sua interfaccia grafica (GUI), che con la sua interfaccia a riga di comando (CUI).

## Come usare questo repository per questa esercitazione
1. Creare una file batch `es_x.bat` con il nome dell'esercitazione;
2. Scrivere su ogni riga un solo comando;
3. Eseguire un commit per ogni esercizio che si ritiene completato;
4. Non aver paura di sbagliare. Ovviamente eseguire i comandi senza permessi da amministratore;
5. Eseguire una PR quando si vuole richiedere una correzione;
6. Eseguire una correzione su un nuovo commit.

## Elenco comandi prompt
Di seguito un elenco dei comandi visti a lezione. Ovviamente se se ne trovano altri si possono aggiungere.

1. Elenco degli oggetti in una directory: `dir <percorso>`
1. Cambio della directory di lavoro: `cd <percorso>`
1. Creazione di una directory: `mkdir <percorso>`
1. Eliminazione di una directory: `rmdir <percorso>`
    1. Eliminazione anche delle sottocartelle: `rmdir <percorso> /s`
    1. Farlo senza autorizzazioni: `rmdir <percorso> /s /q`
1. Stampare a video: `echo <testo>`
    1. Dentro a un file: `<testo> > <percorso>`
	  1. Accodato a un file: `<testo> >> <percorso>`
1. Eliminare un file: `del <nome_file>`
1. Cambiare il titolo della console: `title <nome_console>`
1. Mostrare un messaggio a video: `echo <messaggio>`
1. Eseguire un programma eseguibile: `start <percorso>`
    1. Nota bene! Deve essere un programma eseguibile come un batch.
1. Aprire un file con notepad: `notepad <nome_file>`
		1. Se il file non esiste te lo crea.
1. Rinominare un file: `ren <vecchio_file> <nuovo_file>`
1. Copia di un file: `copy <vecchio_file> <nuovo_file>`
1. Copia una cartella: `robocopy <vecchia_cartella> <nuova_cartella>`
