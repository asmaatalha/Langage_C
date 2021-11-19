<?xml version="1.0" encoding="UTF-8"?>
<Algo>
    <description texte="" courant=""/>
    <extension extnom="inactif"/>
    <fonction fctetat="inactif" fctcode=""/>
    <F2 F2lignes="" F2etat="inactif" F2para="" F2defaut=""/>
    <repere repetat="inactif" repcode="-10#10#-10#10#2#2"/>
    <param nbDecimales="8" arrondiAuto="vrai" totalBoucles="5000000" epaisseurLigne="2" maxBoucle="500000" totalAffichages="1000" epaisseurPoint="2"/>
    <item code="200#declarationfonctions" algoitem="FONCTIONS_UTILISEES"/>
    <item code="100#declarationsvariables" algoitem="VARIABLES">
        <item code="1#NOMBRE#nbr" algoitem="nbr EST_DU_TYPE NOMBRE"/>
        <item code="1#NOMBRE#NbrInverse" algoitem="NbrInverse EST_DU_TYPE NOMBRE"/>
    </item>
    <item code="101#debutalgo" algoitem="DEBUT_ALGORITHME">
        <item code="4#Entrez un nomber à inverser: #0" algoitem="AFFICHER &quot;Entrez un nomber à inverser: &quot;"/>
        <item code="2#nbr#pasliste" algoitem="LIRE nbr"/>
        <item code="15#nbr != 0" algoitem="TANT_QUE (nbr != 0) FAIRE">
            <item code="16#debuttantque" algoitem="DEBUT_TANT_QUE"/>
            <item code="20#NbrInverse = NbrInverse * 10#0" algoitem="AFFICHERCALCUL NbrInverse = NbrInverse * 10"/>
            <item code="20#NbrInverse = NbrInverse + nbr%10#0" algoitem="AFFICHERCALCUL NbrInverse = NbrInverse + nbr%10"/>
            <item code="20#nbr = nbr/10#0" algoitem="AFFICHERCALCUL nbr = nbr/10"/>
            <item code="17#fintantque" algoitem="FIN_TANT_QUE"/>
        </item>
        <item code="4#le nomber en sens inverse est:  #1" algoitem="AFFICHER &quot;le nomber en sens inverse est:  &quot;"/>
        <item code="103#commentaire" algoitem=""/>
    </item>
    <item code="102#finalgo" algoitem="FIN_ALGORITHME"/>
</Algo>
