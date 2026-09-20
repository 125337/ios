// FUN_00071900 @ 00071900

void FUN_00071900(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_40;
  long local_38;
  ulong local_30;
  int local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = uVar1;
    for (local_38 = 0; local_30 != 0 && local_38 < 8; local_38 = local_38 + 1) {
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      local_40 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_containsString__0269d0b0,&cf_ContactsItemView);
      if (((uVar1 & 1) == 0) &&
         (uVar1 = local_40,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_40,PTR_s_containsString__0269d0b0,&cf_NewContactsItemCell),
         (uVar1 & 1) == 0)) {
        uVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_30;
        local_30 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar1);
        local_24 = 0;
      }
      else {
        uVar1 = local_30;
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar1;
        local_24 = 1;
      }
      _objc_storeStrong(&local_40,0);
      if (local_24 != 0) goto LAB_00071b14;
    }
    local_18 = 0;
    local_24 = 1;
LAB_00071b14:
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

