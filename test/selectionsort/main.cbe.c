/* Provide Declarations */
#include <stdint.h>
#ifndef __cplusplus
typedef unsigned char bool;
#endif



/* Global Declarations */

/* Types Declarations */

/* Function definitions */

/* Types Definitions */

/* Function Declarations */
_Float16 add(_Float16 llvm_cbe_x, _Float16 llvm_cbe_y);
_Float16 sub(_Float16 llvm_cbe_x, _Float16 llvm_cbe_y);
_Float16 mul(_Float16 llvm_cbe_x, _Float16 llvm_cbe_y);
_Float16 div(_Float16 llvm_cbe_x, _Float16 llvm_cbe_y);
_Float16 rem(_Float16 llvm_cbe_x, _Float16 llvm_cbe_y);
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


int main(void) {
  return 6;
}

