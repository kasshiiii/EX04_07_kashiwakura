#include "getVolumeSurface.h"
void VolumeSurface(double width, double height, double depth, double& volume, double& surface) {
    surface = (width * height + width * depth + height * depth) * 2;
    volume = width * height * depth;
}