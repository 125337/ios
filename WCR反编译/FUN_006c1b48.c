// FUN_006c1b48 @ 006c1b48

void FUN_006c1b48(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_48 [3];
  ulong local_30;
  uint local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
    goto LAB_006c1d88;
  }
  uVar2 = local_20;
  FUN_006c1ff4();
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar2;
  if (uVar2 == 0) {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_viewModel_0269d080);
    if ((uVar2 & 1) != 0) {
      uVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_viewModel_0269d080);
      _objc_retainAutoreleasedReturnValue();
      local_48[0] = uVar3;
      FUN_006c1ff4();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_30;
      local_30 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_30;
      bVar1 = local_30 != 0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar2;
      }
      local_24 = (uint)bVar1;
      _objc_storeStrong(local_48,0);
      if (local_24 != 0) goto LAB_006c1d68;
    }
    local_18 = 0;
    local_24 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_24 = 1;
    local_18 = uVar2;
  }
LAB_006c1d68:
  _objc_storeStrong(&local_30,0);
LAB_006c1d88:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

