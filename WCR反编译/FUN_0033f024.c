// FUN_0033f024 @ 0033f024

byte FUN_0033f024(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if ((local_20 == 0) || (local_20 < 0x1000)) {
    local_11 = 0;
  }
  else {
    uVar1 = local_20;
    _objc_getAssociatedObject(local_20 - 0x1000,local_20,&DAT_028c9fe0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_11 = (byte)uVar2 & 1;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

