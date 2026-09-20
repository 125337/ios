// FUN_00245a2c @ 00245a2c

void FUN_00245a2c(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long local_b8;
  long local_60;
  long local_50;
  long local_48;
  long local_40 [3];
  long local_28;
  long *local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  local_20 = param_2;
  FUN_00245610();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  FUN_00245f40();
  _objc_retainAutoreleasedReturnValue();
  local_40[0] = lVar1;
  FUN_002462ec();
  _objc_retainAutoreleasedReturnValue();
  local_48 = lVar1;
  if (lVar1 == 0) {
    lVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentViewController_026a0d90);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    FUN_0024674c();
    _objc_retainAutoreleasedReturnValue();
    local_b8 = lVar2;
    if (lVar2 == 0) {
      local_50 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_forwardBasedViewController_026a0d98);
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_50;
      FUN_0024674c();
      _objc_retainAutoreleasedReturnValue();
      local_b8 = local_60;
    }
    _objc_storeStrong(&local_48,local_b8);
    if (lVar2 == 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    (*(code *)PTR__objc_release_02578630)(lVar2);
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  lVar1 = local_40[0];
  if (local_20 != (long *)0x0) {
    _objc_retainAutorelease();
    *local_20 = lVar1;
  }
  lVar1 = local_48;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_48);
  _objc_storeStrong(local_40,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(lVar1);
  return;
}

