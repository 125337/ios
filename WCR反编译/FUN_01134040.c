// FUN_01134040 @ 01134040

void FUN_01134040(long param_1,byte param_2,byte param_3,undefined8 param_4)

{
  undefined8 local_28;
  byte local_1a;
  byte local_19;
  long local_18;
  
  local_28 = 0;
  local_1a = param_3;
  local_19 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_4);
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
              (*(long *)(param_1 + 0x20),local_19 & 1,local_1a & 1);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

