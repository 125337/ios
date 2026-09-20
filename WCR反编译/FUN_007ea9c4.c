// FUN_007ea9c4 @ 007ea9c4

void FUN_007ea9c4(long param_1,byte param_2,undefined8 param_3)

{
  undefined8 local_28;
  byte local_19;
  long local_18;
  
  local_28 = 0;
  local_19 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  FUN_007eaa68(local_19 & 1,local_28,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28)
               ,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
               *(undefined8 *)(param_1 + 0x40));
  FUN_007e8810();
  _objc_storeStrong(&local_28,0);
  return;
}

