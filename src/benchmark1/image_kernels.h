/**
 * \brief OBPMark #1: Image Pre-Processing - Common processing kernel functions.
 * \file image_kernels.h
 * \author David Steenari
 */
// FIXME add licence info 
#ifndef OBPMARK_IMAGE_KERNELS_H_
#define OBPMARK_IMAGE_KERNELS_H_

#include <stdint.h>

/* Typedefs */

/** \brief Frame structure. */
typedef struct {
	uint32_t **f; 	///< Frame buffer
	unsigned int w; ///< Frame width 
	unsigned int h; ///< Frame width 
} frame32_t;

/* Functions */

/** 
 * \brief Remove an offset frame from another frame. 
 */
void f_offset(
	frame32_t *frame,
	frame32_t *offset
	);

/**
 * \brief Co-add pixels in a frame into a sum frame.
 */
void f_coadd(
	frame32_t *sum_frame,
	frame32_t *add_frame
	);

/**
 * \brief Multiply a frame by a gain frame, pixel by pixel.
 */
// FIXME gain should be an Q15(?) integer
void f_gain(
	frame32_t *frame,
	float **gain_frame	
	);

/**
 * \brief Bad-pixel correction. Replaces the value of a pixel with average of the neighbours, if it is marked in a bad pixel map.
 */
void f_bad_pixel_cor(
	frame32_t *frame, 
	uint8_t	**bad_pixel_frame
	);

/**
 * \brief Radiation scrubbing. 
 */
void f_scrub(
	frame32_t *fs,
	unsigned int num_frames,
	unsigned int num_neigh
	);
#endif // OBPMARK_IMAGE_KERNELS_H_
