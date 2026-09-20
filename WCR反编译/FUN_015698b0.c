// FUN_015698b0 @ 015698b0

byte FUN_015698b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  byte local_11;
  
  puVar1 = &local_30;
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(puVar1,param_3);
  FUN_01563370();
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar1;
  FUN_01569d5c();
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar1;
  FUN_01532090();
  _objc_retainAutoreleasedReturnValue();
  local_48 = puVar1;
  if ((local_40 != (undefined8 *)0x0) && (local_20 != 0)) {
    puVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_respondsToSelector__026ca818,local_20);
    if (((ulong)puVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,local_20);
      local_11 = 1;
      goto LAB_015699f8;
    }
  }
  if ((local_38 != (undefined8 *)0x0) && (local_20 != 0)) {
    puVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_respondsToSelector__026ca818,local_20);
    if (((ulong)puVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,local_20);
      local_11 = 1;
      goto LAB_015699f8;
    }
  }
  uVar2 = local_28;
  FUN_01569ebc(local_28,local_30);
  local_11 = (byte)uVar2 & 1;
LAB_015699f8:
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

