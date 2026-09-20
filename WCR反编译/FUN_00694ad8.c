// FUN_00694ad8 @ 00694ad8

void FUN_00694ad8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
    FUN_00694c18(*(undefined8 *)(param_1 + 0x20),local_20);
  }
  if (((*(byte *)(param_1 + 0x31) & 1) != 0) && (local_30 == 0)) {
    FUN_00694d2c(*(undefined8 *)(param_1 + 0x20),local_20);
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),local_20,local_28,local_30);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return;
}

