// FUN_00081de8 @ 00081de8

void FUN_00081de8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_28;
  long local_20;
  long local_18;
  
  uVar1 = param_1 + 0x20;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = uVar1;
  if ((uVar1 != 0) && (FUN_00077bac(), (uVar1 & 1) != 0)) {
    uVar1 = local_28;
    FUN_00078284();
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_checkAndUpdateImage_0269de70);
    if ((uVar2 & 1) == 0) {
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_updateHeadImage__0269de58);
      if ((uVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_updateHeadImage__0269de58,0);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_checkAndUpdateImage_0269de70);
    }
    FUN_00078344((uint)uVar1 & 1);
    FUN_00078388(local_28);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

