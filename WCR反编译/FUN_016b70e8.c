// FUN_016b70e8 @ 016b70e8

void FUN_016b70e8(undefined8 param_1,byte param_2,byte param_3)

{
  long lVar1;
  uint local_6c;
  long local_40 [3];
  long local_28;
  byte local_1a;
  byte local_19;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  local_1a = param_3;
  local_19 = param_2;
  FUN_016adc54();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  FUN_016b5c94();
  _objc_retainAutoreleasedReturnValue();
  local_40[0] = lVar1;
  if (lVar1 != 0) {
    local_6c = 0;
    if (((local_1a & 1) != 0) && (local_6c = 0, (local_19 & 1) != 0)) {
      lVar1 = local_18;
      FUN_016ada98();
      local_6c = (uint)lVar1;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_setEnabled__026ca938,local_6c & 1);
  }
  _objc_storeStrong(local_40);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return;
}

