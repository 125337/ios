// FUN_0019bc60 @ 0019bc60

void FUN_0019bc60(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  ulong local_40;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if ((local_20 == 0) ||
     (uVar1 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_contactsItemView_0269fcf0),
     (uVar1 & 1) == 0)) {
    local_18 = 0;
    local_30 = 1;
  }
  else {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_contactsItemView_0269fcf0);
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar2;
    FUN_0019131c(uVar2,"m_nickNameLabel");
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_38;
    local_40 = uVar2;
    if (uVar2 == 0) {
      pcVar3 = &cf_m_nickNameLabel;
      _NSSelectorFromString();
      FUN_0019143c(uVar1,pcVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_40;
      local_40 = uVar1;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    uVar1 = local_40;
    puVar4 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar4);
    local_18 = local_40;
    if ((uVar1 & 1) == 0) {
      local_18 = 0;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
    }
    local_30 = 1;
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

