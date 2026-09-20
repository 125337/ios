// FUN_0022a3a0 @ 0022a3a0

void FUN_0022a3a0(undefined8 param_1)

{
  ulong uVar1;
  ulong local_40;
  ulong local_38 [3];
  undefined4 local_1c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 == 0) {
    local_1c = 1;
  }
  else {
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_reloadTableData_0269dca8);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_onTableViewReload_026a0960);
      if ((uVar1 & 1) == 0) {
        uVar1 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_reloadData_0269e400);
        if ((uVar1 & 1) == 0) {
          uVar1 = local_18;
          FUN_0022b93c();
          _objc_retainAutoreleasedReturnValue();
          local_38[0] = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getTableView_026a09c8);
          if ((uVar1 & 1) != 0) {
            uVar1 = local_38[0];
            (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_getTableView_026a09c8);
            _objc_retainAutoreleasedReturnValue();
            local_40 = uVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_reloadData_0269e400);
            if ((uVar1 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_reloadData_0269e400);
            }
            _objc_storeStrong(&local_40,0);
          }
          _objc_storeStrong(local_38,0);
          local_1c = 0;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadData_0269e400);
          local_1c = 1;
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_onTableViewReload_026a0960);
        local_1c = 1;
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
      local_1c = 1;
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

