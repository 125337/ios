// FUN_000ca230 @ 000ca230

double FUN_000ca230(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                   undefined8 param_5,double *param_6,double *param_7)

{
  double dVar1;
  double local_f0;
  long local_78;
  long local_70;
  double *local_68;
  double *local_60;
  undefined8 local_58;
  double local_50;
  undefined8 uStack_48;
  double local_40;
  undefined8 uStack_38;
  double local_30;
  undefined8 uStack_28;
  double local_20;
  undefined8 uStack_18;
  
  local_58 = 0;
  local_50 = param_1;
  uStack_48 = param_2;
  local_40 = param_3;
  uStack_38 = param_4;
  _objc_storeStrong(&local_58,param_5);
  local_70 = 0;
  local_78 = 0;
  local_68 = param_7;
  local_60 = param_6;
  FUN_000ca7a8(local_58,&local_70,&local_78);
  dVar1 = (double)local_70;
  FUN_000caa2c(dVar1,local_40,(double)local_78);
  local_f0 = (double)local_78;
  FUN_000caa2c(local_f0,local_40,dVar1);
  if (local_60 != (double *)0x0) {
    *local_60 = dVar1;
  }
  if (local_68 != (double *)0x0) {
    *local_68 = local_f0;
  }
  local_f0 = dVar1 + local_f0;
  if ((0.0 < local_f0) && (local_f0 < local_40)) {
    local_50 = local_50 + dVar1;
    local_f0 = local_40 - local_f0;
    if (local_f0 <= 1.0) {
      local_f0 = 1.0;
    }
    local_40 = local_f0;
  }
  uStack_28 = uStack_48;
  local_30 = local_50;
  uStack_18 = uStack_38;
  local_20 = local_40;
  _objc_storeStrong(&local_58,0);
  return local_30;
}

