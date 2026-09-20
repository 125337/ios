// FUN_0209b66c @ 0209b66c

/* WARNING: Removing unreachable block (ram,0x0209b760) */
/* WARNING: Removing unreachable block (ram,0x0209b778) */
/* WARNING: Removing unreachable block (ram,0x0209b77c) */
/* WARNING: Removing unreachable block (ram,0x0209b784) */
/* WARNING: Removing unreachable block (ram,0x0209b6d4) */
/* WARNING: Removing unreachable block (ram,0x0209b6e4) */
/* WARNING: Removing unreachable block (ram,0x0209b6e8) */
/* WARNING: Removing unreachable block (ram,0x0209b6f0) */
/* WARNING: Removing unreachable block (ram,0x0209b680) */
/* WARNING: Removing unreachable block (ram,0x0209b698) */
/* WARNING: Removing unreachable block (ram,0x0209b69c) */
/* WARNING: Removing unreachable block (ram,0x0209b6a4) */
/* WARNING: Removing unreachable block (ram,0x0209b6fc) */
/* WARNING: Removing unreachable block (ram,0x0209b71c) */
/* WARNING: Removing unreachable block (ram,0x0209b720) */
/* WARNING: Removing unreachable block (ram,0x0209b728) */

double FUN_0209b66c(double param_1,double param_2)

{
  double local_38;
  
  local_38 = param_2;
  if (ABS(param_1) != INFINITY) {
    if (0.0 <= param_1) {
      local_38 = param_1;
      if (80.0 < param_1) {
        local_38 = 80.0;
      }
    }
    else {
      local_38 = 0.0;
    }
  }
  return local_38;
}

