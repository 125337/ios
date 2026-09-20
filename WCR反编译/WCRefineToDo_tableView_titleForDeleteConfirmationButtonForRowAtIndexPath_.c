// WCRefineToDo_tableView:titleForDeleteConfirmationButtonForRowAtIndexPath: @ 007f6ec8

/* Function Stack Size: 0x20 bytes */

ID WCRefineToDoHook::WCRefineToDo_tableView_titleForDeleteConfirmationButtonForRowAtIndexPath_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  SEL local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_4);
  pcVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_WCRefineToDo_findMainTableView_026a87e8);
  _objc_retainAutoreleasedReturnValue();
  local_40 = pcVar1;
  FUN_007f4368();
  if ((((ulong)pcVar1 & 1) == 0) || (local_30 != local_40)) {
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_WCRefineToDo_tableView_titleForD_026a8898,local_30,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar1;
  }
  else {
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_numberOfSections_026a2068);
    FUN_007f51ac();
    pcVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_section_0269e988);
    local_18 = local_20;
    pcVar1 = local_30;
    if (pcVar3 == pcVar2) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &::cf___;
    }
    else {
      pcVar3 = local_38;
      FUN_007f54ac(local_38,pcVar2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_WCRefineToDo_tableView_titleForD_026a8898,pcVar1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

