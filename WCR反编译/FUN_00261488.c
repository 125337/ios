// FUN_00261488 @ 00261488

void FUN_00261488(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uVar2;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  uVar2 = local_18;
  (*DAT_028c94b0)(local_18,local_20,local_28,local_30);
  uVar1 = (uint)uVar2;
  FUN_00264438();
  if ((uVar1 & 1) != 0) {
    FUN_00266860(local_18,&cf_webViewDidFinishLoad);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

