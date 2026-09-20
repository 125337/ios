// FUN_002f7334 @ 002f7334

void FUN_002f7334(undefined8 param_1,undefined8 param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_30;
  uint local_28;
  undefined1 local_22;
  byte local_21;
  undefined8 local_20;
  ulong local_18;
  
  puVar1 = &local_18;
  local_18 = 0;
  _objc_storeStrong(puVar1,param_1);
  local_21 = (byte)puVar1;
  local_20 = param_2;
  if (DAT_028c9a68 != (code *)0x0) {
    uVar2 = local_18;
    (*DAT_028c9a68)(local_18,param_2);
    local_21 = (byte)uVar2;
  }
  FUN_002f8b50();
  uVar2 = local_18;
  _objc_getAssociatedObject(local_18,&DAT_026dfda8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar2);
  local_22 = (undefined1)uVar3;
  if (((local_21 & 1) == 0) && ((uVar3 & 1) == 0)) {
    local_28 = 1;
  }
  else {
    uVar2 = local_18;
    FUN_002fc198();
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar2;
    if (uVar2 != 0) {
      FUN_002f8720(local_18,uVar2);
    }
    local_28 = (uint)(uVar2 == 0);
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

