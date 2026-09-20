// FUN_000996a4 @ 000996a4

void FUN_000996a4(undefined8 param_1)

{
  ulong uVar1;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  DAT_028c7fb8 = 0;
  DAT_028c7fb9 = 0;
  uVar1 = local_18;
  FUN_0009983c();
  _objc_retainAutoreleasedReturnValue();
  local_20 = uVar1;
  if (uVar1 == 0) {
    local_30 = 1;
  }
  else {
    FUN_000999f0();
    if ((uVar1 & 1) == 0) {
      uVar1 = local_20;
      FUN_00099bd0();
      _objc_retainAutoreleasedReturnValue();
      local_38 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
      if (uVar1 != 0) {
        DAT_028c7fb8 = 1;
      }
      _objc_storeStrong(uVar1 != 0,&local_38,0);
      local_30 = 0;
    }
    else {
      DAT_028c7fb9 = 1;
      local_30 = 1;
    }
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

