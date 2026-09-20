// FUN_003c2784 @ 003c2784

void FUN_003c2784(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  long local_28;
  uint local_1c;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  bVar1 = local_18 != 0;
  if (bVar1) {
    lVar2 = local_18;
    _WCRGroupingState();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_WCRefineTelegramGroupingStore_026ce5a8;
    local_28 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineTelegramGroupingStore_026ce5a8,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    lVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_telegramTabSnapshots_026a25a8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTelegramTabCacheSignature__026a25b0);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTelegramTabSnapshotRestored__026a2598,0)
    ;
    _objc_storeStrong(&local_28,0);
  }
  local_1c = (uint)!bVar1;
  _objc_storeStrong(&local_18,0);
  return;
}

