// FUN_006a997c @ 006a997c

undefined1  [16]
FUN_006a997c(double param_1,double param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  double dVar3;
  double dVar4;
  ulong local_108;
  double local_98;
  ulong local_58;
  ulong local_50;
  undefined8 local_48;
  ulong local_40;
  ulong local_38;
  double local_30;
  double local_28;
  
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_6);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_7);
  uVar2 = local_38;
  FUN_006a9718();
  _objc_retainAutoreleasedReturnValue();
  local_108 = uVar2;
  if (uVar2 == 0) {
    local_58 = local_40;
    FUN_006a9718();
    _objc_retainAutoreleasedReturnValue();
    local_108 = local_58;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_108;
  if (uVar2 == 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if (local_50 == 0) {
    _objc_storeStrong(&local_50,local_38);
  }
  if (((local_40 != 0) &&
      (uVar2 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isHidden_026ca768),
      (uVar2 & 1) == 0)) &&
     ((*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_alpha_026ca4d8), param_2 = DAT_02323d38,
     DAT_02323d38 < param_1)) {
    FUN_006aa4a8(local_40);
    param_2 = 0.5;
    if (0.5 < param_1) {
      dVar4 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
      dVar3 = dVar4;
      _CGRectGetWidth(dVar4,param_2,param_3,param_4);
      uVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_textAlignment_026a66e8);
      if (uVar2 == 2) {
        dVar3 = dVar4;
        _CGRectGetMaxX(0,dVar4,param_2,param_3,param_4);
        local_98 = dVar3 - param_1;
      }
      else {
        uVar2 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_textAlignment_026a66e8);
        local_98 = dVar4;
        if (uVar2 == 1) {
          local_98 = dVar4 + (dVar3 - param_1) * 0.5;
        }
      }
      uVar2 = local_40;
      local_98 = local_98 + param_1;
      _CGRectGetMidY(dVar4,param_2,param_3,param_4);
      FUN_006aa80c();
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_convertPoint_toView__0269e548,local_48);
      local_30 = local_98;
      local_28 = dVar4;
      goto LAB_006a9d10;
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_bounds_026ca548);
  uVar2 = local_50;
  dVar4 = param_1;
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  _CGRectGetMidY(param_1,param_2,param_3,param_4);
  FUN_006aa80c();
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_convertPoint_toView__0269e548,local_48);
  local_30 = dVar4;
  local_28 = param_1;
LAB_006a9d10:
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  auVar1._8_8_ = local_28;
  auVar1._0_8_ = local_30;
  return auVar1;
}

