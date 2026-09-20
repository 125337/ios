// wcrGrouping_viewDidAppear: @ 0037f104

/* Function Stack Size: 0x14 bytes */

void WCRefineHomeSessionGroupingHook::wcrGrouping_viewDidAppear_
               (ID param_1,SEL param_2,bool param_3)

{
  undefined1 uVar1;
  bool bVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  uint local_cc;
  ID local_b8;
  ID local_68;
  ID local_58;
  ID local_50;
  byte local_42;
  undefined1 local_41;
  ID local_40;
  byte local_31;
  ID local_30;
  byte local_24;
  byte local_23;
  byte local_22;
  byte local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (byte)param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcrGrouping_active_026a2a40);
  local_22 = (byte)param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_wcrGrouping_viewDidAppear__026a29c0,local_21 & 1);
  _objc_storeWeak(&DAT_028ca0d0,local_18);
  FUN_00375c6c();
  IVar4 = local_18;
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcrGrouping_findMainTableView_026a2848);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_wcrGrouping_installEdgePanObserv_026a2a68);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  FUN_0037c2b0(local_18);
  if ((local_22 & 1) != 0) {
    IVar4 = local_18;
    _WCRGroupingState();
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = IVar3 != 0;
    (*(code *)PTR__objc_release_02578630)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    local_31 = 0;
    local_41 = 0;
    bVar2 = false;
    local_23 = uVar1;
    if ((bool)uVar1) {
      IVar4 = local_18;
      _WCRGroupingState();
      _objc_retainAutoreleasedReturnValue();
      local_31 = 1;
      local_30 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      bVar2 = IVar4 == 0;
      local_41 = uVar1;
      local_40 = IVar4;
      (*(code *)PTR__objc_release_02578630)(IVar4);
      uVar1 = local_41;
    }
    local_41 = uVar1;
    if ((local_31 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_30);
    }
    IVar4 = local_18;
    local_24 = bVar2;
    _WCRGroupingState();
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    local_42 = (byte)IVar5;
    bVar2 = (local_23 & 1) == 0;
    if (bVar2) {
      local_b8 = 0;
    }
    else {
      local_58 = local_18;
      _WCRGroupingState();
      _objc_retainAutoreleasedReturnValue();
      local_b8 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_68 = local_b8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_b8;
    if (!bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_68);
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    local_cc = 0;
    if (local_50 != 0) {
      IVar4 = local_50;
      FUN_00357d1c();
      local_cc = (uint)IVar4 ^ 1;
    }
    if (((((local_24 & 1) != 0) || ((local_42 & 1) != 0)) || ((local_23 & 1) == 0)) ||
       ((local_cc & 1) != 0)) {
      if ((local_42 & 1) != 0) {
        IVar4 = local_18;
        _WCRGroupingState();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar4);
      }
      if ((local_cc & 1) != 0) {
        FUN_00373608(local_18);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_wcrGrouping_scheduleRefreshForTr_026a28a0,&cf_viewDidAppear);
    }
    IVar4 = local_18;
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcrGrouping_findMainTableView_026a2848);
    _objc_retainAutoreleasedReturnValue();
    FUN_0037e098(IVar4);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    _objc_storeStrong(&local_50,0);
  }
  return;
}

