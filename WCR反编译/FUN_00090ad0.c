// FUN_00090ad0 @ 00090ad0

void FUN_00090ad0(double param_1,undefined8 param_2,double param_3,undefined8 param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_e8;
  ulong local_d0;
  ulong local_78;
  ulong local_70;
  byte local_61;
  undefined8 local_60;
  byte local_55 [5];
  ulong local_50;
  ulong local_48;
  ulong local_40 [3];
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_4);
  if ((DAT_028c7e78 & 1) == 0) {
    FUN_0006e628();
  }
  uVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = uVar3;
  if (uVar3 == 0) {
    local_d0 = local_28;
  }
  local_40[0] = uVar3;
  FUN_00071ca0();
  _objc_retainAutoreleasedReturnValue();
  if (local_40[0] == 0) {
    local_e8 = local_28;
  }
  else {
    local_e8 = local_40[0];
  }
  local_48 = local_d0;
  FUN_00077d80(local_e8,local_d0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_28;
  local_50 = local_e8;
  FUN_00090fac();
  if ((uVar3 & 1) == 0) {
    local_55[1] = 1;
    local_55[2] = 0;
    local_55[3] = 0;
    local_55[4] = 0;
  }
  else {
    local_55[0] = 0;
    local_60 = 0;
    FUN_00077e3c(local_50,local_55,&local_60);
    uVar3 = local_50;
    FUN_0007804c(local_50,local_55[0] & 1,local_60);
    local_61 = (byte)uVar3;
    uVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    if ((uVar3 == 0) && (FUN_0007799c(), (uVar3 & 1) != 0)) {
      local_61 = 1;
    }
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_valueForKey__0269d128,&cf_wxHighlightedImageView);
    _objc_retainAutoreleasedReturnValue();
    local_70 = uVar3;
    FUN_00081fbc(local_28,local_50,local_55[0] & 1,local_60,1);
    uVar3 = local_70;
    if (local_70 != 0) {
      puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
      uVar2 = local_70;
      if ((uVar3 & 1) != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_78 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_bounds_026ca548);
        bVar1 = false;
        if (0.0 < param_3) {
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_bounds_026ca548);
          bVar1 = 0.0 < param_1;
        }
        if (bVar1) {
          FUN_00081fbc(local_78,local_50,local_55[0] & 1,local_60,0);
        }
        _objc_storeStrong(&local_78,0);
      }
    }
    if ((local_61 & 1) != 0) {
      FUN_00073c54(local_28,3);
    }
    _objc_storeStrong(&local_70,0);
    local_55[1] = 0;
    local_55[2] = 0;
    local_55[3] = 0;
    local_55[4] = 0;
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(local_40,0);
  _objc_storeStrong(&local_28,0);
  return;
}

