// WCRefineToDo_tableView:didEndEditingRowAtIndexPath: @ 007f7244

/* Function Stack Size: 0x20 bytes */

void WCRefineToDoHook::WCRefineToDo_tableView_didEndEditingRowAtIndexPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID local_38;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_WCRefineToDo_findMainTableView_026a87e8);
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar2;
  FUN_007f4368();
  if (((IVar2 & 1) == 0) || (local_28 != local_38)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_WCRefineToDo_tableView_didEndEdi_026a88a8,local_28,local_30);
  }
  else {
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_numberOfSections_026a2068);
    FUN_007f51ac();
    IVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_section_0269e988);
    IVar1 = local_18;
    IVar2 = local_28;
    if (IVar4 != IVar3) {
      IVar4 = local_30;
      FUN_007f54ac(local_30,IVar3);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar1,PTR_s_WCRefineToDo_tableView_didEndEdi_026a88a8,IVar2);
      (*(code *)PTR__objc_release_02578630)(IVar4);
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

