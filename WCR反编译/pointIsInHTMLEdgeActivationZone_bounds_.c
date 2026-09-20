// pointIsInHTMLEdgeActivationZone:bounds: @ 0080f0a0

/* Function Stack Size: 0x40 bytes */

bool WCRefineProfileBgHTMLEdgePress::pointIsInHTMLEdgeActivationZone_bounds_
               (ID param_1,SEL param_2,CGPoint param_3,CGRect param_4)

{
  double in_d0;
  double in_d1;
  double in_d4;
  double in_d5;
  double local_a0;
  double local_98;
  byte local_1;
  
  if ((in_d4 <= 1.0) || (in_d5 <= 1.0)) {
    local_1 = 0;
  }
  else {
    local_98 = in_d4 * DAT_02323c68;
    if (local_98 <= 16.0) {
      local_98 = 16.0;
    }
    local_a0 = in_d5 * DAT_02323c68;
    if (local_a0 <= 16.0) {
      local_a0 = 16.0;
    }
    if ((in_d0 <= local_98) || (in_d4 - local_98 <= in_d0)) {
      local_1 = 1;
    }
    else if ((in_d1 <= local_a0) || (in_d5 - local_a0 <= in_d1)) {
      local_1 = 1;
    }
    else {
      local_1 = 0;
    }
  }
  return (uint)local_1;
}

