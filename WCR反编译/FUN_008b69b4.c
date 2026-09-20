// FUN_008b69b4 @ 008b69b4

/* WARNING: Type propagation algorithm not settling */

byte FUN_008b69b4(undefined8 param_1)

{
  ulong uVar1;
  undefined8 local_48;
  ulong local_40 [2];
  undefined4 local_30;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_008b50d8();
  if ((uVar1 & 1) == 0) {
    local_11 = 0;
    local_30 = 1;
  }
  else {
    local_40[1] = 0;
    local_48 = 0;
    uVar1 = local_20;
    FUN_008b6dec(local_20,&local_48);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(local_40 + 1,local_48);
    local_40[0] = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
    local_11 = uVar1 != 0;
    local_30 = 1;
    _objc_storeStrong(local_40);
    _objc_storeStrong(local_40 + 1,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

