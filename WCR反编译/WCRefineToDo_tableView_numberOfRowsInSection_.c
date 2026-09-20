// WCRefineToDo_tableView:numberOfRowsInSection: @ 007f5020

/* Function Stack Size: 0x20 bytes */

long_long WCRefineToDoHook::WCRefineToDo_tableView_numberOfRowsInSection_
                    (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  ID IVar1;
  ID local_70;
  ID local_40;
  ID local_38;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar1 = local_20;
  local_38 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_WCRefineToDo_findMainTableView_026a87e8);
  _objc_retainAutoreleasedReturnValue();
  local_40 = IVar1;
  FUN_007f4368();
  if (((IVar1 & 1) == 0) || (local_30 != local_40)) {
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_WCRefineToDo_tableView_numberOfR_026a8860,local_30,local_38);
    local_18 = IVar1;
  }
  else {
    IVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_numberOfSections_026a2068);
    FUN_007f51ac();
    if (local_38 == IVar1) {
      local_18 = 1;
    }
    else {
      if ((long)IVar1 < (long)local_38) {
        local_70 = local_38 - 1;
      }
      else {
        local_70 = local_38;
      }
      IVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_WCRefineToDo_tableView_numberOfR_026a8860,local_30,local_70);
      local_18 = IVar1;
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  return local_18;
}

