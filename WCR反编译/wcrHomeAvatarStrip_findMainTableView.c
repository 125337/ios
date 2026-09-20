// wcrHomeAvatarStrip_findMainTableView @ 0034db44

/* Function Stack Size: 0x10 bytes */

ID WCRefineHomeAvatarStripHook::wcrHomeAvatarStrip_findMainTableView(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  ID IVar3;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_respondsToSelector__026ca818,PTR_s_m_tableView_026a23c0);
  if ((param_1 & 1) != 0) {
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_tableView_026a23c0);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_30;
    local_30 = IVar1;
    (*(code *)PTR__objc_release_02578630)(IVar3);
  }
  IVar3 = local_30;
  puVar2 = PTR__OBJC_CLASS___UITableView_026ce1a8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((IVar3 & 1) == 0) {
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf_m_tableView);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_30;
    local_30 = IVar1;
    (*(code *)PTR__objc_release_02578630)(IVar3);
  }
  IVar3 = local_30;
  puVar2 = PTR__OBJC_CLASS___UITableView_026ce1a8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((IVar3 & 1) == 0) {
    local_18 = 0;
  }
  else {
    _objc_setAssociatedObject(local_30,&DAT_028ca001,local_20,0);
    IVar3 = local_30;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = IVar3;
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

