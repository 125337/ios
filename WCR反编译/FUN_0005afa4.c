// FUN_0005afa4 @ 0005afa4

void FUN_0005afa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 byte param_5)

{
  ulong uVar1;
  ulong local_48;
  undefined8 local_40;
  byte local_31;
  long local_30;
  ulong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_40 = 0;
  uVar1 = local_28;
  local_31 = param_5;
  FUN_0005c958();
  _objc_retainAutoreleasedReturnValue();
  local_48 = uVar1;
  FUN_0005d074(uVar1,local_18);
  if ((((uVar1 & 1) == 0) && (uVar1 = local_48, FUN_0005d4c8(), (uVar1 & 1) == 0)) &&
     (uVar1 = local_48, FUN_0005db14(), (uVar1 & 1) == 0)) {
    if (local_30 == 0) {
      uVar1 = local_48;
      FUN_0005e1b8(local_48,local_18);
      if ((uVar1 & 1) == 0) {
        (*DAT_028c7c58)(local_18,local_20,local_28,local_30,local_31 & 1);
        FUN_0005e974(local_40,&cf_autoparse_SendText3,local_18);
      }
      else {
        FUN_0005e974(local_40,&cf_autoparse_SendText3_outgoing,local_18);
      }
    }
    else {
      (*DAT_028c7c58)(local_18,local_20,local_28,local_30,local_31 & 1);
      FUN_0005e974(local_40,&cf_autoparse_SendText3_reply,local_18);
    }
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

