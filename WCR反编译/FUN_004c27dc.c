// FUN_004c27dc @ 004c27dc

void FUN_004c27dc(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong local_60;
  ulong local_38;
  ulong local_30;
  undefined1 local_21;
  ulong local_20;
  ulong local_18;
  
  uVar2 = param_1;
  local_20 = param_1;
  local_18 = param_1;
  FUN_004c10b4();
  local_21 = (undefined1)uVar2;
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_delegate_0269e808);
    bVar1 = (uVar2 & 1) == 0;
    if (bVar1) {
      local_60 = 0;
    }
    else {
      local_60 = *(ulong *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_delegate_0269e808);
      _objc_retainAutoreleasedReturnValue();
      local_38 = local_60;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = local_60;
    if (!bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_38);
    }
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_respondsToSelector__026ca818,
               PTR_s_wcrefine_addLongPressGestureToAd_026a3ee8);
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_wcrefine_addLongPressGestureToAd_026a3ee8,
                 *(undefined8 *)(param_1 + 0x20));
    }
    _objc_storeStrong(&local_30,0);
  }
  return;
}

