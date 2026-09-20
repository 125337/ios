// FUN_000bfa44 @ 000bfa44

void FUN_000bfa44(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_18;
  (*DAT_028c80e8)(local_18,local_20,local_28);
  FUN_000bfbf8();
  if ((uVar1 & 1) != 0) {
    FUN_000bfc1c(local_18,&cf_setSelectedBackgroundView);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

