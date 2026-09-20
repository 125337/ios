// keywordAlertHistoryViewControllerClass @ 00f9bc20

/* Function Stack Size: 0x10 bytes */

CLASS WCRefineHelper::keywordAlertHistoryViewControllerClass(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined *local_70;
  undefined *local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_70 = PTR_WCRefineKeywordAlertHistoryCardViewController_026cebf0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineKeywordAlertHistoryCardViewController_026cebf0,PTR_s_class_0269cd60);
  puVar1 = PTR_WCRefineKeywordAlertHistoryViewController_026cebf8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineKeywordAlertHistoryViewController_026cebf8,PTR_s_class_0269cd60);
  if ((puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) && (local_70 != (undefined *)0x0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_70;
  }
  else {
    if (puVar1 != (undefined *)0x0) {
      local_70 = puVar1;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_70;
  }
  _objc_autoreleaseReturnValue();
  return (CLASS)local_18;
}

