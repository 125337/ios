// wcrGrouping_tableView:canEditRowAtIndexPath: @ 003a2d80

/* Function Stack Size: 0x20 bytes */

bool WCRefineHomeSessionGroupingHook::wcrGrouping_tableView_canEditRowAtIndexPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined1 uVar1;
  bool bVar2;
  ID IVar3;
  ID IVar4;
  ulong uVar5;
  ulong local_68;
  int local_5c;
  ulong local_58;
  ID local_50;
  undefined1 local_41;
  ID local_40;
  ulong local_38;
  ID local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  IVar3 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_wcrGrouping_active_026a2a40);
  IVar4 = local_30;
  local_41 = 0;
  bVar2 = false;
  uVar1 = (IVar3 & 1) != 0;
  if ((bool)uVar1) {
    IVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_wcrGrouping_findMainTableView_026a2848);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = IVar4 == IVar3;
    local_41 = uVar1;
    local_40 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    uVar1 = local_41;
  }
  local_41 = uVar1;
  if (bVar2) {
    IVar4 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_wcrGrouping_snapshotForTableView_026a2a50,local_30);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = local_38;
    local_50 = IVar4;
    FUN_0039d120(local_38,IVar4);
    if ((uVar5 & 1) == 0) {
      uVar5 = local_38;
      FUN_0039d4e0(local_38,local_50);
      _objc_retainAutoreleasedReturnValue();
      local_68 = uVar5;
      if (uVar5 == 0) {
        uVar5 = local_38;
        FUN_0039d550(local_38,local_50);
        if ((uVar5 & 1) == 0) {
          uVar5 = local_38;
          FUN_0039d6b4(local_38,local_50);
          IVar3 = local_20;
          IVar4 = local_30;
          if ((uVar5 & 1) == 0) {
            local_5c = 0;
          }
          else {
            uVar5 = local_38;
            FUN_0039d7f0(local_38,local_50);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (IVar3,PTR_s_wcrGrouping_tableView_canEditRow_026a2938,IVar4);
            local_11 = (byte)IVar3 & 1;
            (*(code *)PTR__objc_release_02578630)(uVar5);
            local_5c = 1;
          }
        }
        else {
          local_11 = 0;
          local_5c = 1;
        }
      }
      else {
        local_11 = 0;
        local_5c = 1;
      }
      _objc_storeStrong(&local_68,0);
    }
    else {
      uVar5 = local_38;
      FUN_0039d35c(local_38,local_50);
      _objc_retainAutoreleasedReturnValue();
      local_58 = uVar5;
      if (uVar5 == 0) {
        IVar4 = local_20;
        FUN_003a30d4(local_20,local_30,local_38);
        local_11 = (byte)IVar4;
      }
      else {
        IVar4 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_wcrGrouping_tableView_canEditRow_026a2938,local_30,uVar5);
        local_11 = (byte)IVar4;
      }
      local_11 = local_11 & 1;
      local_5c = 1;
      _objc_storeStrong(&local_58,0);
    }
    _objc_storeStrong(&local_50,0);
    if (local_5c != 0) goto LAB_003a30a4;
  }
  IVar4 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_wcrGrouping_tableView_canEditRow_026a2938,local_30,local_38);
  local_11 = (byte)IVar4 & 1;
  local_5c = 1;
LAB_003a30a4:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

