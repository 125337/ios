// FUN_00599574 @ 00599574

void FUN_00599574(long param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  uVar2 = param_1 + 0x28;
  local_28 = param_1;
  _objc_loadWeakRetained();
  local_30 = uVar2;
  if (uVar2 != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(uVar2);
    uVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasFinished_026a5640);
    uVar4 = local_30;
    if ((uVar3 & 1) == 0) {
      uVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_completedCount_026a5620);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_setCompletedCount__026a55e8,uVar3 + 1);
      uVar4 = local_30;
      if (local_20 == 0) {
        uVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_downloadedCount_026a5628);
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_setDownloadedCount__026a55e0,uVar3 + 1);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_failedMedia_026a5618);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar4);
      }
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    _objc_sync_exit(uVar2);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (!bVar1) {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_progressToast_026a5608);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_downloadedCount_026a5628);
      uVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_failedMedia_026a5618);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      uVar6 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_totalCount_026a3130);
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_updateCompletedCount_failedCount_026a5630,uVar4,uVar5,uVar6);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_release_02578630)(uVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_checkDownloadComplete_026a5638);
    }
  }
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}

