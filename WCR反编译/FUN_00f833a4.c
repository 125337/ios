// FUN_00f833a4 @ 00f833a4

void FUN_00f833a4(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_60;
  ulong local_40;
  ulong local_38;
  uint local_2c;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_getBgImageView_0269f0e0);
  if ((uVar2 & 1) != 0) {
    uVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_getBgImageView_0269f0e0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_28 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    uVar2 = local_28;
    bVar1 = (uVar3 & 1) != 0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar2;
    }
    local_2c = (uint)bVar1;
    _objc_storeStrong(&local_28,0);
    if (local_2c != 0) goto LAB_00f835a8;
  }
  uVar2 = local_20;
  _object_getClass();
  _class_getInstanceVariable();
  local_38 = uVar2;
  if (uVar2 == 0) {
    uVar2 = local_20;
    _object_getClass();
    _class_getInstanceVariable();
    local_38 = uVar2;
  }
  if (local_38 == 0) {
    local_18 = 0;
    local_2c = 1;
  }
  else {
    uVar2 = local_20;
    _object_getIvar(local_20,local_38);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_40 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
    if ((uVar2 & 1) == 0) {
      local_60 = 0;
    }
    else {
      local_60 = local_40;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_60;
    local_2c = 1;
    _objc_storeStrong(&local_40,0);
  }
LAB_00f835a8:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

