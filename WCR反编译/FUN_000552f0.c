// FUN_000552f0 @ 000552f0

byte FUN_000552f0(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint local_64;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_nsFromUsr_0269d088);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    FUN_0004ff90();
    local_64 = 1;
    if ((uVar2 & 1) == 0) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_nsToUsr_0269d090);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      FUN_0004ff90();
      local_64 = (uint)uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if ((local_64 & 1) == 0) {
      uVar1 = local_20;
      FUN_00055194();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      FUN_0004ff90();
      local_11 = (byte)uVar2 & 1;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    else {
      local_11 = 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

