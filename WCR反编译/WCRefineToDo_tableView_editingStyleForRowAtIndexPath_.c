// WCRefineToDo_tableView:editingStyleForRowAtIndexPath: @ 007f6b5c

/* Function Stack Size: 0x20 bytes */

long_long WCRefineToDoHook::WCRefineToDo_tableView_editingStyleForRowAtIndexPath_
                    (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
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
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_WCRefineToDo_findMainTableView_026a87e8);
  _objc_retainAutoreleasedReturnValue();
  local_40 = IVar1;
  FUN_007f4368();
  if (((IVar1 & 1) == 0) || (local_30 != local_40)) {
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_WCRefineToDo_tableView_editingSt_026a8888,local_30,local_38);
    local_18 = IVar1;
  }
  else {
    IVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_numberOfSections_026a2068);
    FUN_007f51ac();
    IVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_section_0269e988);
    local_18 = local_20;
    IVar1 = local_30;
    if (IVar3 == IVar2) {
      local_18 = 0;
    }
    else {
      IVar3 = local_38;
      FUN_007f54ac(local_38,IVar2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_WCRefineToDo_tableView_editingSt_026a8888,IVar1);
      (*(code *)PTR__objc_release_02578630)(IVar3);
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_18;
}

