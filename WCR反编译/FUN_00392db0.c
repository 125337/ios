// FUN_00392db0 @ 00392db0

void FUN_00392db0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_28;
  long local_20;
  long local_18;
  
  uVar1 = param_1 + 0x20;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = uVar1;
  if (uVar1 != 0) {
    _WCRGroupingState();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if ((uVar3 & 1) != 0) {
      uVar1 = local_28;
      _WCRGroupingState();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar1);
      FUN_003736ec(local_28);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_wcrGrouping_scheduleRefreshForTr_026a28a0,&cf_nativeRowsExpanded);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

