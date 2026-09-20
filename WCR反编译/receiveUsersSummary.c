// receiveUsersSummary @ 01dde2f4

/* Function Stack Size: 0x10 bytes */

ID WCRefineSmallSignalSettingsViewController::receiveUsersSummary(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  cfstringStruct *pcVar5;
  undefined *local_30;
  SEL local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_28 = param_2;
  local_20 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar1 = false;
  if (puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
    puVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
    bVar1 = puVar3 == (undefined *)0x0;
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (bVar1) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_hQc6e;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = false;
    if (puVar3 == (undefined *)0x0) {
      puVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
      bVar1 = puVar3 == (undefined *)0x0;
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf__gb;
    }
    else {
      pcVar5 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_countSummaryForUsers_emptyText__026c5720,local_30,&cf__gb);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar5;
    }
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

