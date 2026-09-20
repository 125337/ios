// FUN_0051a2a8 @ 0051a2a8

byte FUN_0051a2a8(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_11 = 0;
  }
  else {
    FUN_0051a448();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    _objc_sync_enter();
    FUN_0051a448();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)();
    local_11 = (uVar3 & 1) == 0;
    if ((bool)local_11) {
      FUN_0051a448();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    _objc_sync_exit(uVar1);
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

