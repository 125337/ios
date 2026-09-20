// wcr_applyTimeRange: @ 01dcfeac

/* Function Stack Size: 0x18 bytes */

void WCRefineSessionStatsViewController::wcr_applyTimeRange_
               (ID param_1,SEL param_2,long_long param_3)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_setActiveTimeRange__026c5590,param_3);
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_engine_026be8d0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setDidRequestRun__026c5598,0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setUserStopped__026c55a0,0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setSessionResult__026c5560);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setOverviewResult__026c54d8,0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setProgressText__026c55a8,0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_reloadBoard_026c54f8);
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isViewLoaded_0269cde0);
  bVar1 = false;
  if ((IVar2 & 1) != 0) {
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = IVar3 != 0;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_startStats_026c5428);
  }
  return;
}

