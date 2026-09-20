// FUN_00654a24 @ 00654a24

byte FUN_00654a24(double param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_50 [3];
  ulong local_38;
  undefined4 local_2c;
  undefined8 local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar1 = local_20;
  local_28 = param_3;
  if (local_20 == 0) {
    local_11 = 0;
    local_2c = 1;
  }
  else {
    FUN_006549cc(param_3);
    _objc_getAssociatedObject(uVar1,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_38 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    uVar3 = local_38;
    if ((uVar1 & 1) == 0) {
      local_11 = 0;
      local_2c = 1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_50[0] = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      local_11 = false;
      if (uVar3 != 0) {
        uVar1 = local_50[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_isHidden_026ca768);
        local_11 = false;
        if ((uVar1 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_alpha_026ca4d8);
          local_11 = DAT_02323d38 < param_1;
        }
      }
      (*(code *)PTR__objc_release_02578630)(uVar3);
      local_2c = 1;
      _objc_storeStrong(local_50,0);
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

