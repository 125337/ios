// FUN_004ce880 @ 004ce880

double FUN_004ce880(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                   long param_6,double *param_7,double *param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double local_210;
  undefined8 local_68;
  double local_60;
  double dStack_58;
  double local_50;
  double dStack_48;
  double local_40;
  double dStack_38;
  double local_30;
  double dStack_28;
  
  local_68 = 0;
  local_60 = param_1;
  dStack_58 = param_2;
  local_50 = param_3;
  dStack_48 = param_4;
  _objc_storeStrong(&local_68,param_5);
  FUN_004ce780(local_68);
  FUN_004cf768();
  dVar1 = local_60;
  dVar3 = dStack_58;
  dVar4 = local_50;
  dVar5 = dStack_48;
  FUN_004cf99c(local_68);
  local_40 = dVar1;
  dStack_38 = dVar3;
  local_30 = dVar4;
  dStack_28 = dVar5;
  if (param_6 < 1) {
    if (0.0 < param_1) {
      FUN_004cfe68(0,*(undefined8 *)PTR__CGRectZero_025782f0,
                   *(undefined8 *)(PTR__CGRectZero_025782f0 + 8),
                   *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10),
                   *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18),local_68);
      FUN_004d015c(local_68);
    }
    if (param_7 != (double *)0x0) {
      param_7[1] = dVar3;
      *param_7 = dVar1;
      param_7[3] = dVar5;
      param_7[2] = dVar4;
    }
    if (param_8 != (double *)0x0) {
      *param_8 = 0.0;
    }
  }
  else {
    dVar2 = (double)param_6;
    FUN_004d0254(param_6,dVar2,dVar1,dVar3,dVar4,dVar5);
    if (0.0 < dVar2) {
      dStack_38 = dVar3 + dVar2;
      local_210 = dVar5 - dVar2;
      if (local_210 <= 1.0) {
        local_210 = 1.0;
      }
      dStack_28 = local_210;
      FUN_004cfe68(dVar2,dVar1,dVar3,dVar4,dVar5,local_68);
      if (param_7 != (double *)0x0) {
        param_7[1] = dVar3;
        *param_7 = dVar1;
        param_7[3] = dVar5;
        param_7[2] = dVar4;
      }
      if (param_8 != (double *)0x0) {
        *param_8 = dVar2;
      }
    }
    else {
      if (param_7 != (double *)0x0) {
        param_7[1] = dVar3;
        *param_7 = dVar1;
        param_7[3] = dVar5;
        param_7[2] = dVar4;
      }
      if (param_8 != (double *)0x0) {
        *param_8 = 0.0;
      }
    }
  }
  _objc_storeStrong(&local_68,0);
  return local_40;
}

