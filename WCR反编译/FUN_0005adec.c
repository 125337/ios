// FUN_0005adec @ 0005adec

void FUN_0005adec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong local_38;
  undefined8 local_30;
  ulong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  uVar1 = local_28;
  FUN_0005c958();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar1;
  FUN_0005d074(uVar1,local_18);
  if ((((uVar1 & 1) == 0) && (uVar1 = local_38, FUN_0005d4c8(), (uVar1 & 1) == 0)) &&
     (uVar1 = local_38, FUN_0005db14(), (uVar1 & 1) == 0)) {
    uVar1 = local_38;
    FUN_0005e1b8(local_38,local_18);
    if ((uVar1 & 1) == 0) {
      (*DAT_028c7c50)(local_18,local_20,local_28);
      FUN_0005e974(local_30,&cf_autoparse_SendText,local_18);
    }
    else {
      FUN_0005e974(local_30,&cf_autoparse_SendText_outgoing,local_18);
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  return;
}

