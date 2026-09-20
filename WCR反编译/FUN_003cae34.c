// FUN_003cae34 @ 003cae34

void FUN_003cae34(double *param_1,double *param_2)

{
  double dVar1;
  double local_70;
  double local_68;
  double local_60;
  double local_30;
  double local_28;
  double *local_20;
  double *local_18;
  
  dVar1 = 0.0;
  local_28 = 0.0;
  local_30 = 0.0;
  local_20 = param_2;
  local_18 = param_1;
  FUN_003cbad4(&local_28,&local_30,0);
  if (local_18 != (double *)0x0) {
    FUN_003caf7c();
    if (local_28 <= 1.0) {
      local_60 = (32.0 - dVar1) * 0.5 + 14.0;
    }
    else {
      local_60 = local_28 - dVar1 * 0.5;
    }
    if (local_60 <= 0.0) {
      local_68 = 0.0;
    }
    else {
      local_68 = local_60;
    }
    *local_18 = local_68;
  }
  if (local_20 != (double *)0x0) {
    if (local_30 <= 1.0) {
      local_70 = 56.0;
    }
    else {
      local_70 = local_30;
    }
    *local_20 = local_70;
  }
  return;
}

