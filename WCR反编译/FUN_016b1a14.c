// FUN_016b1a14 @ 016b1a14

void FUN_016b1a14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined *local_20;
  undefined8 local_18;
  
  local_20 = (undefined *)0x0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = local_20;
  local_30 = param_1;
  FUN_016aed70();
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_38;
    local_38 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_wcr_openFileAtPathWithOtherApps__026acf98,local_28,
             local_38);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return;
}

