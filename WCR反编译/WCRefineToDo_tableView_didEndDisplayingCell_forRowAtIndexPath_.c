// WCRefineToDo_tableView:didEndDisplayingCell:forRowAtIndexPath: @ 007f75bc

/* Function Stack Size: 0x28 bytes */

void WCRefineToDoHook::WCRefineToDo_tableView_didEndDisplayingCell_forRowAtIndexPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined8 uVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID local_40;
  ID local_38;
  undefined8 local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_WCRefineToDo_findMainTableView_026a87e8);
  _objc_retainAutoreleasedReturnValue();
  local_40 = IVar3;
  FUN_007f4368();
  if (((IVar3 & 1) == 0) || (local_28 != local_40)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_WCRefineToDo_tableView_didEndDis_026a88b8,local_28,local_30,local_38);
  }
  else {
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_numberOfSections_026a2068);
    FUN_007f51ac();
    IVar5 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_section_0269e988);
    IVar2 = local_18;
    IVar3 = local_28;
    uVar1 = local_30;
    if (IVar5 != IVar4) {
      IVar5 = local_38;
      FUN_007f54ac(local_38,IVar4);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_WCRefineToDo_tableView_didEndDis_026a88b8,IVar3,uVar1);
      (*(code *)PTR__objc_release_02578630)(IVar5);
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

