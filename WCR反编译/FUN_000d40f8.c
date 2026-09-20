// FUN_000d40f8 @ 000d40f8

byte FUN_000d40f8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  ulong local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_20;
  _objc_getAssociatedObject(local_20,&DAT_028c8371);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = local_20;
    (*DAT_028c82c8)(local_20,local_28,local_30);
    local_11 = (byte)uVar1;
  }
  else {
    uVar3 = local_30;
    FUN_000da7f8();
    local_11 = (byte)uVar3;
  }
  local_11 = local_11 & 1;
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

