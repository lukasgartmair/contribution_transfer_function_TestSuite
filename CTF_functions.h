#ifndef CTF_H
#define CTF_H

#include <vector>
#include <math.h>       /* modf */

typedef struct coordinate {
float x;
float y;
float z;
} coordinate;

std::vector<std::vector<float> > initializeCubeVertices(float start_index);

std::vector<float> projectAtompositionToUnitvoxel(std::vector<float> atom_position, float voxel_size);

std::vector<std::vector<float> > determineSurroundingVoxelVertices(std::vector<float> atom_position, float voxel_size);

bool checkVertexCornerCoincidence(std::vector<float> atom_position, float voxel_size);

std::vector<float> handleVertexCornerCoincidence(std::vector<float> atom_position, float voxel_size);

std::vector<float> calcSubvolumes(std::vector<float> atom_position, float voxel_size);

std::vector<float> calcVoxelContributions(std::vector<float> volumes_of_subcuboids);

#endif
