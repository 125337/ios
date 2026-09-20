// FUN_00f6e63c @ 00f6e63c

void FUN_00f6e63c(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_50;
  ulong local_48;
  ulong local_40 [3];
  uint local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
  }
  else {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_viewModel_0269d080);
    if ((uVar2 & 1) != 0) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_viewModel_0269d080);
      _objc_retainAutoreleasedReturnValue();
      local_40[0] = uVar2;
      FUN_00f711c0(uVar2,&cf_messageWrap);
      _objc_retainAutoreleasedReturnValue();
      local_48 = uVar2;
      if (uVar2 == 0) {
        uVar3 = local_40[0];
        FUN_00f711c0(local_40[0],&cf_msgWrap);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_48;
        local_48 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      uVar2 = local_48;
      bVar1 = local_48 != 0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar2;
      }
      local_24 = (uint)bVar1;
      _objc_storeStrong(&local_48);
      _objc_storeStrong(local_40,0);
      if (local_24 != 0) goto LAB_00f6e8b4;
    }
    uVar2 = local_20;
    FUN_00f711c0(local_20,&cf_m_msgWrap);
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar2;
    if (uVar2 == 0) {
      uVar2 = local_20;
      FUN_00f711c0(local_20,&cf_messageWrap);
      _objc_retainAutoreleasedReturnValue();
      local_18 = uVar2;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar2;
    }
    local_24 = 1;
    _objc_storeStrong(&local_50,0);
  }
LAB_00f6e8b4:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

