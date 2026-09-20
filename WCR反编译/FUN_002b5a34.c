// FUN_002b5a34 @ 002b5a34

double FUN_002b5a34(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  long local_68;
  double local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  double local_40;
  double dStack_38;
  double local_30;
  double dStack_28;
  
  local_68 = 0;
  local_60 = param_1;
  uStack_58 = param_2;
  local_50 = param_3;
  uStack_48 = param_4;
  _objc_storeStrong(&local_68,param_5);
  lVar1 = local_68;
  FUN_002adfd4();
  lVar2 = local_68;
  FUN_002b3738(local_68,param_6);
  if ((lVar1 == 0) || (lVar2 + -0x7fffffffffffffff == 0)) {
    local_40 = *(double *)PTR__CGRectZero_025782f0;
    dStack_38 = *(double *)(PTR__CGRectZero_025782f0 + 8);
    local_30 = *(double *)(PTR__CGRectZero_025782f0 + 0x10);
    dStack_28 = *(double *)(PTR__CGRectZero_025782f0 + 0x18);
  }
  else {
    dVar3 = local_60;
    _CGRectGetWidth(lVar2 + -0x7fffffffffffffff,local_60,uStack_58,local_50,uStack_48);
    dVar5 = (double)NEON_ucvtf(lVar1);
    dVar3 = dVar3 / dVar5;
    dVar5 = local_60;
    _CGRectGetMinX(local_60,uStack_58,local_50,uStack_48);
    dVar6 = (double)NEON_ucvtf(lVar2);
    dVar5 = dVar5 + dVar6 * dVar3;
    dVar6 = local_60;
    _CGRectGetMinY(local_60,uStack_58,local_50,uStack_48);
    dVar4 = local_60;
    _CGRectGetHeight(local_60,uStack_58,local_50,uStack_48);
    FUN_002adf88();
    _CGRectInset();
    local_40 = dVar5;
    dStack_38 = dVar6;
    local_30 = dVar3;
    dStack_28 = dVar4;
  }
  _objc_storeStrong(&local_68,0);
  return local_40;
}

