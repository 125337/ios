// FUN_0067428c @ 0067428c

/* WARNING: Type propagation algorithm not settling */

void FUN_0067428c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_30 [4];
  
  local_30[2] = 0;
  _objc_storeStrong(local_30 + 2,param_1);
  local_30[1] = 0;
  _objc_storeStrong(local_30 + 1,param_2);
  uVar1 = local_30[2];
  FUN_00674494();
  _objc_retainAutoreleasedReturnValue();
  local_30[0] = uVar1;
  do {
    if (local_30[0] == 0) {
      local_30[3] = 0;
LAB_00674424:
      _objc_storeStrong(local_30);
      _objc_storeStrong(local_30 + 1,0);
      _objc_storeStrong(local_30 + 2,0);
      _objc_autoreleaseReturnValue(local_30[3]);
      return;
    }
    uVar1 = local_30[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_30[0],PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_30[0];
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_30[3] = uVar1;
      goto LAB_00674424;
    }
    uVar2 = local_30[0];
    FUN_00674494();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_30[0];
    local_30[0] = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  } while( true );
}

