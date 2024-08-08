# La bataille
Vous avez sûrement déjà joué, étant enfant, au jeu de cartes appelé la « bataille ». Les enfants algoréens aiment aussi beaucoup jouer à une variante bien plus simple de ce jeu, et vous devez faire l’arbitre des parties. Comme il y a beaucoup d’enfants souhaitant jouer en même temps et que vous ne pouvez pas tout surveiller, vous décidez d’écrire un programme informatique pour déterminer le vainqueur de chaque partie.
Une partie se déroule ainsi :

* On part d’un jeu contenant 52 cartes, chaque carte étant une lettre entre A et M, et chaque lettre étant présente 4 fois (avec différentes couleurs, mais on ne s’en occupera pas ici).
* Les cartes, face cachée, sont mélangées et séparées en deux paquets (pas forcément de même taille !).
* Les deux joueurs retournent la première carte de leur paquet : si les deux cartes sont identiques ils continuent à jouer, sinon celui qui a la carte la plus forte, c’est-à-dire la plus petite selon l’ordre alphabétique, gagne la partie.
* Si un joueur n’a plus de carte, il perd ! Et oui, ce n’est pas très juste !
* Si les deux joueurs n’ont en même temps plus de cartes, alors il y a égalité complète.
Étant donnés les deux paquets de cartes, à vous de déterminer le gagnant.

### INPUT
L'entrée contient deux lignes, correspondant respectivement aux cartes du joueur 1 et du joueur 2, dans l'ordre. Un jeu de cartes est constitué uniquement de lettre majuscules entre A et M (sans espaces).

### OUTPUT
Sur la première ligne, il faut indiquer « 1 », « 2 » ou « = » selon que le gagnant est le premier ou le second joueur, ou bien qu’il y a égalité complète.
Sur la seconde ligne, il faut indiquer le nombre d’égalités qui ont eu lieu avant que le jeu ne se termine.

### EXAMPLEs
#### EXAMPLE 1
input:
AABBDCCDEEFFGGHHIIJJKKLLMM
AABBCCDDEEFFGGHHIIJJKKLLMM

output:
2
4

#### EXAMPLE 2
input:
AA
AABBCCDDEEFFGGHHIIJJKKLLMMBBDCCDEEFFGGHHIIJJKKLLMM

output:
2
2
 
### COMMENTS
L'exemple 1 se déroule comme suit :
A contre A, égalité ;
A contre A, égalité ;
B contre B, égalité ;
B contre B, égalité ;
D contre C : le C l'emporte.
C'est donc le joueur 2 qui remporte la partie, après 4 égalités.

Dans l'exemple 2, après deux égalités, le joueur 1 n'a plus de carte et donc perd la partie.