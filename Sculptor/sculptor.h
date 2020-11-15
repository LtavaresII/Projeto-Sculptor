#ifndef SCULPTOR_H
#define SCULPTOR_H
#include <iostream>

using namespace std;
/**
 * @brief A Estrutura Voxel
 */
struct Voxel {
   /**
   * @brief Guarda os valores das cores do voxel, respectivamente, vermelho
   */
  float r;
  /**
  * @brief Guarda os valores das cores do voxel, respectivamente, verde
  */
  float g;
  /**
  * @brief Guarda os valores das cores do voxel, respectivamente, azul
  */
  float b;
  /**
   * @brief Guarda o grau de transparencia do voxel, indo de transparante á opaco
   */
  float a;
  /**
   * @brief Indica se o voxel está presente ou não
   */
  bool isOn;
};
/**
 * @brief A Classe Sculptor
 */
class Sculptor
{
protected:
  /**
   * @brief Armazena a matriz voxel
   */
  Voxel ***v;
  /**
   * @brief Armazena os tamanhos da matriz voxel na dimensão x
   */
  int nx;
  /**
   * @brief Armazena os tamanhos da matriz voxel na dimensão y
   */
  int ny;
  /**
   * @brief Armazena os tamanhos da matriz voxel na dimensão z
   */
  int nz;
  /**
   * @brief Armazena a cor vermelha
   */
  float rv;
  /**
   * @brief Armazena a cor verde
   */
  float gv;
  /**
   * @brief Armazena a cor azul
   */
  float bv;
  /**
   * @brief Armazena o grau de transparencia da matriz voxel
   */
  float a;
public:
  /**
   * @brief Costrutor da classe Sculptor
   * @param _nx
   * Armazena o valor da matriz em x
   * @param _ny
   * Armazena o valor da matriz em y
   * @param _nz
   * Armazena o valor da matriz em z
   */
  Sculptor(int _nx, int _ny, int _nz);
  /**
   * @brief Destruidor da classe
   */
  ~Sculptor();
  /**
   * @brief Determina as cores e o grau de transparencia da matriz voxel
   * @param r (Vermelho)
   * @param g (Verde)
   * @param b (Azul)
   * @param a (Grau de Transparencia)
   */
  void setColor(float r, float g, float b, float alpha);
  /**
   * @brief Coloca a matriz voxel no sculptor
   * @param x
   * @param y
   * @param z
   */
  void putVoxel(int x, int y, int z);
  /**
   * @brief Retira a matriz voxel do sculptor
   * @param x
   * @param y
   * @param z
   */
  void cutVoxel(int x, int y, int z);
  /**
   * @brief Coloca um conjunto de voxels na forma de um cubo no sculptor
   * @param x0 (x incial)
   * @param x1 (x final)
   * @param y0 (y incial)
   * @param y1 (y final)
   * @param z0 (z incial)
   * @param z1 (z final)
   */
  void putBox(int x0, int x1, int y0, int y1, int z0, int z1);
  /**
   * @brief Retira um conjunto de voxels na forma de um cubo no sculptor
   * @param x0 (x incial)
   * @param x1 (x final)
   * @param y0 (y incial)
   * @param y1 (y final)
   * @param z0 (z incial)
   * @param z1 (z final)
   */
  void cutBox(int x0, int x1, int y0, int y1, int z0, int z1);
  /**
   * @brief Coloca um conjunto de voxels na forma de uma esfera no sculptor
   * @param xcenter (x central)
   * @param ycenter (y central)
   * @param zcenter (z central)
   * @param radius (Raio)
   */
  void putSphere(int xcenter, int ycenter, int zcenter, int radius);
  /**
   * @brief Retira um conjunto de voxels na forma de uma esfera no sculptor
   * @param xcenter (x central)
   * @param ycenter (y central)
   * @param zcenter (z central)
   * @param radius (Raio)
   */
  void cutSphere(int xcenter, int ycenter, int zcenter, int radius);
  /**
   * @brief Coloca um conjunto de voxels na forma de uma elipse no sculptor
   * @param xcenter (x central)
   * @param ycenter (y central)
   * @param zcenter (z central)
   * @param rx (Raio de x)
   * @param ry (Raio de y)
   * @param rz (Raio de z)
   */
  void putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
  /**
   * @brief Retira um conjunto de voxels na forma de uma elipse no sculptor
   * @param xcenter (x central)
   * @param ycenter (y central)
   * @param zcenter (z central)
   * @param rx (Raio de x)
   * @param ry (Raio de y)
   * @param rz (Raio de z)
   */
  void cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
  /**
   * @brief Escreve um arquivo do tipo OFF com os voxels armazenados
   * @param filename (Nome do Arquivo)
   */
  void writeOFF(string filename);
};

#endif // SCULPTOR_H
