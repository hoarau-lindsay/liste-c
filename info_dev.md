<h1 align="center"> Examen Machine - UE : Développement Logiciel </h1>

<p align="center"><strong> Hoarau Lindsay</strong> CPI2 - IT</p>

---
<p> Date : 10.04.2026 </p>

### Introduction 
La mémoire consommée lors de la phase de test 02 n'est pas libérée à la fin du programme. Cela vient du fait qu'il manque une fonction dans la librairie **liste-c** : la fonction **deleteLC(...)**. Nous allons donc réimplémenter la librairie **liste-c** pour pouvoir libérée la mémoire consommée afin de ne pas la surchargée et éviter des conflits lors d'autres tests 

### Git 
Dépôt git disponible à l'adresse suivante : [Rétro-engineering d'une librairie "liste chainée"](https://github.com/hoarau-lindsay/liste-c.git)

---
### Sommaire
- [Introduction](#introduction)
- [Git](#git)
- [pragma once](#la-directive-pragma-once)

---

### La directive #pragma once 

**#praga once** est une directive de préprocessur permettant d'éviter les conflits qui permet d'éviter les conflits dût à des  l’inclusion multiple d’un même fichier lors de la compilation indiquant au compilateur de ne l’inclure qu’une seule fois dans une même compilation. 

Pour en savoir plus : [Wikipedia](https://fr.wikipedia.org/wiki/Pragma_once)