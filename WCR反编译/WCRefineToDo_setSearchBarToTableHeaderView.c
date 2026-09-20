// WCRefineToDo_setSearchBarToTableHeaderView @ 007f2fd4

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoHook::WCRefineToDo_setSearchBarToTableHeaderView(ID param_1,SEL param_2)

{
  ID IVar1;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_WCRefineToDo_setSearchBarToTable_026a85e8);
  FUN_007f309c();
  if ((param_1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_WCRefineToDo_markHeaderReadyAndS_026a8800,
               &cf_setSearchBarToTableHeaderView);
  }
  else {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_WCRefineToDo_findMainTableView_026a87e8);
    _objc_retainAutoreleasedReturnValue();
    local_28 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHomeTableHeaderHost_026ce570,
               PTR_s_scheduleSettleOnTableView_owner__026a2470,IVar1,local_18);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

