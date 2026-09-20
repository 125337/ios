// FUN_002af3b0 @ 002af3b0

double FUN_002af3b0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   double param_5,double param_6,undefined8 param_7)

{
  ulong uVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double local_2c8;
  double local_2b8;
  double local_2b0;
  double local_2a0;
  double local_298;
  ulong local_68;
  double local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  double local_40;
  double dStack_38;
  double local_30;
  double dStack_28;
  
  dVar4 = DAT_02323f08;
  local_68 = 0;
  local_60 = param_1;
  uStack_58 = param_2;
  local_50 = param_3;
  uStack_48 = param_4;
  _objc_storeStrong(&local_68,param_7);
  uVar1 = local_68;
  FUN_002adfd4();
  if ((uVar1 == 0) ||
     (uVar2 = uVar1, _CGRectIsEmpty(local_60,uStack_58,local_50,uStack_48), (uVar2 & 1) != 0)) {
    dStack_28 = *(double *)(PTR__CGRectZero_025782f0 + 0x18);
    local_30 = *(double *)(PTR__CGRectZero_025782f0 + 0x10);
    local_40 = *(double *)PTR__CGRectZero_025782f0;
    dStack_38 = *(double *)(PTR__CGRectZero_025782f0 + 8);
  }
  else {
    dVar3 = local_60;
    _CGRectGetWidth(local_60,uStack_58,local_50,uStack_48);
    dVar5 = (double)NEON_ucvtf(uVar1);
    dVar3 = dVar3 / dVar5;
    local_298 = dVar3 * DAT_02323f00;
    if (local_298 <= 2.0) {
      local_298 = 2.0;
    }
    local_2a0 = dVar3 - (local_298 + 1.0) * 2.0;
    if (local_2a0 <= 18.0) {
      local_2a0 = 18.0;
    }
    local_2b0 = local_60;
    _CGRectGetHeight(local_60,uStack_58,local_50,uStack_48);
    local_2b0 = local_2b0 - 8.0;
    if (local_2b0 <= 20.0) {
      local_2b0 = 20.0;
    }
    FUN_002adba4(param_6,0,DAT_02323ec8);
    local_2b8 = local_2a0 * (dVar4 + DAT_02323e80 * param_6);
    if (dVar3 - 3.0 < local_2b8) {
      local_2b8 = dVar3 - 3.0;
    }
    dVar3 = local_60;
    _CGRectGetHeight(local_60,uStack_58,local_50,uStack_48);
    local_2c8 = local_2b0 * (dVar4 + DAT_02323d50 * param_6);
    if (dVar3 - 6.0 < local_2c8) {
      local_2c8 = dVar3 - 6.0;
    }
    dVar4 = local_60;
    _CGRectGetMinX(local_60,uStack_58,local_50,uStack_48);
    dVar3 = local_60;
    _CGRectGetMaxX(local_60,uStack_58,local_50,uStack_48);
    FUN_002adba4(param_5,dVar4 + local_2b8 * 0.5 + 2.0,(dVar3 - local_2b8 * 0.5) - 2.0);
    dVar4 = local_60;
    _CGRectGetMidY(local_60,uStack_58,local_50,uStack_48);
    dVar4 = dVar4 - local_2c8 * 0.5;
    param_5 = param_5 - local_2b8 * 0.5;
    FUN_002adf88();
    local_40 = param_5;
    dStack_38 = dVar4;
    local_30 = local_2b8;
    dStack_28 = local_2c8;
  }
  _objc_storeStrong(&local_68,0);
  return local_40;
}

