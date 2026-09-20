// FUN_005b436c @ 005b436c

void FUN_005b436c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  uint local_8c;
  ulong local_78 [2];
  ulong local_68;
  ulong local_60;
  byte local_51;
  ulong local_50;
  undefined4 local_48;
  ulong local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_WCRefine_findViewController_026a5820);
  _objc_retainAutoreleasedReturnValue();
  local_38 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_respondsToSelector__026ca818,PTR_s_reloadTableView_0269dcb0);
  if ((param_1 & 1) == 0) {
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_reloadTableData_0269dca8);
    if ((uVar1 & 1) == 0) {
      local_51 = 0;
      local_8c = 0;
      if (local_38 != 0) {
        uVar1 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_class_0269cd60);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        local_51 = 1;
        local_50 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_8c = (uint)uVar1;
      }
      if ((local_51 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_50);
      }
      if ((local_8c & 1) != 0) {
        local_60 = 0;
        uVar1 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_valueForKey__0269d128,&cf_tableView);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___UITableView_026ce1a8;
        local_68 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
        if ((uVar1 & 1) != 0) {
          _objc_storeStrong(&local_60,local_68);
        }
        _objc_storeStrong(&local_68,0);
        if (local_60 == 0) {
          uVar1 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_38,PTR_s_valueForKey__0269d128,&cf_m_tableView);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___UITableView_026ce1a8;
          local_78[0] = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
          if ((uVar1 & 1) != 0) {
            _objc_storeStrong(&local_60,local_78[0]);
          }
          _objc_storeStrong(local_78,0);
        }
        uVar1 = local_60;
        puVar2 = PTR__OBJC_CLASS___UITableView_026ce1a8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
        if ((uVar1 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_reloadData_0269e400);
        }
        _objc_storeStrong(&local_60,0);
      }
      local_48 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_performSelector__026ca7b8,PTR_s_reloadTableData_0269dca8);
      local_48 = 1;
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_performSelector__026ca7b8,PTR_s_reloadTableView_0269dcb0);
    local_48 = 1;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

