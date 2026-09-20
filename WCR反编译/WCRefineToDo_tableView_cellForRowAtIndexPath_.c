// WCRefineToDo_tableView:cellForRowAtIndexPath: @ 007f55b0

/* Function Stack Size: 0x20 bytes */

ID WCRefineToDoHook::WCRefineToDo_tableView_cellForRowAtIndexPath_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  SEL local_28;
  undefined *local_20;
  undefined *local_18;
  
  local_30 = (undefined *)0x0;
  local_28 = param_2;
  local_20 = (undefined *)param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = (undefined *)0x0;
  _objc_storeStrong(&local_38,param_4);
  puVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_WCRefineToDo_findMainTableView_026a87e8);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar1;
  FUN_007f4368();
  if ((((ulong)puVar1 & 1) == 0) || (local_30 != local_40)) {
    puVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_WCRefineToDo_tableView_cellForRo_026a8870,local_30,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar1;
  }
  else {
    puVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_numberOfSections_026a2068);
    local_48 = puVar1;
    FUN_007f51ac();
    puVar2 = local_38;
    local_50 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_section_0269e988);
    local_18 = local_20;
    puVar1 = local_30;
    if (puVar2 == local_50) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_dequeueReusableCellWithIdentifie_026a2808,DAT_026f46d0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_WCRefineToDoFullWidthCell_026ce988;
      local_58 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineToDoFullWidthCell_026ce988,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if (((ulong)puVar1 & 1) == 0) {
        puVar2 = PTR_WCRefineToDoFullWidthCell_026ce988;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)();
        puVar1 = local_58;
        local_58 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar1);
      }
      FUN_007f586c(local_58,local_30,local_20);
      puVar1 = local_58;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = puVar1;
      _objc_storeStrong(&local_58,0);
    }
    else {
      puVar2 = local_38;
      FUN_007f54ac(local_38,local_50);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_WCRefineToDo_tableView_cellForRo_026a8870,puVar1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

