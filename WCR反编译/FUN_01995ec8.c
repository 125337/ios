// FUN_01995ec8 @ 01995ec8

void FUN_01995ec8(long param_1)

{
  cfstringStruct *pcVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  lVar4 = param_1 + 0x40;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = lVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (lVar4,PTR_s_untrackOperationPath__026ba610,*(undefined8 *)(param_1 + 0x20));
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_untrackOperationPath__026ba610,*(undefined8 *)(param_1 + 0x28));
  bVar2 = false;
  bVar3 = true;
  if (local_28 != 0) {
    uVar5 = *(ulong *)(param_1 + 0x30);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isCancelled_026a1c20);
    bVar3 = true;
    if ((uVar5 & 1) == 0) {
      local_30 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_activeOperationToken_026ba618);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      bVar3 = local_30 != *(long *)(param_1 + 0x30);
    }
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  if (!bVar3) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setActiveOperationToken__026ba5e0);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setActiveOperationToast__026ba5e8,0);
    pcVar1 = &cf_S___b;
    if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
      pcVar1 = &cf_S__1Y_;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_hideWeToastAndShowDoneWithText_f_0269f848,pcVar1,
               *(undefined8 *)(param_1 + 0x38));
    if ((*(byte *)(param_1 + 0x48) & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reload_026af6c8);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

