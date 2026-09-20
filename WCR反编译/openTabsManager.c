// openTabsManager @ 01e4e6fc

/* Function Stack Size: 0x10 bytes */

void WCRefineTelegramGroupingViewController::openTabsManager(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar1 = PTR_WCRefineTelegramGroupingTabsViewController_026ce948;
  _objc_alloc_init();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pushController__026b46d8,puVar1);
  _objc_storeStrong(&local_28,0);
  return;
}

