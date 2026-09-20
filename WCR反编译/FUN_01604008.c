// FUN_01604008 @ 01604008

void FUN_01604008(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong local_48;
  ulong local_30;
  ulong local_28;
  uint local_1c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 == 0) {
    local_1c = 1;
  }
  else {
    uVar2 = local_18;
    FUN_01603920();
    if ((uVar2 & 1) == 0) {
      uVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_topViewController_0269e588);
      _objc_retainAutoreleasedReturnValue();
      local_48 = uVar2;
      if (uVar2 == 0) {
        local_30 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_visibleViewController_0269d460);
        _objc_retainAutoreleasedReturnValue();
        local_48 = local_30;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = local_48;
      if (uVar2 == 0) {
        (*(code *)PTR__objc_release_02578630)(local_30);
      }
      (*(code *)PTR__objc_release_02578630)(uVar2);
      bVar1 = local_28 != 0;
      if (bVar1) {
        _objc_storeWeak(&DAT_028e3bc0,local_28);
        _objc_storeWeak(&DAT_028e3bc8,local_18);
      }
      else {
        FUN_01603fbc();
      }
      local_1c = (uint)!bVar1;
      _objc_storeStrong(&local_28,0);
    }
    else {
      local_1c = 1;
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

