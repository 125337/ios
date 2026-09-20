// FUN_003cc620 @ 003cc620

void FUN_003cc620(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  long local_58;
  undefined4 local_4c;
  long local_48;
  long local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_30 = 0;
  local_28 = param_3;
  local_20 = param_2;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  lVar1 = local_18;
  FUN_003612b8(local_18,&cf_delegate);
  _objc_retainAutoreleasedReturnValue();
  local_40 = lVar1;
  FUN_003a4820(lVar1,local_38);
  _objc_retainAutoreleasedReturnValue();
  local_48 = lVar1;
  if (lVar1 == 0) {
    if (DAT_028ca2b8 != (code *)0x0) {
      lVar1 = local_40;
      FUN_003ccac0(local_40,local_38);
      _objc_retainAutoreleasedReturnValue();
      local_58 = lVar1;
      if (lVar1 != 0) {
        (*DAT_028ca2b8)(local_18,local_20,local_28,local_30,lVar1);
      }
      _objc_storeStrong(&local_58,0);
    }
    local_4c = 0;
  }
  else if (local_28 == 1) {
    FUN_003a3ae0(0,local_40,lVar1);
    local_4c = 1;
  }
  else if (local_28 + -4 == 0) {
    FUN_003a4d08(local_40,lVar1);
    local_4c = 1;
  }
  else {
    FUN_003ccf44(local_28 + -4,local_40,lVar1);
    local_4c = 1;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_18,0);
  return;
}

