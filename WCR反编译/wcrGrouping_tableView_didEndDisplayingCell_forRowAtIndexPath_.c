// wcrGrouping_tableView:didEndDisplayingCell:forRowAtIndexPath: @ 003a8054

/* Function Stack Size: 0x28 bytes */

void WCRefineHomeSessionGroupingHook::wcrGrouping_tableView_didEndDisplayingCell_forRowAtIndexPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined1 uVar1;
  undefined8 uVar2;
  bool bVar3;
  ID IVar4;
  ID IVar5;
  ulong uVar6;
  ID local_70;
  ulong local_68;
  ulong local_60;
  int local_54;
  ID local_50;
  undefined1 local_41;
  ID local_40;
  ulong local_38;
  undefined8 local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  IVar4 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcrGrouping_active_026a2a40);
  IVar5 = local_28;
  local_41 = 0;
  bVar3 = false;
  uVar1 = (IVar4 & 1) != 0;
  if ((bool)uVar1) {
    IVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcrGrouping_findMainTableView_026a2848);
    _objc_retainAutoreleasedReturnValue();
    bVar3 = IVar5 == IVar4;
    local_41 = uVar1;
    local_40 = IVar4;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    uVar1 = local_41;
  }
  local_41 = uVar1;
  if (bVar3) {
    IVar5 = local_18;
    _WCRGroupingState();
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_50 = IVar4;
    (*(code *)PTR__objc_release_02578630)(IVar5);
    if ((local_50 == 0) || (IVar5 = local_50, FUN_00357d1c(), (IVar5 & 1) == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_wcrGrouping_tableView_didEndDisp_026a29b0,local_28,local_30,local_38
                );
      local_54 = 1;
    }
    else {
      uVar6 = local_38;
      FUN_0039d120(local_38,local_50);
      if ((uVar6 & 1) == 0) {
        uVar6 = local_38;
        FUN_0039d4e0(local_38,local_50);
        _objc_retainAutoreleasedReturnValue();
        local_68 = uVar6;
        if (uVar6 == 0) {
          uVar6 = local_38;
          FUN_0039d550(local_38,local_50);
          if ((uVar6 & 1) == 0) {
            uVar6 = local_38;
            FUN_0039d6b4(local_38,local_50);
            IVar4 = local_18;
            IVar5 = local_28;
            uVar2 = local_30;
            if ((uVar6 & 1) == 0) {
              local_54 = 0;
            }
            else {
              uVar6 = local_38;
              FUN_0039d7f0(local_38,local_50);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (IVar4,PTR_s_wcrGrouping_tableView_didEndDisp_026a29b0,IVar5,uVar2);
              (*(code *)PTR__objc_release_02578630)(uVar6);
              local_54 = 1;
            }
          }
          else {
            local_54 = 1;
          }
        }
        else {
          IVar5 = local_18;
          FUN_003a7d64(local_18,uVar6);
          _objc_retainAutoreleasedReturnValue();
          local_70 = IVar5;
          if (IVar5 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_18,PTR_s_wcrGrouping_tableView_didEndDisp_026a29b0,local_28,local_30,
                       IVar5);
          }
          local_54 = 1;
          _objc_storeStrong(&local_70,0);
        }
        _objc_storeStrong(&local_68,0);
      }
      else {
        uVar6 = local_38;
        FUN_0039d35c(local_38,local_50);
        _objc_retainAutoreleasedReturnValue();
        local_54 = 1;
        local_60 = uVar6;
        _objc_storeStrong(&local_60,0);
      }
    }
    _objc_storeStrong(&local_50,0);
    if (local_54 != 0) goto LAB_003a83e0;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_wcrGrouping_tableView_didEndDisp_026a29b0,local_28,local_30,local_38);
  local_54 = 0;
LAB_003a83e0:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

