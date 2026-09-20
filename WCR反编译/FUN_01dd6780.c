// FUN_01dd6780 @ 01dd6780

void FUN_01dd6780(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long local_28;
  long local_20;
  long local_18;
  
  lVar2 = param_1 + 0x20;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = lVar2;
  if (lVar2 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_sessionResult_026c5440);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    puVar1 = PTR_WCRefineSessionStatsEngine_026ced48;
    if (lVar2 != 0) {
      lVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sessionResult_026c5440);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_fillPeopleSnapshot__026c4d58);
      (*(code *)PTR__objc_release_02578630)(lVar2);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadBoard_026c54f8);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

