// wcrGrouping_logicGetSessionAtIndexPath: @ 003a5ea0

/* Function Stack Size: 0x18 bytes */

ID WCRefineHomeSessionGroupingHook::wcrGrouping_logicGetSessionAtIndexPath_
             (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
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
                        (IVar1,PTR_s_wcrGrouping_logicGetSessionAtInd_026a2980);
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
          (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_session_0269d000);
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
          FUN_003a6240();
          _objc_retainAutoreleasedReturnValue();
          local_18 = IVar2;
          (*(code *)PTR__objc_release_02578630)(IVar1);
        }
        else {
          IVar2 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_20,PTR_s_wcrGrouping_logicGetSessionAtInd_026a2980,IVar1);
          _objc_retainAutoreleasedReturnValue();
          local_18 = IVar2;
        }
        local_34 = 1;
        _objc_storeStrong(&local_50,0);
      }
      _objc_storeStrong(&local_48);
      _objc_storeStrong(&local_40,0);
      if (local_34 != 0) goto LAB_003a6224;
    }
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_wcrGrouping_logicGetSessionAtInd_026a2980,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_34 = 1;
    local_18 = IVar1;
  }
  else {
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_wcrGrouping_logicGetSessionAtInd_026a2980,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_34 = 1;
    local_18 = IVar1;
  }
LAB_003a6224:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

