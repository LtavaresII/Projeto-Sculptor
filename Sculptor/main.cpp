#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include <fstream>
#include <cstdlib>
#include "sculptor.h"

using namespace std;

int main()
{
    //Sculptor s(2,2,2);
    //s.setColor(1.0,0.0,0.0,1.0);
    //s.putBox(0,1,0,1,0,1);
   // s.writeOFF("Quadrado.off");

    //Sculptor s1(30,30,30);
    //s1.setColor(0.0,0.0,1.0,1.0);
    //s1.putSphere(15,15,11,11);
    //s1.writeOFF("Bola.off");

    //Sculptor s2(30,30,30);
    //s2.setColor(1.0,0.0,0.0,1.0);
    //s2.putBox(0,29,0,29,0,29);
    //s2.cutBox(1,28,1,28,0,28);
    //s2.setColor(0.0,0.0,1.0,1.0);
    //s2.putSphere(15,15,11,11);
    //s2.writeOFF("Caixa-Bola.off");

    Sculptor s3(30,30,30);

    // Corpo central da peça
    s3.setColor(0.0,0.0,0.0,1.0);
    s3.putEllipsoid(15,15,10,14,11,10);

    // Recortes laterais da peça
    s3.cutBox(0,29,0,29,13,20);
    s3.cutBox(0,6,0,30,0,13);
    s3.cutBox(0,23,0,22,0,2);

    // Detalhamento Inferior
    s3.cutSphere(16,15,8,5);
    s3.setColor(1.0,0.0,0.0,1.0);
    s3.putSphere(16,15,9,3);

    s3.setColor(0.2,0.2,0.2,1.0);
    s3.putEllipsoid(23,15,12,2,2,1);
    s3.cutVoxel(23,15,13);

    s3.setColor(0.2,0.2,0.2,1.0);
    s3.putBox(10,12,18,20,12,12);
    s3.setColor(0.0,0.0,0.0,1.0);
    s3.putBox(11,12,18,19,12,12);

    s3.setColor(0.2,0.2,0.2,1.0);
    s3.putBox(10,12,10,12,12,12);
    s3.setColor(0.0,0.0,0.0,1.0);
    s3.putBox(11,12,11,12,12,12);

    s3.setColor(0.2,0.2,0.2,1.0);
    s3.putBox(23,25,19,21,12,12);
    s3.setColor(0.0,0.0,0.0,1.0);
    s3.putBox(23,24,19,20,12,12);

    s3.setColor(0.2,0.2,0.2,1.0);
    s3.putBox(23,25,9,11,12,12);
    s3.setColor(0.0,0.0,0.0,1.0);
    s3.putBox(23,24,10,11,12,12);

    // Recortes centrais da peça
    s3.cutBox(7,7,14,16,3,7);
    s3.cutBox(8,10,14,16,3,3);

    // Detalhamento superior
    s3.setColor(1.0,0,0,1.0);
    s3.putBox(20,23,15,15,3,3);
    s3.setColor(1.0,0.0,0.0,1.0);
    s3.cutBox(10,16,14,16,3,3);
    s3.setColor(0.0,0.0,0.0,1.0);
    s3.putEllipsoid(11,15,4,3,1,2);
    s3.setColor(1.0,0.0,0.0,1.0);
    s3.putBox(10,16,14,16,4,4);
    s3.cutBox(18,18,11,19,3,3);
    s3.setColor(1.0,0.0,0.0,1.0);
    s3.putBox(18,18,11,19,4,4);
    s3.setColor(0.0,0.0,0.0,1.0);
    s3.putVoxel(15,15,3);

    // Detalhamento frontal
    s3.setColor(1.0,0.0,0.0,1.0);
    s3.putBox(8,9,14,16,4,7);
    s3.cutBox(7,7,7,23,7,7);
    s3.setColor(1.0,0.0,0.0,1.0);
    s3.putBox(8,8,7,23,7,7);
    s3.setColor(0.0,0.0,0.0,1.0);
    s3.putBox(0,6,15,15,10,10);
    s3.cutBox(7,7,11,19,3,3);

    s3.cutBox(7,7,17,24,10,12);
    s3.cutBox(7,7,6,13,10,12);

    s3.cutBox(8,8,19,26,11,12);
    s3.cutBox(8,8,4,11,11,12);

    s3.cutBox(9,9,21,28,12,12);
    s3.cutBox(9,9,2,9,12,12);

    // Detalhamento da Lateral Direita
    s3.cutVoxel(17,10,3);
    s3.cutVoxel(16,9,3);
    s3.cutVoxel(15,8,3);
    s3.cutBox(12,13,6,6,5,5);
    s3.cutBox(10,11,6,6,6,6);
    s3.cutVoxel(9,6,7);

    s3.cutBox(10,20,4,5,6,12);
    s3.cutBox(8,23,6,6,10,12);

    s3.setColor(1.0,0.0,0.0,1.0);
    s3.putVoxel(17,10,4);
    s3.putVoxel(16,9,4);
    s3.putVoxel(15,8,4);
    s3.putBox(14,15,7,7,4,4);
    s3.putVoxel(13,7,5);
    s3.putBox(12,13,7,7,5,5);
    s3.putBox(10,11,7,7,6,6);
    s3.putVoxel(9,7,7);

    s3.setColor(0.2,0.2,0.2,1.0);
    s3.putBox(11,23,7,7,10,11);

    s3.setColor(1.0,0.0,0.0,1.0);
    s3.putBox(20,21,9,9,3,3);
    s3.putBox(20,21,8,8,4,4);
    s3.putBox(20,21,7,7,5,5);

    // Detalhamento da Lateral Esquerda
    s3.cutVoxel(17,20,3);
    s3.cutVoxel(16,21,3);
    s3.cutVoxel(15,22,3);
    s3.cutBox(12,13,24,24,5,5);
    s3.cutBox(10,11,24,24,6,6);
    s3.cutVoxel(9,24,7);

    s3.cutBox(10,20,25,26,6,12);
    s3.cutBox(8,23,24,24,10,12);

    s3.setColor(1.0,0.0,0.0,1.0);
    s3.putVoxel(17,20,4);
    s3.putVoxel(16,21,4);
    s3.putVoxel(15,22,4);
    s3.putBox(14,15,23,23,4,4);
    s3.putBox(12,13,23,23,5,5);
    s3.putBox(10,11,23,23,6,6);
    s3.putVoxel(9,23,7);

    s3.putBox(11,12,25,25,8,8);
    s3.putBox(14,15,25,25,8,8);

    s3.setColor(0.2,0.2,0.2,1.0);
    s3.putBox(11,23,23,23,10,11);

    s3.setColor(1.0,0.0,0.0,1.0);
    s3.putBox(20,21,21,21,3,3);
    s3.putBox(20,21,22,22,4,4);
    s3.putBox(20,21,23,23,5,5);

    // Detalhamento Posterior
    s3.cutVoxel(29,15,10);
    s3.setColor(1.0,0.0,0.0,1.0);
    s3.putBox(28,28,14,16,8,10);

    s3.writeOFF("Mouse.off");

    //Sculptor s4(30,30,30);
    //s4.setColor(1.0,0.0,0.0,1.0);
    //s4.putBox(6,6,15,15,3,12);
    //s4.writeOFF("Linha.off");

    return 0;
}
