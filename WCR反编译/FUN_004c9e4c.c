// FUN_004c9e4c @ 004c9e4c

void FUN_004c9e4c(undefined8 param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  undefined *local_38;
  cfstringStruct *local_30;
  uint local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
  }
  else {
    pcVar2 = &cf_m_addButton;
    _NSSelectorFromString();
    uVar3 = local_20;
    local_30 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,pcVar2);
    if ((uVar3 & 1) != 0) {
      local_38 = PTR__objc_msgSend_02578628;
      uVar4 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,local_30);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___UIView_026cdfd8;
      local_40 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
      uVar3 = local_40;
      bVar1 = (uVar4 & 1) != 0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar3;
      }
      local_24 = (uint)bVar1;
      _objc_storeStrong(&local_40,0);
      if (local_24 != 0) goto LAB_004ca064;
    }
    uVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
    _class_getInstanceVariable();
    local_48 = uVar3;
    if (uVar3 != 0) {
      uVar4 = local_20;
      _object_getIvar(local_20,uVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___UIView_026cdfd8;
      local_50 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
      uVar3 = local_50;
      bVar1 = (uVar4 & 1) != 0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar3;
      }
      local_24 = (uint)bVar1;
      _objc_storeStrong(&local_50,0);
      if (local_24 != 0) goto LAB_004ca064;
    }
    local_18 = 0;
    local_24 = 1;
  }
LAB_004ca064:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

