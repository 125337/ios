// FUN_005b6078 @ 005b6078

void FUN_005b6078(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  uVar1 = local_18;
  FUN_005d6340();
  if ((uVar1 & 1) == 0) {
    (*DAT_028cb6f8)(local_18,local_20,local_28,local_30);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

