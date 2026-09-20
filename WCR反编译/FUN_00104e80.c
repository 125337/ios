// FUN_00104e80 @ 00104e80

byte FUN_00104e80(undefined8 param_1)

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
    local_18 = &DAT_028c84a8;
    local_20 = 0;
    _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257a218);
    if (*local_18 + 1 != 0) {
      _dispatch_once(*local_18 + 1,local_18,local_20);
    }
    _objc_storeStrong(&local_20,0);
    uVar1 = DAT_028c8468;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(uVar1);
    uVar3 = DAT_028c8468;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028c8468,PTR_s_containsObject__0269cbb8,local_30);
    if ((uVar3 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028c8468,PTR_s_addObject__0269d180,local_30);
      uVar3 = DAT_028c8468;
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028c8468,PTR_s_count_0269cfe0);
      if (400 < uVar3) {
        (*(code *)PTR__objc_msgSend_02578628)(DAT_028c8468,PTR_s_removeAllObjects_0269d508);
        (*(code *)PTR__objc_msgSend_02578628)(DAT_028c8468,PTR_s_addObject__0269d180,local_30);
      }
      local_21 = 1;
    }
    else {
      local_21 = 0;
    }
    _objc_sync_exit(uVar1);
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

