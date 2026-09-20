// FUN_0042ec8c @ 0042ec8c

void FUN_0042ec8c(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_78;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_18 = 0;
    local_30 = 1;
  }
  else {
    uVar2 = local_20;
    FUN_0042efb4();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_38 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar2 & 1) == 0) {
      local_78 = 0;
    }
    else {
      local_78 = local_38;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_78;
    local_30 = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

