// WCRefineToDo_numberOfSectionsInTableView: @ 007f4f28

/* Function Stack Size: 0x18 bytes */

long_long WCRefineToDoHook::WCRefineToDo_numberOfSectionsInTableView_
                    (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
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
  IVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_numberOfSections_026a2068);
  IVar2 = local_20;
  local_38 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_WCRefineToDo_findMainTableView_026a87e8);
  _objc_retainAutoreleasedReturnValue();
  local_40 = IVar2;
  FUN_007f4368();
  if (((IVar2 & 1) == 0) || (local_30 != local_40)) {
    local_18 = local_38;
  }
  else {
    _objc_setAssociatedObject(0,local_30,&DAT_028ccee0,local_20,0);
    local_18 = local_38 + 1;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  return local_18;
}

