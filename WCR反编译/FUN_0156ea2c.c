// FUN_0156ea2c @ 0156ea2c

byte FUN_0156ea2c(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  FUN_01528d34();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    local_11 = 0;
  }
  else {
    FUN_015794bc();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    _objc_sync_enter();
    FUN_015794bc();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)();
    bVar1 = (uVar4 & 1) != 0;
    if (bVar1) {
      FUN_015794bc();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    else {
      local_11 = 0;
    }
    _objc_sync_exit(uVar2);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (bVar1) {
      local_11 = 1;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

