// FUN_003b4224 @ 003b4224

byte FUN_003b4224(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong local_48;
  undefined4 local_40;
  byte local_39;
  ulong local_38;
  byte local_29;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_29 = 0;
  local_39 = 0;
  bVar1 = true;
  if (local_20 != 0) {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isViewLoaded_0269cde0);
    bVar1 = true;
    if ((uVar2 & 1) != 0) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      local_29 = 1;
      local_28 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_39 = 1;
      bVar1 = uVar2 == 0;
      local_38 = uVar2;
    }
  }
  if ((local_39 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  if ((local_29 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  if (bVar1) {
    local_11 = 0;
    local_40 = 1;
  }
  else {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    local_11 = 1;
    local_48 = uVar2;
    if (uVar2 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_topViewController_0269e588);
      _objc_retainAutoreleasedReturnValue();
      local_11 = uVar2 == local_20;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    local_40 = 1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

