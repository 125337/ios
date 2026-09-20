// FUN_01120f10 @ 01120f10

void FUN_01120f10(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *local_60;
  undefined *local_28;
  
  _objc_storeStrong(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28,0);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setPlusLongPressAuthenticating__026aefe8,0);
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    lVar3 = *(long *)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_code_026ae1d0);
    bVar1 = true;
    if ((lVar3 != -2) && (bVar1 = true, lVar3 != -4)) {
      bVar1 = lVar3 == -9;
    }
    if (!bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x20),PTR_s_presentSettingsPasswordAlert_026af108);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_suppressForegroundExitAutoHideFo_026aefb0);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_markPasswordVerifiedForProtectio_026aefc0);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = *(undefined **)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_pendingPresenter_026af110);
    _objc_retainAutoreleasedReturnValue();
    local_60 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      local_28 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_28;
    }
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_pushSettingsFrom__026af0f8,local_60);
    if (puVar2 == (undefined *)0x0) {
      (*(code *)PTR__objc_release_02578630)(local_28);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setPendingPresenter__026af118,0);
  }
  return;
}

