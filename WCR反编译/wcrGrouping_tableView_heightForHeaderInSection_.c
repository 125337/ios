// wcrGrouping_tableView:heightForHeaderInSection: @ 0039b6e8

/* Function Stack Size: 0x20 bytes */

double __thiscall
WCRefineHomeSessionGroupingHook::wcrGrouping_tableView_heightForHeaderInSection_
          (WCRefineHomeSessionGroupingHook *this,ID param_1,SEL param_2,ID param_3,long_long param_4
          )

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  double in_d0;
  ID local_50;
  byte local_41;
  ID local_40;
  long_long local_38;
  ID local_30;
  SEL local_28;
  ID local_20;
  double local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = param_4;
  FUN_0039ba90();
  local_41 = 0;
  bVar1 = false;
  if ((param_4 & 1) == 0) {
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_wcrGrouping_active_026a2a40);
    IVar3 = local_30;
    bVar1 = false;
    if ((IVar2 & 1) != 0) {
      IVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_wcrGrouping_findMainTableView_026a2848);
      _objc_retainAutoreleasedReturnValue();
      local_41 = 1;
      bVar1 = IVar3 == IVar2;
      local_40 = IVar2;
    }
  }
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if (bVar1) {
    IVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_wcrGrouping_snapshotForTableView_026a2a50,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_50 = IVar3;
    FUN_0039bc40(IVar3,local_30,local_20,local_38);
    if ((IVar3 & 1) == 0) {
      puVar4 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      if (((ulong)puVar5 & 1) != 0) {
        IVar3 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_numberOfSectionsInTableView__026a2388,local_30);
        IVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_tableView_numberOfRowsInSection__0269e8d8,local_30,local_38);
        if (((-1 < (long)local_38) && ((long)local_38 < (long)IVar3)) && ((long)IVar2 < 1)) {
          FUN_0039bee0(IVar2);
          bVar1 = true;
          local_18 = in_d0;
          goto LAB_0039b984;
        }
      }
      bVar1 = false;
    }
    else {
      FUN_0039bee0();
      bVar1 = true;
      local_18 = in_d0;
    }
LAB_0039b984:
    _objc_storeStrong(&local_50,0);
    if (bVar1) goto LAB_0039ba74;
  }
  puVar4 = PTR_s_wcrGrouping_tableView_heightForH_026a28d0;
  IVar3 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,
             PTR_s_wcrGrouping_tableView_heightForH_026a28d0);
  if ((IVar3 & 1) == 0) {
    FUN_0039beec(local_30);
    local_18 = in_d0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,puVar4,local_30,local_38);
    local_18 = in_d0;
    if ((local_38 == 0) && (_CFAbsoluteTimeGetCurrent(), DAT_02323d00 <= in_d0 - DAT_028ca110)) {
      DAT_028ca110 = in_d0;
    }
  }
LAB_0039ba74:
  _objc_storeStrong(&local_30,0);
  return local_18;
}

