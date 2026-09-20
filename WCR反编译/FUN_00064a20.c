// FUN_00064a20 @ 00064a20

void FUN_00064a20(long param_1,byte param_2,undefined8 param_3)

{
  undefined8 local_28;
  byte local_19;
  long local_18;
  
  local_28 = 0;
  local_19 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  FUN_00064aa8(*(undefined8 *)(param_1 + 0x20),local_19 & 1);
  _objc_storeStrong(&local_28,0);
  return;
}

