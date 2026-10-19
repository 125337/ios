// setQuality: @0x97a98

/* Function Stack Size: 0x18 bytes */

void WCMYYImageEncoder::setQuality_(ID param_1,SEL param_2,double param_3)

{
  double local_28;
  double local_20;
  
  if (0.0 <= param_3) {
    local_28 = param_3;
    if (1.0 < param_3) {
      local_28 = 1.0;
    }
    local_20 = local_28;
  }
  else {
    local_20 = 0.0;
  }
  *(double *)(param_1 + 0x30) = local_20;
  return;
}

