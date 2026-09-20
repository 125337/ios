// wcrGrouping_tableView:heightForRowAtIndexPath: @ 0039ccec

/* Function Stack Size: 0x20 bytes */

double __thiscall
WCRefineHomeSessionGroupingHook::wcrGrouping_tableView_heightForRowAtIndexPath_
          (WCRefineHomeSessionGroupingHook *this,ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined1 uVar1;
  bool bVar2;
  ID IVar3;
  ID IVar4;
  ulong uVar5;
  double in_d0;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ID local_68;
  undefined1 local_59;
  ID local_58;
  int local_4c;
  double local_48;
  double local_40;
  ulong local_38;
  ID local_30;
  SEL local_28;
  ID local_20;
  double local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  IVar3 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_wcrGrouping_active_026a2a40);
  if ((IVar3 & 1) == 0) {
    _CACurrentMediaTime();
    local_40 = in_d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_wcrGrouping_tableView_heightForR_026a2918,local_30,local_38);
    local_48 = in_d0;
    _CACurrentMediaTime();
    FUN_0039d110((in_d0 - local_40) * 1000.0);
    local_18 = local_48;
    local_4c = 1;
  }
  else {
    IVar4 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_wcrGrouping_active_026a2a40);
    IVar3 = local_30;
    local_59 = 0;
    bVar2 = false;
    uVar1 = (IVar4 & 1) != 0;
    if ((bool)uVar1) {
      IVar4 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_wcrGrouping_findMainTableView_026a2848);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = IVar3 == IVar4;
      local_59 = uVar1;
      local_58 = IVar4;
      (*(code *)PTR__objc_release_02578630)(IVar4);
      uVar1 = local_59;
    }
    local_59 = uVar1;
    if (bVar2) {
      IVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_wcrGrouping_snapshotForTableView_026a2a50,local_30);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = local_38;
      local_68 = IVar3;
      FUN_0039d120(local_38,IVar3);
      if ((uVar5 & 1) == 0) {
        uVar5 = local_38;
        FUN_0039d4e0(local_38,local_68);
        _objc_retainAutoreleasedReturnValue();
        local_78 = uVar5;
        if (uVar5 == 0) {
          uVar5 = local_38;
          FUN_0039d550(local_38,local_68);
          if ((uVar5 & 1) == 0) {
            uVar5 = local_38;
            FUN_0039d6b4(local_38,local_68);
            IVar4 = local_20;
            IVar3 = local_30;
            if ((uVar5 & 1) == 0) {
              local_4c = 0;
            }
            else {
              uVar5 = local_38;
              FUN_0039d7f0(local_38,local_68);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (IVar4,PTR_s_wcrGrouping_tableView_heightForR_026a2918,IVar3);
              local_18 = in_d0;
              (*(code *)PTR__objc_release_02578630)(uVar5);
              local_4c = 1;
            }
          }
          else {
            FUN_0039bee0();
            local_4c = 1;
            local_18 = in_d0;
          }
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_originalIndexPath_026a27d8);
          _objc_retainAutoreleasedReturnValue();
          local_80 = uVar5;
          if (uVar5 == 0) {
            local_18 = 68.0;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_20,PTR_s_wcrGrouping_tableView_heightForR_026a2918,local_30,uVar5);
            local_18 = in_d0;
          }
          local_4c = 1;
          in_d0 = local_18;
          _objc_storeStrong(&local_80,0);
        }
        _objc_storeStrong(&local_78,0);
      }
      else {
        uVar5 = local_38;
        FUN_0039d35c(local_38,local_68);
        _objc_retainAutoreleasedReturnValue();
        local_70 = uVar5;
        if (uVar5 == 0) {
          FUN_0039d49c();
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_20,PTR_s_wcrGrouping_tableView_heightForR_026a2918,local_30,uVar5);
        }
        local_4c = 1;
        local_18 = in_d0;
        _objc_storeStrong(&local_70,0);
      }
      _objc_storeStrong(&local_68,0);
      if (local_4c != 0) goto LAB_0039d0e4;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_wcrGrouping_tableView_heightForR_026a2918,local_30,local_38);
    local_4c = 1;
    local_18 = in_d0;
  }
LAB_0039d0e4:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_18;
}

