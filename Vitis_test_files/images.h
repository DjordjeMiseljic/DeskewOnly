/*
 * Images.h
 *
 *  Created on: Jul 7, 2018
 *      Author: Nikola
 */

#include <stdint.h>
#ifndef SRC_IMAGES_H_
#define SRC_IMAGES_H_

unsigned int image_arr[784] = {0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0e4e,0x2dae,
		      0x3171,0x3171,0x3171,0x31b2,0x3171,0x3171,0x2d6d,0x0e4e,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		      0x04c5,0x1adb,0x3f7f,0x3f3f,0x3f3f,0x3f3f,0x3f3f,0x3f7f,
		      0x3f3f,0x3f3f,0x3f3f,0x3f3f,0x1b1b,0x00c1,0x0000,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x2a6a,0x3f3f,0x3f7f,0x3f3f,
		      0x3f3f,0x3f3f,0x3f3f,0x3f7f,0x3f3f,0x3f3f,0x3f3f,0x3f3f,
		      0x3f7f,0x1a9b,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0e4e,
		      0x3f7f,0x3f7f,0x4000,0x3f7f,0x3f7f,0x3f7f,0x3f7f,0x4000,
		      0x3f7f,0x3f7f,0x3f7f,0x3f7f,0x4000,0x33b4,0x0646,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x0000,0x2dae,0x3f3f,0x3f3f,0x3f7f,0x37f8,
		      0x0e8f,0x06c7,0x06c7,0x06c7,0x06c7,0x06c7,0x0acb,0x29ea,
		      0x3f7f,0x3f3f,0x31f2,0x0707,0x0000,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x04c5,0x3474,
		      0x3f3f,0x3f3f,0x3939,0x20a1,0x0000,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x37b8,0x3f3f,0x3f3f,0x1cdd,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x1555,0x3f3f,0x3f3f,0x3f3f,0x0bcc,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		      0x098a,0x3abb,0x3f3f,0x38f9,0x0343,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x28e9,0x3f3f,
		      0x3f3f,0x3f3f,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x24a5,0x3f3f,0x3f3f,
		      0x2f6f,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		      0x0000,0x0ccd,0x3bbc,0x3f7f,0x3c3c,0x0fd0,0x0000,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		      0x0000,0x38b9,0x3f7f,0x3f7f,0x3f7f,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x27e8,0x3f3f,0x3f3f,
		      0x18d9,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x0000,0x0c0c,0x38b9,0x3e7e,0x3f3f,0x3f3f,
		      0x1fe0,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		      0x0000,0x3f7f,0x3f3f,0x3f3f,0x1515,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x04c5,0x0e4e,0x25a6,0x38f9,
		      0x3f7f,0x3f3f,0x3f3f,0x3d7d,0x15d6,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x3878,0x3e7e,0x3f3f,
		      0x1515,0x0000,0x0000,0x0000,0x01c2,0x0343,0x0747,0x0747,
		      0x1a1a,0x3f3f,0x3f3f,0x3f3f,0x3f7f,0x3cbd,0x3030,0x1293,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x3878,0x3737,0x0949,0x0000,0x0000,0x0c0c,
		      0x2969,0x2f6f,0x3f3f,0x3f7f,0x3f3f,0x3f3f,0x3f3f,0x3f3f,
		      0x3f7f,0x1656,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x38b9,0x3f7f,
		      0x3f7f,0x3f7f,0x4000,0x3f7f,0x3f7f,0x3f7f,0x3f7f,0x4000,
		      0x3f7f,0x3f7f,0x2cad,0x0fd0,0x0000,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x1919,0x3f3f,0x3f3f,0x3f3f,0x3f7f,0x3f3f,
		      0x3f3f,0x3f3f,0x3f3f,0x3f7f,0x2c2c,0x2222,0x0242,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x04c5,0x2969,
		      0x30f1,0x30f1,0x3131,0x30f1,0x30f1,0x30f1,0x30f1,0x0e0e,
		      0x0182,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		      0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000};
unsigned int hdl_dskw_image[784] = {0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
			   0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
			   0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
			   0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
			   0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
			   0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
			   0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
			   0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
			   0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
			   0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
			   0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
			   0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
			   0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
			   0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
			   0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
			   0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
			   0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
			   0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
			   0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
			   0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
			   0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
			   0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
			   0x0000,0x0e4e,0x2dae,0x3171,0x3171,0x3171,0x31b2,0x3171,
			   0x3171,0x2d6d,0x0e4e,0x0000,0x0000,0x0000,0x0000,0x0000,
			   0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
			   0x0000,0x0000,0x0000,0x042c,0x1818,0x3aea,0x3f47,0x3f3f,
			   0x3f3f,0x3f3f,0x3f77,0x3f47,0x3f3f,0x3f3f,0x3f3f,0x1f9f,
			   0x040c,0x0018,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
			   0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1fcf,
			   0x3a09,0x3f6f,0x3f4f,0x3f3f,0x3f3f,0x3f3f,0x3f6f,0x3f4f,
			   0x3f3f,0x3f3f,0x3f3f,0x3f6f,0x23d4,0x06a6,0x0000,0x0000,
			   0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
			   0x0000,0x0000,0x08f0,0x2d0c,0x3f7f,0x3fcf,0x3faf,0x3f7f,
			   0x3f7f,0x3f7f,0x3fcf,0x3faf,0x3f7f,0x3f7f,0x3f7f,0x3fcf,
			   0x3850,0x174f,0x025a,0x0000,0x0000,0x0000,0x0000,0x0000,
			   0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x16d7,0x3676,
			   0x3f3f,0x3f5f,0x3bbb,0x2343,0x0aab,0x06c7,0x06c7,0x06c7,
			   0x06c7,0x08c9,0x1a5a,0x34b4,0x3f5f,0x3898,0x1c7c,0x0383,
			   0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
			   0x0000,0x01c9,0x16a6,0x3880,0x3f3f,0x3cfc,0x3000,0x1464,
			   0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x14e5,
			   0x3a8a,0x3f3f,0x325a,0x120a,0x0000,0x0000,0x0000,0x0000,
			   0x0000,0x0000,0x0000,0x0000,0x0000,0x0555,0x1fcf,0x3f3f,
			   0x3f3f,0x3262,0x08d9,0x0000,0x0000,0x0000,0x0000,0x0000,
			   0x0000,0x0000,0x0000,0x0262,0x15d6,0x3bdc,0x3dad,0x2b8b,
			   0x0272,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
			   0x0000,0x051d,0x2bb3,0x3f3f,0x3f3f,0x3757,0x0000,0x0000,
			   0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
			   0x0494,0x27f8,0x3f3f,0x3d45,0x2981,0x0000,0x0000,0x0000,
			   0x0000,0x0000,0x0000,0x0000,0x0000,0x0ccd,0x3bbc,0x3f7f,
			   0x3c3c,0x0fd0,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
			   0x0000,0x0000,0x0000,0x0000,0x0000,0x38b9,0x3f7f,0x3f7f,
			   0x3f7f,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
			   0x0000,0x22eb,0x3c54,0x3f3f,0x1da5,0x031b,0x0000,0x0000,
			   0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0a8a,
			   0x3323,0x3dc5,0x3f26,0x3f3f,0x23cb,0x03fc,0x0000,0x0000,
			   0x0000,0x0000,0x0000,0x0000,0x0000,0x2f9f,0x3f4f,0x3f3f,
			   0x1f9f,0x0545,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
			   0x0393,0x0beb,0x1fd0,0x3424,0x3ddd,0x3f4f,0x3f3f,0x3ded,
			   0x1fbf,0x0575,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
			   0x0000,0x234b,0x3c3b,0x3ef6,0x24e4,0x07e7,0x0000,0x0000,
			   0x0119,0x02b2,0x05c5,0x0747,0x130a,0x3151,0x3f3f,0x3f3f,
			   0x3f67,0x3dc5,0x34e4,0x1dad,0x06f7,0x0000,0x0000,0x0000,
			   0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1c3c,0x37d7,
			   0x2040,0x04a4,0x0000,0x0606,0x1aba,0x2c6c,0x3757,0x3f5f,
			   0x3f5f,0x3f3f,0x3f3f,0x3f3f,0x3f5f,0x2aea,0x0b2b,0x0000,
			   0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
			   0x0000,0x0000,0x1545,0x3b43,0x3f7f,0x3f7f,0x3faf,0x3fcf,
			   0x3f7f,0x3f7f,0x3f7f,0x3faf,0x3fcf,0x3f7f,0x3870,0x21da,
			   0x09e2,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
			   0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0646,0x22a2,
			   0x3f3f,0x3f3f,0x3f4f,0x3f6f,0x3f3f,0x3f3f,0x3f3f,0x3f4f,
			   0x3aaa,0x29a9,0x1a2a,0x01b1,0x0000,0x0000,0x0000,0x0000,
			   0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
			   0x0000,0x0000,0x0098,0x0959,0x2a5a,0x30f1,0x30f9,0x3129,
			   0x30f1,0x30f1,0x30f1,0x2c94,0x0c7c,0x0151,0x0000,0x0000,
			   0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
			   0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
			   0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
			   0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
			   0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
			   0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
			   0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
			   0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
			   0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
			   0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
			   0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
			   0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
			   0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
			   0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
			   0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
			   0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
			   0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
			   0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
			   0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
			   0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
			   0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
			   0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000};

#endif /* SRC_IMAGES_H_ */