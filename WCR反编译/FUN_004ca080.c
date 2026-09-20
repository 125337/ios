// FUN_004ca080 @ 004ca080

void FUN_004ca080(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  ulong local_48;
  undefined *local_40;
  cfstringStruct *local_38;
  ulong local_30;
  uint local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
    goto LAB_004ca25c;
  }
  uVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_customView_0269ea28);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_30 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  uVar5 = local_30;
  if ((uVar2 & 1) == 0) {
    pcVar4 = &cf_view;
    _NSSelectorFromString();
    uVar5 = local_20;
    local_38 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,pcVar4);
    if ((uVar5 & 1) != 0) {
      local_40 = PTR__objc_msgSend_02578628;
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,local_38);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
      local_48 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      uVar5 = local_48;
      bVar1 = (uVar2 & 1) != 0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar5;
      }
      local_24 = (uint)bVar1;
      _objc_storeStrong(&local_48,0);
      if (local_24 != 0) goto LAB_004ca24c;
    }
    local_18 = 0;
    local_24 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar5;
    local_24 = 1;
  }
LAB_004ca24c:
  _objc_storeStrong(&local_30,0);
LAB_004ca25c:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

