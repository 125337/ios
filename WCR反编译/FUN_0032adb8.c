// FUN_0032adb8 @ 0032adb8

uint FUN_0032adb8(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  uint local_40;
  uint local_28;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar2 = local_18;
  local_28 = 0;
  if (local_18 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isMemberOfClass__026a2030,puVar1);
    uVar3 = local_18;
    local_40 = 1;
    if ((uVar2 & 1) == 0) {
      puVar1 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
      local_40 = (uint)uVar3;
    }
    local_28 = local_40;
  }
  _objc_storeStrong(&local_18,0);
  return local_28 & 1;
}

