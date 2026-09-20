// FUN_00751a40 @ 00751a40

void FUN_00751a40(void)

{
  undefined *puVar1;
  undefined *local_58;
  undefined *local_38;
  undefined *local_20;
  undefined *local_18;
  
  puVar1 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_navigationContrioller_0269d628);
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_visibleViewController_0269d460);
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_38 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_38;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_20 = local_58;
  if (puVar1 == (undefined *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_20;
  FUN_00751c18();
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

