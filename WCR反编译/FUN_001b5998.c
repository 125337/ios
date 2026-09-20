// FUN_001b5998 @ 001b5998

void FUN_001b5998(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **local_a0;
  undefined *local_58;
  undefined *local_50;
  int local_44;
  undefined *local_40 [3];
  undefined *local_28;
  undefined *local_20;
  undefined *local_18;
  
  local_20 = (undefined *)0x0;
  _objc_storeStrong(&local_20,param_1);
  puVar1 = local_20;
  FUN_001b4174();
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_40[0] = puVar1;
  while (local_40[0] != (undefined *)0x0) {
    puVar1 = local_40[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_isEqualToString__0269ccc8,&cf_ContactsViewController);
    if ((((ulong)puVar1 & 1) == 0) &&
       (puVar1 = local_50,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_50,PTR_s_isEqualToString__0269ccc8,&cf_NewContactsViewController),
       ((ulong)puVar1 & 1) == 0)) {
      local_44 = 0;
    }
    else {
      puVar1 = local_40[0];
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = puVar1;
      local_44 = 1;
    }
    _objc_storeStrong(&local_50,0);
    if (local_44 != 0) goto LAB_001b5b84;
    puVar2 = local_40[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_parentViewController_0269e500);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_40[0];
    local_40[0] = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  local_44 = 2;
LAB_001b5b84:
  _objc_storeStrong(local_40,0);
  if (local_44 == 2) {
    puVar1 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      local_a0 = &local_28;
    }
    else {
      local_a0 = &local_58;
    }
    puVar2 = *local_a0;
    local_58 = puVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_44 = 1;
    local_18 = puVar2;
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

