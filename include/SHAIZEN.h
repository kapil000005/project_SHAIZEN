#ifndef SHAIZEN_H
#define SHAIZEN_H
#include <cmath>
#include <cstdint>
#include <float.h>
#include <stdint.h>
#include <sys/types.h>
#if __cplusplus
extern "C"{
#endif
typedef struct {
    uint64_t m , n ; 
} SS_matrix_dimension;
typedef struct {
    SS_matrix_dimension dimension;
    long_double_t* components;
} SS_vecter;

/*
     //============   component0
     ||
    |xx| ---|
    |xx| ---|
    |xx| ---|
    |xx| ---|====>     count = dimension 
    |xx| ---|
    |xx| ---|
    |xx| ---|

*/
typedef struct {
    SS_vecter x_componet , y_component;
} SS_plot_2d;
// x_component.dimesion == y_compnent.dimension

              SS_plot_2d* SF_new_plot(uint64_t data_count);
static inline SS_vecter*  SF_new_vecter(uint64_t dimension);

SS_vecter SF_2d_plot_error(const SS_plot_2d* real, const SS_vecter* approximate_ploynomial);
uint64_t  SF_absolute_error( const SS_vecter* error );

#if __cplusplus
}
#endif
#endif
