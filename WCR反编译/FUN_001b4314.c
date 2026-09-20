// FUN_001b4314 @ 001b4314

byte FUN_001b4314(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  do {
    if (local_20 == 0) {
      local_11 = 0;
      break;
    }
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    local_28 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_isEqualToString__0269ccc8,&cf_ContactsViewController);
    if (((uVar2 & 1) == 0) &&
       (uVar2 = local_28,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_28,PTR_s_isEqualToString__0269ccc8,&cf_NewContactsViewController),
       (uVar2 & 1) == 0)) {
      uVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_parentViewController_0269e500);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_20;
      local_20 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      bVar1 = false;
    }
    else {
      local_11 = 1;
      bVar1 = true;
    }
    _objc_storeStrong(&local_28,0);
  } while (!bVar1);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

