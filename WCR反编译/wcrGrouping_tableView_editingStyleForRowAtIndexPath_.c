// wcrGrouping_tableView:editingStyleForRowAtIndexPath: @ 003a3308

/* Function Stack Size: 0x20 bytes */

long_long WCRefineHomeSessionGroupingHook::wcrGrouping_tableView_editingStyleForRowAtIndexPath_
                    (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined1 uVar1;
  undefined *puVar2;
  bool bVar3;
  ID IVar4;
  ID IVar5;
  ulong uVar6;
  ulong local_70;
  int local_64;
  undefined *local_60;
  ulong local_58;
  ID local_50;
  undefined1 local_41;
  ID local_40;
  ulong local_38;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  IVar4 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_wcrGrouping_active_026a2a40);
  IVar5 = local_30;
  local_41 = 0;
  bVar3 = false;
  uVar1 = (IVar4 & 1) != 0;
  if ((bool)uVar1) {
    IVar4 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_wcrGrouping_findMainTableView_026a2848);
    _objc_retainAutoreleasedReturnValue();
    bVar3 = IVar5 == IVar4;
    local_41 = uVar1;
    local_40 = IVar4;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    uVar1 = local_41;
  }
  local_41 = uVar1;
  if (bVar3) {
    IVar5 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_wcrGrouping_snapshotForTableView_026a2a50,local_30);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = local_38;
    local_50 = IVar5;
    FUN_0039d120(local_38,IVar5);
    if ((uVar6 & 1) == 0) {
      uVar6 = local_38;
      FUN_0039d4e0(local_38,local_50);
      _objc_retainAutoreleasedReturnValue();
      local_70 = uVar6;
      if (uVar6 == 0) {
        uVar6 = local_38;
        FUN_0039d550(local_38,local_50);
        if ((uVar6 & 1) == 0) {
          uVar6 = local_38;
          FUN_0039d6b4(local_38,local_50);
          puVar2 = PTR_s_wcrGrouping_tableView_editingSty_026a2948;
          if ((uVar6 & 1) == 0) {
            local_64 = 0;
          }
          else {
            IVar4 = local_20;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_20,PTR_s_respondsToSelector__026ca818,
                       PTR_s_wcrGrouping_tableView_editingSty_026a2948);
            local_18 = local_20;
            IVar5 = local_30;
            if ((IVar4 & 1) == 0) {
              local_18 = 1;
              local_64 = 1;
            }
            else {
              uVar6 = local_38;
              FUN_0039d7f0(local_38,local_50);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(local_18,puVar2,IVar5);
              (*(code *)PTR__objc_release_02578630)(uVar6);
              local_64 = 1;
            }
          }
        }
        else {
          local_18 = 0;
          local_64 = 1;
        }
      }
      else {
        local_18 = 0;
        local_64 = 1;
      }
      _objc_storeStrong(&local_70,0);
    }
    else {
      uVar6 = local_38;
      FUN_0039d35c(local_38,local_50);
      _objc_retainAutoreleasedReturnValue();
      local_58 = uVar6;
      if (uVar6 == 0) {
        local_18 = 0;
      }
      else {
        local_60 = PTR_s_wcrGrouping_tableView_editingSty_026a2948;
        IVar5 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_respondsToSelector__026ca818,
                   PTR_s_wcrGrouping_tableView_editingSty_026a2948);
        if ((IVar5 & 1) == 0) {
          local_18 = 1;
        }
        else {
          IVar5 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)(local_20,local_60,local_30,local_58);
          local_18 = IVar5;
        }
      }
      local_64 = 1;
      _objc_storeStrong(&local_58,0);
    }
    _objc_storeStrong(&local_50,0);
    if (local_64 != 0) goto LAB_003a36b4;
  }
  puVar2 = PTR_s_wcrGrouping_tableView_editingSty_026a2948;
  IVar5 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,
             PTR_s_wcrGrouping_tableView_editingSty_026a2948);
  if ((IVar5 & 1) == 0) {
    local_18 = 1;
    local_64 = 1;
  }
  else {
    IVar5 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,puVar2,local_30,local_38);
    local_64 = 1;
    local_18 = IVar5;
  }
LAB_003a36b4:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_18;
}

