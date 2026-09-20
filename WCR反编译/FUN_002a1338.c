// FUN_002a1338 @ 002a1338

void FUN_002a1338(undefined8 param_1,long param_2,byte param_3)

{
  long lVar1;
  long local_70;
  long local_38;
  long local_30;
  byte local_21;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_30 = 0x7fffffffffffffff;
  local_21 = param_3;
  local_20 = param_2;
  if (((param_3 & 1) == 0) || (param_3 = 0, lVar1 = param_2, param_2 == 0x7fffffffffffffff)) {
    local_70 = local_18;
    FUN_0029cc70(param_3);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_70;
    if (local_70 == 0) {
      local_70 = 0x7fffffffffffffff;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_selectedIndex_0269e580);
    }
    local_30 = local_70;
    _objc_storeStrong(&local_38,0);
    lVar1 = local_30;
  }
  local_30 = lVar1;
  FUN_002b215c(local_18,local_30);
  _objc_storeStrong(&local_18,0);
  return;
}

