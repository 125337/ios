// FUN_00fb1ec4 @ 00fb1ec4

void FUN_00fb1ec4(long param_1)

{
  undefined *puVar1;
  undefined *local_50;
  undefined *local_30;
  undefined *local_28;
  long local_20;
  long local_18;
  
  puVar1 = (undefined *)(param_1 + 0x30);
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_50 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_30 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_30;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_50;
  if (puVar1 == (undefined *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_wcr_openFileAtPathWithOtherApps__026acf98,
             *(undefined8 *)(param_1 + 0x20),local_28);
  FUN_00fb1194(0x405e000000000000,*(undefined8 *)(param_1 + 0x28));
  _objc_storeStrong(&local_28,0);
  return;
}

