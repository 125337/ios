// FUN_0007fcec @ 0007fcec

void FUN_0007fcec(undefined8 param_1)

{
  bool bVar1;
  uint uVar2;
  ulong uVar4;
  ulong local_30;
  undefined4 local_28;
  ulong local_18;
  ulong *puVar3;
  
  puVar3 = &local_18;
  local_18 = 0;
  _objc_storeStrong(puVar3,param_1);
  uVar2 = (uint)puVar3;
  FUN_00079024();
  if ((uVar2 & 1) == 0) {
    local_28 = 1;
  }
  else if ((local_18 == 0) ||
          (uVar4 = local_18,
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isViewLoaded_0269cde0),
          (uVar4 & 1) == 0)) {
    local_28 = 1;
  }
  else {
    uVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = true;
    local_30 = uVar4;
    if (uVar4 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_window_026cabf0);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = uVar4 == 0;
      (*(code *)PTR__objc_release_02578630)(uVar4);
    }
    if (bVar1) {
      local_28 = 1;
    }
    else {
      uVar4 = local_30;
      FUN_0007ff38(local_30,9);
      if ((uVar4 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setNeedsLayout_0269deb8);
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_layoutIfNeeded_026ca790);
      }
      FUN_00080308(local_30,9);
      local_28 = 0;
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

