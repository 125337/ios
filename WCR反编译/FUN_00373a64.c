// FUN_00373a64 @ 00373a64

void FUN_00373a64(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_38;
  undefined *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  puVar1 = &DAT_028ca0d0;
  local_28 = param_1;
  _objc_loadWeakRetained();
  local_30 = puVar1;
  _WCRGroupingState();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_entries_026a25d0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (puVar2 != (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_budgetFallback_026a25d8);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_30;
  _WCRGroupingState();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_30;
  FUN_00373d3c();
  if ((((ulong)puVar3 & 1) != 0) || (((ulong)puVar1 & 1) != 0)) {
    puVar1 = local_30;
    _WCRGroupingState();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR_s_wcrGrouping_scheduleRefreshForTr_026a28a0;
    if ((local_30 != (undefined *)0x0) &&
       (puVar2 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_30,PTR_s_respondsToSelector__026ca818,
                  PTR_s_wcrGrouping_scheduleRefreshForTr_026a28a0), ((ulong)puVar2 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,puVar1,&cf_didBecomeActive);
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}

