// FUN_00112b1c @ 00112b1c

byte FUN_00112b1c(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_00115578();
  local_11 = 1;
  if ((uVar1 & 1) == 0) {
    uVar1 = local_20;
    FUN_00115d04();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_11 = uVar2 != 0;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

