// FUN_008b0ab8 @ 008b0ab8

void FUN_008b0ab8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = &local_30;
  local_30 = 0;
  _objc_storeStrong(puVar1,param_4);
  FUN_008b4e10();
  if (((ulong)puVar1 & 1) == 0) {
    (*DAT_028cdf90)(local_18,local_20,local_28,local_30);
    local_40 = 1;
  }
  else {
    FUN_008c0c98();
    if (((ulong)puVar1 & 1) == 0) {
      lVar2 = DAT_028cde90;
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028cde90,PTR_s_count_0269cfe0);
      if (lVar2 == 0) {
        (*DAT_028cdf90)(local_18,local_20,local_28,local_30);
        local_40 = 0;
      }
      else {
        local_48 = 0;
        local_50 = 0;
        local_58 = 0;
        local_60 = 0;
        FUN_008c0508(DAT_028cde90,&local_58,&local_60);
        _objc_storeStrong(&local_48,local_58);
        _objc_storeStrong(&local_50,local_60);
        (*DAT_028cdf90)(local_18,local_20,DAT_028cde90,local_30);
        local_40 = 1;
        _objc_storeStrong(&local_50);
        _objc_storeStrong(&local_48,0);
      }
    }
    else {
      FUN_008c08b4();
      (*DAT_028cdf90)(local_18,local_20,local_28,local_30);
      local_40 = 1;
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

