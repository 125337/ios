// FUN_004e0558 @ 004e0558

byte FUN_004e0558(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_30;
  byte local_21;
  undefined8 local_20;
  long *local_18;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  if (local_30 == 0) {
    local_21 = 0;
  }
  else {
    local_18 = &DAT_028cade8;
    local_20 = 0;
    _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257d598);
    if (*local_18 + 1 != 0) {
      _dispatch_once(*local_18 + 1,local_18,local_20);
    }
    _objc_storeStrong(&local_20,0);
    if ((DAT_028cade0 == 0) ||
       (uVar1 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isKindOfClass__0269cd68,DAT_028cade0),
       (uVar1 & 1) == 0)) {
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_21 = (byte)uVar2 & 1;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    else {
      local_21 = 1;
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

