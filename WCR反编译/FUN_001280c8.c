// FUN_001280c8 @ 001280c8

byte FUN_001280c8(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long local_30;
  byte local_21;
  undefined8 local_20;
  long *local_18;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  lVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_21 = 0;
  }
  else {
    local_18 = &DAT_028c8610;
    local_20 = 0;
    _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257a408);
    if (*local_18 + 1 != 0) {
      _dispatch_once(*local_18 + 1,local_18,local_20);
    }
    _objc_storeStrong(&local_20,0);
    uVar1 = DAT_028c8568;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(uVar1);
    uVar3 = DAT_028c8568;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028c8568,PTR_s_containsObject__0269cbb8,local_30);
    local_21 = (uVar3 & 1) == 0;
    if ((bool)local_21) {
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028c8568,PTR_s_addObject__0269d180,local_30);
    }
    _objc_sync_exit(uVar1);
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

