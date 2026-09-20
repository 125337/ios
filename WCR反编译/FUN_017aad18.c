// FUN_017aad18 @ 017aad18

void FUN_017aad18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  char *pcVar2;
  undefined8 uVar3;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  puVar1 = PTR_WCRefineHelper_026ce000;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_isPluginVersionCloudHardBlocked_0269db50);
  if (((ulong)puVar1 & 1) == 0) {
    if (DAT_028e41e0 == (char *)0x0) {
      pcVar2 = "WCRefineRootViewController";
      _objc_getClass();
      DAT_028e41e0 = pcVar2;
    }
    pcVar2 = DAT_028e41e0;
    _objc_retainAutoreleaseReturnValue();
    _objc_alloc_init();
    uVar3 = local_18;
    local_28 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    _objc_storeStrong(&local_28,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_presentPluginVersionBlockedUpdat_0269db58);
  }
  return;
}

