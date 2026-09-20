// clampInset: @ 00ebb38c

/* WARNING: Removing unreachable block (ram,0x00ebb484) */
/* WARNING: Removing unreachable block (ram,0x00ebb49c) */
/* WARNING: Removing unreachable block (ram,0x00ebb4a0) */
/* WARNING: Removing unreachable block (ram,0x00ebb4a8) */
/* WARNING: Removing unreachable block (ram,0x00ebb3f8) */
/* WARNING: Removing unreachable block (ram,0x00ebb408) */
/* WARNING: Removing unreachable block (ram,0x00ebb40c) */
/* WARNING: Removing unreachable block (ram,0x00ebb414) */
/* WARNING: Removing unreachable block (ram,0x00ebb3a4) */
/* WARNING: Removing unreachable block (ram,0x00ebb3bc) */
/* WARNING: Removing unreachable block (ram,0x00ebb3c0) */
/* WARNING: Removing unreachable block (ram,0x00ebb3c8) */
/* WARNING: Removing unreachable block (ram,0x00ebb420) */
/* WARNING: Removing unreachable block (ram,0x00ebb440) */
/* WARNING: Removing unreachable block (ram,0x00ebb444) */
/* WARNING: Removing unreachable block (ram,0x00ebb44c) */
/* Function Stack Size: 0x18 bytes */

double WCRefineBubbleCut::clampInset_(ID param_1,SEL param_2,double param_3)

{
  double local_38;
  
  if (ABS(param_3) == INFINITY) {
    local_38 = 20.0;
  }
  else if (0.0 <= param_3) {
    local_38 = param_3;
    if (80.0 < param_3) {
      local_38 = 80.0;
    }
  }
  else {
    local_38 = 0.0;
  }
  return local_38;
}

