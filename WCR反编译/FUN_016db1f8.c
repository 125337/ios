// FUN_016db1f8 @ 016db1f8

void FUN_016db1f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_colorFromHexString__026b30d8,local_20);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  local_38 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_colorFromHexString__026b30d8,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_40 = uVar2;
  if (*(long *)(param_1 + 0x28) != 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),local_38,uVar2);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return;
}

