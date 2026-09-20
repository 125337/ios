// FUN_0007972c @ 0007972c

void FUN_0007972c(undefined8 param_1)

{
  long lVar1;
  long local_58;
  long local_50;
  long local_48 [3];
  long local_30;
  long local_28;
  undefined4 local_1c;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  if (local_18 == 0) {
    local_1c = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_viewWithTag__026cabe0,0x24f6e4);
    _objc_retainAutoreleasedReturnValue();
    local_30 = lVar1;
    if (lVar1 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_removeFromSuperview_026ca800);
    }
    lVar1 = local_28;
    _WCRAvatarExternalOverlayForContainer();
    _objc_retainAutoreleasedReturnValue();
    local_48[0] = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    local_50 = lVar1;
    if ((local_48[0] != 0) && (local_48[0] != local_30)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_removeFromSuperview_026ca800);
    }
    if (local_50 != 0) {
      lVar1 = local_50;
      FUN_0007b310();
      _objc_retainAutoreleasedReturnValue();
      local_58 = lVar1;
      if ((local_48[0] == 0) || (lVar1 == local_48[0])) {
        FUN_0007b4e8(0,local_50);
      }
      _objc_storeStrong(&local_58,0);
    }
    FUN_0007b57c(local_28);
    _objc_storeStrong(&local_50);
    _objc_storeStrong(local_48,0);
    _objc_storeStrong(&local_30,0);
    _objc_storeStrong(&local_28,0);
    local_1c = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

