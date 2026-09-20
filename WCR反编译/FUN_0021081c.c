// FUN_0021081c @ 0021081c

void FUN_0021081c(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_40;
  uint local_38;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  FUN_0021029c();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar2;
  if (uVar2 == 0) {
    if (local_20 == 0) {
      local_18 = 0;
      local_38 = 1;
    }
    else {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_contentView_026ca5a8);
      if ((uVar2 & 1) != 0) {
        uVar3 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf_contentView);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
        local_40 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
        uVar2 = local_40;
        bVar1 = (uVar3 & 1) != 0;
        if (bVar1) {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = uVar2;
        }
        local_38 = (uint)bVar1;
        _objc_storeStrong(&local_40,0);
        if (local_38 != 0) goto LAB_00210a60;
      }
      local_18 = 0;
      local_38 = 1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = 1;
    local_18 = uVar2;
  }
LAB_00210a60:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

