// wcrGrouping_findMainTableView @ 003766d0

/* Function Stack Size: 0x10 bytes */

ID WCRefineHomeSessionGroupingHook::wcrGrouping_findMainTableView(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  ID IVar3;
  ID local_38;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  _objc_getAssociatedObject(param_1,&DAT_028ca0fa);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_20;
  local_30 = param_1;
  FUN_003612b8(local_20,&cf_m_tableView);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UITableView_026ce1a8;
  local_38 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((IVar1 & 1) == 0) {
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
    _class_getInstanceVariable();
    if (IVar1 != 0) {
      IVar3 = local_20;
      _object_getIvar(local_20,IVar1);
      _objc_retainAutoreleasedReturnValue();
      IVar1 = local_38;
      local_38 = IVar3;
      (*(code *)PTR__objc_release_02578630)(IVar1);
    }
  }
  IVar1 = local_38;
  puVar2 = PTR__OBJC_CLASS___UITableView_026ce1a8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  IVar3 = local_30;
  if ((IVar1 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___UITableView_026ce1a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    local_18 = local_30;
    if ((IVar3 & 1) == 0) {
      local_18 = 0;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
    }
  }
  else {
    if (local_30 - local_38 != 0) {
      _objc_setAssociatedObject(local_30 - local_38,local_20,&DAT_028ca0fa,local_38,1);
    }
    IVar1 = local_38;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = IVar1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

