// FUN_01b9afb4 @ 01b9afb4

void FUN_01b9afb4(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  local_38 = 0;
  local_2c = param_4;
  _objc_storeStrong(&local_38,param_5);
  _objc_storeStrong(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28,local_20);
  _objc_storeStrong(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28,local_28);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return;
}

