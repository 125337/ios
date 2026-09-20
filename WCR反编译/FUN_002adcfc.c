// FUN_002adcfc @ 002adcfc

double FUN_002adcfc(double param_1)

{
  double dVar1;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_28;
  
  dVar1 = param_1;
  FUN_002ad620();
  if (0.0 <= dVar1) {
    local_108 = param_1 - 32.0;
    if (local_108 <= 260.0) {
      local_108 = 260.0;
    }
    if (local_108 <= 300.0) {
      local_110 = local_108;
    }
    else {
      local_110 = 300.0;
    }
    local_28 = local_110;
  }
  else {
    dVar1 = -dVar1 / 6.0;
    FUN_002adba4(dVar1,0,0x3ff0000000000000);
    local_e8 = param_1 - 60.0;
    if (local_e8 <= 260.0) {
      local_e8 = 260.0;
    }
    if (local_e8 <= 300.0) {
      local_f0 = local_e8;
    }
    else {
      local_f0 = 300.0;
    }
    local_f8 = param_1 - 190.0;
    if (local_f8 <= 204.0) {
      local_f8 = 204.0;
    }
    if (local_f8 <= 238.0) {
      local_100 = local_f8;
    }
    else {
      local_100 = 238.0;
    }
    local_28 = local_f0 + dVar1 * (local_100 - local_f0);
  }
  return local_28;
}

