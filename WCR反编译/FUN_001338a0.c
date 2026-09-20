// FUN_001338a0 @ 001338a0

void FUN_001338a0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  ulong local_28;
  long local_20;
  long local_18;
  
  local_28 = 0;
  uVar1 = *(ulong *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_tableView_0269e378);
  if ((uVar1 & 1) == 0) {
    uVar1 = *(ulong *)(param_1 + 0x20);
    pcVar3 = &cf__tableView;
    _NSSelectorFromString();
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_respondsToSelector__026ca818,pcVar3);
    if ((uVar1 & 1) == 0) {
      uVar1 = *(ulong *)(param_1 + 0x20);
      pcVar3 = &cf_m_tableView;
      _NSSelectorFromString();
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_respondsToSelector__026ca818,pcVar3);
      if ((uVar1 & 1) != 0) {
        uVar2 = *(ulong *)(param_1 + 0x20);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_valueForKey__0269d128,&cf_m_tableView);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_28;
        local_28 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
    }
    else {
      uVar2 = *(ulong *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_valueForKey__0269d128,&cf__tableView);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_28;
      local_28 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
  }
  else {
    uVar2 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_valueForKey__0269d128,&cf_tableView);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_28;
    local_28 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  uVar1 = local_28;
  if (local_28 != 0) {
    puVar4 = PTR__OBJC_CLASS___UITableView_026ce1a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar4);
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadData_0269e400);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

