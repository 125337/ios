// FUN_00260350 @ 00260350

void FUN_00260350(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  FUN_002627b0(local_28,param_4);
  if ((uVar1 & 1) == 0) {
    (*DAT_028c9470)(local_18,local_20,local_28,param_4);
  }
  else {
    (*DAT_028c9470)(local_18,local_20,local_28,param_4);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

