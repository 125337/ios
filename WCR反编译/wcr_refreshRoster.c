// wcr_refreshRoster @ 01dd368c

/* Function Stack Size: 0x10 bytes */

void WCRefineSessionStatsViewController::wcr_refreshRoster(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_overviewResult_026c54e0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar1 == 0) {
    puVar2 = PTR_WCRefineSessionStatsOverviewResult_026ced30;
    _objc_alloc_init();
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setOverviewResult__026c54d8);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  puVar2 = PTR_WCRefineSessionStatsEngine_026ced48;
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_overviewResult_026c54e0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_applyFriendRosterToResult_refres_026af820,IVar1,1);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_reloadBoard_026c54f8);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__YS___R_);
  return;
}

