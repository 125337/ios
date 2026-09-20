// FUN_002be008 @ 002be008

void FUN_002be008(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 != 0) {
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (((uVar2 & 1) != 0) && (uVar1 = local_18, FUN_002be168(), (uVar1 & 1) != 0)) {
      FUN_002be5d4(local_18);
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

