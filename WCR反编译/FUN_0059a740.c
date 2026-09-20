// FUN_0059a740 @ 0059a740

void FUN_0059a740(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_28;
  long local_20;
  long local_18;
  
  uVar1 = param_1 + 0x28;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = uVar1;
  if ((uVar1 != 0) &&
     ((*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_hasFinished_026a5640), uVar3 = local_28,
     (uVar1 & 1) == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(uVar3);
    uVar1 = local_28;
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_completedCount_026a5620);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_setCompletedCount__026a55e8,uVar2 + 1);
    uVar1 = local_28;
    if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_failedMedia_026a5618);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    else {
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_downloadedCount_026a5628);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_setDownloadedCount__026a55e0,uVar2 + 1);
    }
    _objc_sync_exit(uVar3);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_progressToast_026a5608);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_downloadedCount_026a5628);
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_failedMedia_026a5618);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    uVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_totalCount_026a3130);
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_updateCompletedCount_failedCount_026a5630,uVar3,uVar4,uVar5);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_checkDownloadComplete_026a5638);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

