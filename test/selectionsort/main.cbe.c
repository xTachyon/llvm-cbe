/* Provide Declarations */
#include <stdint.h>
#include <math.h>
#ifndef __cplusplus
typedef unsigned char bool;
#endif



/* Global Declarations */
/* Helper union for bitcasts */
typedef union {
  uint16_t Int16;
  uint32_t Int32;
  uint64_t Int64;
  _Float16 Float16;
  float Float;
  double Double;
} llvmBitCastUnion;

/* Types Declarations */

/* Function definitions */

/* Types Definitions */

/* Function Declarations */
_Float16 add(_Float16 llvm_cbe_x, _Float16 llvm_cbe_y);
_Float16 sub(_Float16 llvm_cbe_x, _Float16 llvm_cbe_y);
_Float16 mul(_Float16 llvm_cbe_x, _Float16 llvm_cbe_y);
_Float16 div(_Float16 llvm_cbe_x, _Float16 llvm_cbe_y);
_Float16 rem(_Float16 llvm_cbe_x, _Float16 llvm_cbe_y);
uint32_t cast_u16(float llvm_cbe_x);
int main(void);


/* LLVM Intrinsic Builtin Function Bodies */


/* Function Bodies */

_Float16 add(_Float16 llvm_cbe_x, _Float16 llvm_cbe_y) {
  return (llvm_cbe_x + llvm_cbe_y);
}


_Float16 sub(_Float16 llvm_cbe_x, _Float16 llvm_cbe_y) {
  return (llvm_cbe_x - llvm_cbe_y);
}


_Float16 mul(_Float16 llvm_cbe_x, _Float16 llvm_cbe_y) {
  return (llvm_cbe_x * llvm_cbe_y);
}


_Float16 div(_Float16 llvm_cbe_x, _Float16 llvm_cbe_y) {
  return (llvm_cbe_x / llvm_cbe_y);
}


_Float16 rem(_Float16 llvm_cbe_x, _Float16 llvm_cbe_y) {
  return (fmodl(llvm_cbe_x, llvm_cbe_y));
}


uint32_t cast_u16(float llvm_cbe_x) {
  llvmBitCastUnion llvm_cbe_r__BITCAST_TEMPORARY;

  return ((llvm_cbe_r__BITCAST_TEMPORARY.Float = llvm_cbe_x, llvm_cbe_r__BITCAST_TEMPORARY.Int32));
}


int main(void) {
  return 6;
}

