// WCRefineToDo_tableView:heightForRowAtIndexPath: @ 007f5258

/* Function Stack Size: 0x20 bytes */

double __thiscall
WCRefineToDoHook::WCRefineToDo_tableView_heightForRowAtIndexPath_
          (WCRefineToDoHook *this,ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  double in_d0;
  ID local_40;
  ID local_38;
  ID local_30;
  SEL local_28;
  ID local_20;
  double local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  IVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_WCRefineToDo_findMainTableView_026a87e8);
  _objc_retainAutoreleasedReturnValue();
  local_40 = IVar2;
  FUN_007f4368();
  if (((IVar2 & 1) == 0) || (local_30 != local_40)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_WCRefineToDo_tableView_heightFor_026a8868,local_30,local_38);
    local_18 = in_d0;
  }
  else {
    IVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_numberOfSections_026a2068);
    FUN_007f51ac();
    IVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_section_0269e988);
    IVar1 = local_20;
    IVar2 = local_30;
    if (IVar4 == IVar3) {
      puVar5 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      FUN_007f5444();
      local_18 = in_d0;
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
    else {
      IVar4 = local_38;
      FUN_007f54ac(local_38,IVar3);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar1,PTR_s_WCRefineToDo_tableView_heightFor_026a8868,IVar2);
      local_18 = in_d0;
      (*(code *)PTR__objc_release_02578630)(IVar4);
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_18;
}

