#define _3D_VIEWER_HELP_FUNCTIONS_
#include "./s21_3DViewer.h"
#include <time.h>



int main() {
    Model3D *this = (Model3D *)malloc(sizeof(Model3D));

    uint start = clock();
    parseModel3D(this, "./ObjFiles/FinalBaseMesh.obj");
    // parseModel3D(this, "./ObjFiles/my_cube.obj");
    Model3D *other = (Model3D *)malloc(sizeof(Model3D));
    copyStartStateModel(this, other);
    // parseModel3D(model, "./Mustang.obj");
    // parseModel3D(model, "./building_04.obj");
    // parseModel3D(model, "./doom.obj");
    // if (model->_status.parse_result != OK) {
    //     printf("Error!\n");
    //     return 1;
    // }

    // uint end = clock();

    // printf("Working time: %f\n", (end-start)/1e3);
    // printf("total vertexes: %u\ttotal coords: %u\n", model->_status.total_vertexes, model->_status.total_coords);
    // printf("total poligons: %u\ttotal indexs: %u\n", model->_status.total_poligons, model->_status.total_indexes);

    // for (uint i = 0; i < model->_status.total_coords; i++) {
    //     printf("%f\t", model->_vertex_array[i]);
    //     if (i != 0 && (i + 1) % 3 == 0) {
    //         printf("\n");
    //     }
    // }

    // for (uint i = 0; i < model->_status.total_indexes; i++) {
    //     printf("%u\t", model->_index_array[i]);
    //     if (i != 0 && (i + 1) % 6 == 0) {
    //         printf("\n");
    //     }
    // }

    return 0;
}