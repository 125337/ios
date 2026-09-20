// FUN_0055d5d4 @ 0055d5d4

void FUN_0055d5d4(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong local_60 [2];
  ulong local_50;
  ulong local_48 [3];
  undefined4 local_2c;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_WCRefineFindMomentsReloadViewCon_026a5050);
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  if (param_1 == 0) {
    local_2c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_respondsToSelector__026ca818,PTR_s_reloadTableView_0269dcb0);
    if ((param_1 & 1) == 0) {
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_reloadTableData_0269dca8);
      if ((uVar1 & 1) == 0) {
        local_48[0] = 0;
        uVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf_tableView);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___UITableView_026ce1a8;
        local_50 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
        if ((uVar1 & 1) != 0) {
          _objc_storeStrong(local_48,local_50);
        }
        _objc_storeStrong(&local_50,0);
        if (local_48[0] == 0) {
          uVar1 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_valueForKey__0269d128,&cf_m_tableView);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___UITableView_026ce1a8;
          local_60[0] = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
          if ((uVar1 & 1) != 0) {
            _objc_storeStrong(local_48,local_60[0]);
          }
          _objc_storeStrong(local_60,0);
        }
        uVar1 = local_48[0];
        puVar2 = PTR__OBJC_CLASS___UITableView_026ce1a8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
        if ((uVar1 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_reloadData_0269e400);
        }
        _objc_storeStrong(local_48,0);
        local_2c = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_performSelector__026ca7b8,PTR_s_reloadTableData_0269dca8);
        local_2c = 1;
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_performSelector__026ca7b8,PTR_s_reloadTableView_0269dcb0);
      local_2c = 1;
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

