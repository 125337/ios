// wcrGrouping_viewDidLoad @ 0037e494

/* Function Stack Size: 0x10 bytes */

void WCRefineHomeSessionGroupingHook::wcrGrouping_viewDidLoad(ID param_1,SEL param_2)

{
  ID IVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcrGrouping_viewDidLoad_026a29b8);
  _objc_storeWeak(&DAT_028ca0d0,param_1);
  _WCRefineHomeGroupingReloadGateCache();
  FUN_00375c6c();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcrGrouping_findMainTableView_026a2848);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcrGrouping_installEdgePanObserv_026a2a68);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_wcrGrouping_scheduleRefreshForTr_026a28a0,&cf_viewDidLoad);
  return;
}

