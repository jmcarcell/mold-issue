#include "ClusterShapes.h"
int main() {
   // Example usage of ClusterShapes class
   float energyHits[] = {1.0, 2.0, 3.0};  // Example hit energies
   float x[] = {0.1, 0.2, 0.3};  // Example x coordinates of hits
   float y[] = {0.1, 0.2, 0.3};  // Example y coordinates of hits
   float z[] = {0.1, 0.2, 0.3};  // Example z coordinates of hits
   ClusterShapes cluster(3, energyHits, x, y, z);

   cluster.getEigenVecInertia();
   cluster.getEigenVecInertiaErrors();
   cluster.getCentreOfGravity();

   return 0;
}
