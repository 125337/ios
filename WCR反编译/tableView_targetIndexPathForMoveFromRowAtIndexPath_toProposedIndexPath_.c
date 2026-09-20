// tableView:targetIndexPathForMoveFromRowAtIndexPath:toProposedIndexPath: @ 01e404f8

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x28 bytes */

ID WCRTGTabReorderViewController::
   tableView_targetIndexPathForMoveFromRowAtIndexPath_toProposedIndexPath_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  bool bVar1;
  bool bVar2;
  ID IVar3;
  ID IVar4;
  ID local_48;
  ID local_40;
  ID local_38 [2];
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_38[1] = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(local_38 + 1,param_3);
  local_38[0] = 0;
  _objc_storeStrong(local_38,param_4);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_5);
  IVar4 = local_38[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_section_0269e988);
  bVar2 = false;
  bVar1 = false;
  if (IVar4 == 0) {
    IVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_section_0269e988);
    bVar1 = false;
    if (IVar4 == 1) {
      local_48 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_tabsInSection__026c6488,0);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      IVar4 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = IVar4 < 2;
    }
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  IVar3 = local_38[0];
  IVar4 = local_40;
  if (bVar1) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = IVar3;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = IVar4;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(local_38,0);
  _objc_storeStrong(local_38 + 1,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

