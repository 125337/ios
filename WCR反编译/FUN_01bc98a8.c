// FUN_01bc98a8 @ 01bc98a8

void FUN_01bc98a8(long param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  uint local_3c;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  lVar2 = param_1 + 0x38;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  bVar1 = false;
  local_3c = 1;
  local_28 = lVar2;
  if (lVar2 != 0) {
    uVar3 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isCancelled_026a1c20);
    local_3c = 1;
    if ((uVar3 & 1) == 0) {
      local_30 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bindTid_026c0670);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      lVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_3c = (uint)lVar2 ^ 1;
    }
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  if ((local_3c & 1) == 0) {
    if (*(long *)(param_1 + 0x30) != 0) {
      lVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_thumbView_026aa820);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar2);
      lVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_thumbView_026aa820);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar2);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setThumbnailOperation__026c0658,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

