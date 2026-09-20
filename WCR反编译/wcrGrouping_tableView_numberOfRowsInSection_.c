// wcrGrouping_tableView:numberOfRowsInSection: @ 0039ae40

/* Function Stack Size: 0x20 bytes */

long_long WCRefineHomeSessionGroupingHook::wcrGrouping_tableView_numberOfRowsInSection_
                    (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  undefined1 uVar1;
  long_long lVar2;
  bool bVar3;
  ID IVar4;
  ID IVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  ID IVar8;
  cfstringStruct *local_b0;
  ID local_50;
  undefined1 local_41;
  ID local_40;
  long_long local_38;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar4 = local_20;
  local_38 = param_4;
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
    lVar2 = local_38;
    local_50 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_targetSection_026a2d68);
    if (lVar2 - IVar5 == 0) {
      IVar5 = local_50;
      FUN_0039b250();
      pcVar6 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      pcVar7 = pcVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_b0 = pcVar7;
      if (pcVar7 == (cfstringStruct *)0x0) {
        local_b0 = &::cf___;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_hash_0269ec90);
      (*(code *)PTR__objc_release_02578630)(pcVar7);
      (*(code *)PTR__objc_release_02578630)(pcVar6);
      if (((IVar5 != DAT_026e0268) || (DAT_028ca100 != local_50)) || (local_b0 != DAT_028ca108)) {
        DAT_028ca100 = local_50;
        IVar4 = local_50;
        DAT_026e0268 = IVar5;
        DAT_028ca108 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_entries_026a25d0);
        _objc_retainAutoreleasedReturnValue();
        IVar8 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (IVar8 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_budgetFallback_026a25d8);
        }
        (*(code *)PTR__objc_release_02578630)(IVar4);
      }
      bVar3 = true;
      local_18 = IVar5;
    }
    else {
      IVar4 = local_50;
      FUN_0039b3c0(lVar2 - IVar5,local_50,local_38);
      if ((IVar4 & 1) == 0) {
        bVar3 = false;
      }
      else {
        IVar5 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_wcrGrouping_tableView_numberOfRo_026a28c8,local_30,local_38);
        FUN_0039b464(IVar5,local_50,local_38);
        bVar3 = true;
        local_18 = IVar5;
      }
    }
    _objc_storeStrong(&local_50,0);
    if (bVar3) goto LAB_0039b234;
  }
  IVar5 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_wcrGrouping_tableView_numberOfRo_026a28c8,local_30,local_38);
  local_18 = IVar5;
LAB_0039b234:
  _objc_storeStrong(&local_30,0);
  return local_18;
}

