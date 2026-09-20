// FUN_0066f1b8 @ 0066f1b8

long FUN_0066f1b8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long local_60;
  long local_58;
  long local_50;
  long local_48 [3];
  long local_30;
  undefined4 local_24;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
  }
  else {
    lVar2 = local_20;
    FUN_00662d08();
    _objc_retainAutoreleasedReturnValue();
    local_30 = lVar2;
    FUN_00663124(lVar2,local_20);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = 0;
    local_48[0] = lVar2;
    FUN_0065ea04(0,lVar2);
    local_50 = lVar1;
    if (lVar1 == 0) {
      lVar2 = local_30;
      FUN_00665d0c(local_30,local_20);
      _objc_retainAutoreleasedReturnValue();
      local_58 = lVar2;
      FUN_00661db0();
      _objc_retainAutoreleasedReturnValue();
      local_60 = lVar2;
      (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
      if (lVar2 != 0) {
        lVar2 = 0;
        FUN_0065ea04(0,local_60);
        local_50 = lVar2;
      }
      _objc_storeStrong(&local_60);
      _objc_storeStrong(&local_58,0);
    }
    local_18 = local_50;
    local_24 = 1;
    _objc_storeStrong(local_48);
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

