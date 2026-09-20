// FUN_00f846a4 @ 00f846a4

double FUN_00f846a4(double param_1,double param_2,undefined8 param_3,double param_4,
                   undefined8 param_5,undefined8 param_6,uint param_7,uint param_8)

{
  ulong uVar1;
  double dVar2;
  long local_60;
  ulong local_58;
  double local_50;
  double dStack_48;
  undefined8 local_40;
  double dStack_38;
  double local_30;
  double dStack_28;
  undefined8 local_20;
  double dStack_18;
  
  local_58 = 0;
  local_50 = param_1;
  dStack_48 = param_2;
  local_40 = param_3;
  dStack_38 = param_4;
  _objc_storeStrong(&local_58,param_5);
  local_60 = 0;
  _objc_storeStrong(&local_60,param_6);
  uVar1 = local_58;
  if ((local_58 == 0) || (local_60 == 0)) {
    dStack_28 = dStack_48;
    local_30 = local_50;
    dStack_18 = dStack_38;
    local_20 = local_40;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_bounds_026ca548);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_convertRect_toView__0269ded8,local_60);
    _CGRectIsEmpty(param_1,param_2,param_3,param_4);
    if ((uVar1 & 1) == 0) {
      if ((param_7 & 1) == 0) {
        dVar2 = param_1;
        _CGRectGetMinY(param_1,param_2,param_3,param_4);
        dVar2 = dVar2 + 0.0;
        if (dVar2 < dStack_48) {
          dStack_38 = dStack_38 + (dStack_48 - dVar2);
          dStack_48 = dVar2;
        }
      }
      if ((param_8 & 1) == 0) {
        _CGRectGetMaxY(param_1,param_2,param_3,param_4);
        dVar2 = local_50;
        _CGRectGetMaxY(local_50,dStack_48,local_40,dStack_38);
        if (dVar2 < param_1 - 0.0) {
          dStack_38 = (param_1 - 0.0) - dStack_48;
        }
      }
      dStack_28 = dStack_48;
      local_30 = local_50;
      dStack_18 = dStack_38;
      local_20 = local_40;
    }
    else {
      dStack_28 = dStack_48;
      local_30 = local_50;
      dStack_18 = dStack_38;
      local_20 = local_40;
    }
  }
  local_50 = local_30;
  dStack_48 = dStack_28;
  local_40 = local_20;
  dStack_38 = dStack_18;
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  return local_30;
}

