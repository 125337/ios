// FUN_0014f1b4 @ 0014f1b4

void FUN_0014f1b4(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  int local_2c;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = uVar1;
  do {
    if (local_28 == 0) {
      local_2c = 2;
LAB_0014f330:
      _objc_storeStrong(&local_28,0);
      local_2c = local_2c + -2;
      if (local_2c == 0) {
        local_18 = 0;
        local_2c = 1;
      }
      _objc_storeStrong(local_2c,&local_20,0);
      _objc_autoreleaseReturnValue(local_18);
      return;
    }
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_28;
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar1;
      local_2c = 1;
      goto LAB_0014f330;
    }
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_nextResponder_0269d0d8);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_28;
    local_28 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  } while( true );
}

