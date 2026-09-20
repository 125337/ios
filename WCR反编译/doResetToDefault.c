// doResetToDefault @ 01ccf674

/* Function Stack Size: 0x10 bytes */

void WCRefineProfileCardActionConfigViewController::doResetToDefault(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_b0;
  undefined *local_88;
  undefined *local_68;
  undefined *local_48;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR_WCRefineProfileCardActionCatalog_026ced78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineProfileCardActionCatalog_026ced78,
             PTR_s_normalizedOrderFromSavedOrder__026c3550,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_48 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_48 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_mutableCopy_0269d8a0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setOrderedActionIDs__026c3578);
  (*(code *)PTR__objc_release_02578630)(local_48);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  puVar2 = PTR_WCRefineProfileCardActionCatalog_026ced78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineProfileCardActionCatalog_026ced78,
             PTR_s_normalizedHiddenIDsFromSavedIDs__026c3558,0);
  _objc_retainAutoreleasedReturnValue();
  local_68 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_68 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setWithArray__0269d9a0,local_68);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setHiddenActionIDs__026c3580);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar1 = PTR_WCRefineProfileCardActionCatalog_026ced78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineProfileCardActionCatalog_026ced78,
             PTR_s_normalizedCustomTitlesFromSavedT_026c3548,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_88 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_88 = *(undefined **)PTR____NSDictionary0___02578288;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_mutableCopy_0269d8a0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setCustomTitleMap__026c3588);
  (*(code *)PTR__objc_release_02578630)(local_88);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR_WCRefineProfileCardActionCatalog_026ced78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineProfileCardActionCatalog_026ced78,
             PTR_s_normalizedCustomPageControllersF_026b09a8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_b0 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_b0 = *(undefined **)PTR____NSDictionary0___02578288;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_mutableCopy_0269d8a0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setCustomPageControllerMap__026c3590);
  (*(code *)PTR__objc_release_02578630)(local_b0);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setDeletedSeededActionIDs__026c3598);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_persistActionConfig_026c35f8);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_tableView_0269e378);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__b_YMn_);
  return;
}

