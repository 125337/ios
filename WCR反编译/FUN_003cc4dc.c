// FUN_003cc4dc @ 003cc4dc

void FUN_003cc4dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long local_48;
  undefined4 local_3c;
  long local_38;
  long local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_18;
  FUN_003612b8(local_18,&cf_delegate);
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar1;
  FUN_003a4820(lVar1,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar1;
  if (lVar1 == 0) {
    if (DAT_028ca2b0 != (code *)0x0) {
      lVar1 = local_30;
      FUN_003ccac0(local_30,local_28);
      _objc_retainAutoreleasedReturnValue();
      local_48 = lVar1;
      if (lVar1 != 0) {
        (*DAT_028ca2b0)(local_18,local_20,lVar1);
      }
      _objc_storeStrong(&local_48,0);
    }
    local_3c = 0;
  }
  else {
    FUN_003a3ae0(local_30,lVar1);
    local_3c = 1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return;
}

