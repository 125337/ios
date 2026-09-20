// FUN_000c1174 @ 000c1174

void FUN_000c1174(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = param_4;
  FUN_000c17c8();
  if ((uVar1 & 1) == 0) {
    (*DAT_028c8188)(local_18,local_20,local_28,param_4);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

