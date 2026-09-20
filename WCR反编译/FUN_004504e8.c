// FUN_004504e8 @ 004504e8

byte FUN_004504e8(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_80;
  ulong local_58;
  ulong local_50 [4];
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    local_30 = 0;
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_headerViewModel_026a0fa0);
    if ((uVar1 & 1) != 0) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_headerViewModel_026a0fa0);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_30;
      local_30 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    uVar1 = local_30;
    FUN_00450ff4();
    _objc_retainAutoreleasedReturnValue();
    local_80 = uVar1;
    if (uVar1 == 0) {
      local_58 = local_30;
      FUN_004512d8();
      _objc_retainAutoreleasedReturnValue();
      local_80 = local_58;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_50[0] = local_80;
    if (uVar1 == 0) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_50[0];
    FUN_004514e4();
    local_11 = (byte)uVar1 & 1;
    local_24 = 1;
    _objc_storeStrong(local_50);
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

