// FUN_0112d9e8 @ 0112d9e8

void FUN_0112d9e8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_30;
  undefined *local_20;
  undefined *local_18;
  
  puVar1 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_navigationContrioller_0269d628);
    _objc_retainAutoreleasedReturnValue();
    local_20 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_topViewController_0269e588);
    _objc_retainAutoreleasedReturnValue();
    local_30 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      local_30 = local_20;
    }
    _objc_storeStrong(&local_18,local_30);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _objc_storeStrong(&local_20,0);
  }
  while( true ) {
    puVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_presentedViewController_0269d448);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    puVar1 = local_18;
    if (puVar2 == (undefined *)0x0) break;
    puVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_presentedViewController_0269d448);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_18;
    local_18 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

