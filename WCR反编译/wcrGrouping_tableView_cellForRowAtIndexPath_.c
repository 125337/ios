// wcrGrouping_tableView:cellForRowAtIndexPath: @ 0039dd18

/* Function Stack Size: 0x20 bytes */

ID __thiscall
WCRefineHomeSessionGroupingHook::wcrGrouping_tableView_cellForRowAtIndexPath_
          (WCRefineHomeSessionGroupingHook *this,ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  ulong uVar3;
  double in_d0;
  double local_f8;
  ID local_c0;
  ID local_b8;
  ulong local_b0;
  ID local_a8;
  byte local_9b;
  byte local_9a;
  byte local_99;
  ID local_98;
  ulong local_90;
  ID local_88;
  ulong local_80;
  ID local_78;
  double local_70;
  int local_64;
  ID local_60;
  double local_58;
  undefined1 local_49;
  ulong local_48;
  ID local_40;
  SEL local_38;
  ID local_30;
  ID local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  IVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_wcrGrouping_active_026a2a40);
  local_49 = (undefined1)IVar1;
  if ((IVar1 & 1) == 0) {
    _CACurrentMediaTime();
    IVar2 = local_30;
    local_58 = in_d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_wcrGrouping_tableView_cellForRow_026a2920,local_40,local_48);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_40;
    uVar3 = local_48;
    local_60 = IVar2;
    _CACurrentMediaTime();
    _WCRHomeJankLogCellForRow((in_d0 - local_58) * 1000.0,IVar1,uVar3,IVar2);
    IVar1 = local_60;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = IVar1;
    local_64 = 1;
    _objc_storeStrong(&local_60,0);
  }
  else {
    _WCRHomeScrollPerfIsActive();
    if ((IVar1 & 1) == 0) {
      local_f8 = 0.0;
    }
    else {
      _CACurrentMediaTime();
      local_f8 = in_d0;
    }
    IVar1 = local_40;
    local_70 = local_f8;
    IVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_wcrGrouping_findMainTableView_026a2848);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (IVar1 == IVar2) {
      IVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_wcrGrouping_snapshotForTableView_026a2a50,local_40);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_48;
      local_78 = IVar1;
      FUN_0039d120(local_48,IVar1);
      if ((uVar3 & 1) == 0) {
        uVar3 = local_48;
        FUN_0039d4e0(local_48,local_78);
        _objc_retainAutoreleasedReturnValue();
        local_b0 = uVar3;
        if (uVar3 == 0) {
          uVar3 = local_48;
          FUN_0039d550(local_48,local_78);
          if ((uVar3 & 1) == 0) {
            uVar3 = local_48;
            FUN_0039d6b4(local_48,local_78);
            IVar2 = local_30;
            IVar1 = local_40;
            if ((uVar3 & 1) == 0) {
              local_64 = 0;
            }
            else {
              uVar3 = local_48;
              FUN_0039d7f0(local_48,local_78);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (IVar2,PTR_s_wcrGrouping_tableView_cellForRow_026a2920,IVar1);
              _objc_retainAutoreleasedReturnValue();
              local_b8 = IVar2;
              (*(code *)PTR__objc_release_02578630)(uVar3);
              IVar1 = local_b8;
              FUN_0039e31c(local_70);
              _objc_retainAutoreleasedReturnValue();
              local_64 = 1;
              local_28 = IVar1;
              _objc_storeStrong(&local_b8,0);
            }
          }
          else {
            IVar1 = local_40;
            FUN_003a08b0();
            _objc_retainAutoreleasedReturnValue();
            IVar2 = IVar1;
            FUN_0039e31c(local_70);
            _objc_retainAutoreleasedReturnValue();
            local_28 = IVar2;
            (*(code *)PTR__objc_release_02578630)(IVar1);
            local_64 = 1;
          }
        }
        else {
          IVar1 = local_40;
          FUN_003a01e0(local_40,uVar3,local_48);
          _objc_retainAutoreleasedReturnValue();
          IVar2 = IVar1;
          FUN_0039e31c(local_70);
          _objc_retainAutoreleasedReturnValue();
          local_28 = IVar2;
          (*(code *)PTR__objc_release_02578630)(IVar1);
          local_64 = 1;
        }
        _objc_storeStrong(&local_b0,0);
      }
      else {
        uVar3 = local_48;
        FUN_0039d35c(local_48,local_78);
        _objc_retainAutoreleasedReturnValue();
        local_80 = uVar3;
        if (uVar3 == 0) {
          uVar3 = local_48;
          FUN_0039e3b0(local_48,local_78);
          _objc_retainAutoreleasedReturnValue();
          IVar1 = local_30;
          local_90 = uVar3;
          FUN_003612b8(local_30,&cf_m_mainFrameLogicController);
          _objc_retainAutoreleasedReturnValue();
          local_98 = IVar1;
          FUN_0037a830(IVar1,&cf_m_bReadyToLoadData);
          local_99 = (byte)IVar1;
          IVar1 = local_98;
          FUN_0037a830(local_98,&cf_hasLoadSessionData);
          local_9a = (byte)IVar1;
          local_9b = 0;
          if ((local_99 & 1) == 0) {
            local_9b = local_9a ^ 1;
          }
          local_9b = local_9b & 1;
          IVar1 = local_40;
          FUN_0039e660(local_40,local_9b);
          _objc_retainAutoreleasedReturnValue();
          local_a8 = IVar1;
          FUN_0039e980(IVar1,local_90,local_40,local_9b & 1,local_48);
          IVar1 = local_a8;
          FUN_0039e31c(local_70);
          _objc_retainAutoreleasedReturnValue();
          local_64 = 1;
          local_28 = IVar1;
          _objc_storeStrong(&local_a8);
          _objc_storeStrong(&local_98,0);
          _objc_storeStrong(&local_90,0);
        }
        else {
          IVar1 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_wcrGrouping_tableView_cellForRow_026a2920,local_40,uVar3);
          _objc_retainAutoreleasedReturnValue();
          local_88 = IVar1;
          FUN_0039e31c(local_70);
          _objc_retainAutoreleasedReturnValue();
          local_64 = 1;
          local_28 = IVar1;
          _objc_storeStrong(&local_88,0);
        }
        _objc_storeStrong(&local_80,0);
      }
      _objc_storeStrong(&local_78,0);
      if (local_64 != 0) goto LAB_0039e2ec;
    }
    IVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_wcrGrouping_tableView_cellForRow_026a2920,local_40,local_48);
    _objc_retainAutoreleasedReturnValue();
    local_c0 = IVar1;
    FUN_0039e31c(local_70);
    _objc_retainAutoreleasedReturnValue();
    local_64 = 1;
    local_28 = IVar1;
    _objc_storeStrong(&local_c0,0);
  }
LAB_0039e2ec:
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return local_28;
}

