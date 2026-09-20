// FUN_004c17f8 @ 004c17f8

void FUN_004c17f8(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  cfstringStruct *local_38;
  uint local_30;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar3 = local_20;
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
    local_18 = 0;
    local_30 = 1;
  }
  else {
    pcVar4 = &cf_m_addButton;
    _NSSelectorFromString();
    uVar3 = local_20;
    local_38 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,pcVar4);
    if ((uVar3 & 1) != 0) {
      uVar5 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,local_38);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
      local_40 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
      uVar3 = local_40;
      bVar1 = (uVar5 & 1) != 0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar3;
      }
      local_30 = (uint)bVar1;
      _objc_storeStrong(&local_40,0);
      if (local_30 != 0) goto LAB_004c1b10;
    }
    uVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
    _class_getInstanceVariable(uVar3,"m_addButton");
    local_48 = uVar3;
    if (uVar3 != 0) {
      uVar5 = local_20;
      _object_getIvar(local_20,uVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
      local_50 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
      uVar3 = local_50;
      bVar1 = (uVar5 & 1) != 0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar3;
      }
      local_30 = (uint)bVar1;
      _objc_storeStrong(&local_50,0);
      if (local_30 != 0) goto LAB_004c1b10;
    }
    local_18 = 0;
    local_30 = 1;
  }
LAB_004c1b10:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

