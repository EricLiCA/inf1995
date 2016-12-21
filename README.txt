INF1995 - Projet initial en génie informatique et logiciel
Équipe 1024 - kB

Le code final se trouve sous le dossier tp/projet/code_source

Voici la liste à suivre afin de faire fonctionner le robot
 - Insérer 6 piles AA pour le moteur
 - Insérer la batterie 9 volts en alimentation de la carte mère et du pont en H
 - Compiler le code et l'installer sur le robot
 - Placer sur ligne de départ
 - Enjoy!


Le robot peut potentiellement avoir de la difficulté à distinguer la forme de la pièce
Le voltage du convertisseur analogique numerique est sûrement désajusté
Un symptôme de cette décalibration est que le robot ne s'arrête pas au centre de la pièce avant de faire son demi-tour
Voici ce qu'il faut faire pour règler ce problème:

 - Changer Program.cpp pour DistanceCalibration.cpp dans le Makefile

 - Compiler le programme et l'installer sur le robot

 - Calibrer le convertisseur analogique numérique en fonction des instructions suivantes à l'aide du petit tourne-vis
   - Lorsqu'un obstacle est à 10 cm du capteur de distance, le DEL doit etre éteinte
   - À 11 cm, le DEL doit être rouge clair (pas de flicker)
   - À chaque 2 centimètres, le DEL doit changer de couleur jusqu'à approximativement 30 cm

 - Ensuite, remettre Program.cpp dans le Makefile à la place de DistanceCalibration.cpp
