// FUN_005b9994 @ 005b9994

void FUN_005b9994(long param_1)

{
  long lVar1;
  uint local_50;
  long local_48 [3];
  byte local_29;
  long local_28;
  long local_20;
  long local_18;
  
  local_29 = 0;
  local_50 = 1;
  lVar1 = 1;
  local_20 = param_1;
  local_18 = param_1;
  if (DAT_028cb640 == *(long *)(param_1 + 0x20)) {
    lVar1 = *(long *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_openedNoteViewController_026a58e8);
    _objc_retainAutoreleasedReturnValue();
    local_29 = 1;
    local_50 = 1;
    local_28 = lVar1;
    if (lVar1 == 0) {
      lVar1 = *(long *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_tappedCollectButton_026a58f0);
      local_50 = (uint)lVar1;
    }
  }
  if ((local_29 & 1) != 0) {
    lVar1 = local_28;
    (*(code *)PTR__objc_release_02578630)();
  }
  if ((local_50 & 1) == 0) {
    FUN_005b9b48();
    _objc_retainAutoreleasedReturnValue();
    local_48[0] = lVar1;
    if (lVar1 != 0) {
      FUN_005ba22c(lVar1);
    }
    _objc_storeStrong(local_48,0);
  }
  return;
}

