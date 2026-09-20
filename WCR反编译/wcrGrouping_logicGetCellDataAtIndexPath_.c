// wcrGrouping_logicGetCellDataAtIndexPath: @ 003a636c

/* Function Stack Size: 0x18 bytes */

ID WCRefineHomeSessionGroupingHook::wcrGrouping_logicGetCellDataAtIndexPath_
             (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  ID local_58;
  ID local_50;
  ID local_48;
  ID local_40;
  int local_34;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar1 = local_20;
  _WCRGroupingState();
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if ((IVar3 & 1) == 0) {
    IVar1 = local_20;
    FUN_0037f038();
    if (((IVar1 & 1) != 0) &&
       (IVar1 = local_20,
       (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_wcrGrouping_active_026a2a40),
       (IVar1 & 1) != 0)) {
      IVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_wcrGrouping_findMainTableView_026a2848);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = local_20;
      local_40 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_wcrGrouping_snapshotForTableView_026a2a50,IVar1);
      _objc_retainAutoreleasedReturnValue();
      IVar1 = local_30;
      local_48 = IVar2;
      FUN_0039d120(local_30,IVar2);
      if ((IVar1 & 1) == 0) {
        IVar1 = local_30;
        FUN_0039d4e0(local_30,local_48);
        _objc_retainAutoreleasedReturnValue();
        local_58 = IVar1;
        if (IVar1 == 0) {
          IVar1 = local_30;
          FUN_0039d550(local_30,local_48);
          if ((IVar1 & 1) == 0) {
            IVar2 = local_30;
            FUN_0039d6b4(local_30,local_48);
            IVar1 = local_20;
            if ((IVar2 & 1) == 0) {
              local_34 = 0;
            }
            else {
              IVar2 = local_30;
              FUN_0039d7f0(local_30,local_48);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (IVar1,PTR_s_wcrGrouping_logicGetCellDataAtIn_026a2988);
              _objc_retainAutoreleasedReturnValue();
              local_18 = IVar1;
              (*(code *)PTR__objc_release_02578630)(IVar2);
              local_34 = 1;
            }
          }
          else {
            local_18 = 0;
            local_34 = 1;
          }
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_cellData_026a27b0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)();
          if (IVar1 == 0) {
            puVar4 = PTR_WCRefineGroupDataProvider_026ce540;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineGroupDataProvider_026ce540,PTR_s_shared_0269cad0);
            _objc_retainAutoreleasedReturnValue();
            IVar1 = local_58;
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_session_0269d000);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_nativeCellDataForSession__026a2810);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setCellData__026a2818);
            (*(code *)PTR__objc_release_02578630)(puVar5);
            (*(code *)PTR__objc_release_02578630)(IVar1);
            (*(code *)PTR__objc_release_02578630)(puVar4);
          }
          IVar1 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_cellData_026a27b0);
          _objc_retainAutoreleasedReturnValue();
          local_34 = 1;
          local_18 = IVar1;
        }
        _objc_storeStrong(&local_58,0);
      }
      else {
        IVar1 = local_30;
        FUN_0039d35c(local_30,local_48);
        _objc_retainAutoreleasedReturnValue();
        local_50 = IVar1;
        if (IVar1 == 0) {
          IVar1 = local_30;
          FUN_0039e3b0(local_30,local_48);
          _objc_retainAutoreleasedReturnValue();
          IVar2 = IVar1;
          FUN_003a680c();
          _objc_retainAutoreleasedReturnValue();
          local_18 = IVar2;
          (*(code *)PTR__objc_release_02578630)(IVar1);
        }
        else {
          IVar2 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_20,PTR_s_wcrGrouping_logicGetCellDataAtIn_026a2988,IVar1);
          _objc_retainAutoreleasedReturnValue();
          local_18 = IVar2;
        }
        local_34 = 1;
        _objc_storeStrong(&local_50,0);
      }
      _objc_storeStrong(&local_48);
      _objc_storeStrong(&local_40,0);
      if (local_34 != 0) goto LAB_003a67f0;
    }
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_wcrGrouping_logicGetCellDataAtIn_026a2988,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_34 = 1;
    local_18 = IVar1;
  }
  else {
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_wcrGrouping_logicGetCellDataAtIn_026a2988,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_34 = 1;
    local_18 = IVar1;
  }
LAB_003a67f0:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

