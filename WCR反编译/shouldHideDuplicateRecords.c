// shouldHideDuplicateRecords @ 01b268ac

/* Function Stack Size: 0x10 bytes */

bool WCRefineKeywordAlertHistoryViewController::shouldHideDuplicateRecords(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  uint local_24;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_24 = 0;
  if (puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_showingDuplicateRecords_026beaf0);
    local_24 = (uint)param_1 ^ 1;
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return local_24 & 1;
}

