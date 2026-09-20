// FUN_001ebf20 @ 001ebf20

void FUN_001ebf20(undefined8 param_1,double param_2,undefined8 param_3,byte param_4,byte param_5,
                 undefined8 param_6)

{
  bool bVar1;
  ulong uVar2;
  undefined *local_e0;
  double local_c8;
  ulong local_90;
  byte local_81;
  undefined *local_80;
  undefined *local_78;
  double local_70;
  ulong local_68;
  uint local_4c;
  undefined *local_48;
  double local_40;
  byte local_32;
  byte local_31;
  undefined8 local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  local_48 = (undefined *)0x0;
  local_40 = param_2;
  local_32 = param_5;
  local_31 = param_4;
  local_30 = param_1;
  _objc_storeStrong(&local_48,param_6);
  if (local_28 == 0) {
    local_4c = 1;
  }
  else {
    FUN_001d5a74(local_28);
    local_e0 = local_48;
    local_68 = 0;
    if ((local_31 & 1) == 0) {
      local_68 = 3;
    }
    if ((local_32 & 1) == 0) {
      local_68 = local_68 | 0xc;
    }
    if (local_68 == 0) {
      local_68 = 0xf;
    }
    if (local_40 <= 0.0) {
      local_c8 = 0.0;
    }
    else {
      local_c8 = local_40;
    }
    local_70 = local_c8;
    local_81 = 0;
    if (local_40 <= 0.0) {
      local_e0 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      local_81 = 1;
      local_80 = local_e0;
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_CGColor_026ca470);
    }
    else {
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_CGColor_026ca470);
    }
    if ((local_81 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_80);
    }
    local_78 = local_e0;
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    local_90 = uVar2;
    FUN_001eca1c(local_30,local_70,uVar2,local_68,local_78);
    bVar1 = (uVar2 & 1) == 0;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,local_90,PTR_s_setCornerRadius__026ca900);
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setMaskedCorners__0269ebc8,local_68);
      (*(code *)PTR__objc_msgSend_02578628)(local_70,local_90,PTR_s_setBorderWidth__026ca898);
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setBorderColor__026ca890,local_78);
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setMasksToBounds__026ca9b8,1);
    }
    local_4c = (uint)!bVar1;
    _objc_storeStrong(&local_90,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_28,0);
  return;
}

