// wcrGrouping_tableView:viewForHeaderInSection: @ 0039c71c

/* Function Stack Size: 0x20 bytes */

ID __thiscall
WCRefineHomeSessionGroupingHook::wcrGrouping_tableView_viewForHeaderInSection_
          (WCRefineHomeSessionGroupingHook *this,ID param_1,SEL param_2,ID param_3,long_long param_4
          )

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  double in_d0;
  ID local_68;
  undefined *local_60;
  uint local_54;
  ID local_50;
  byte local_41;
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
    bVar1 = (IVar3 & 1) != 0;
    if (bVar1) {
      FUN_0039c9dc();
      _objc_retainAutoreleasedReturnValue();
      local_18 = IVar3;
    }
    local_54 = (uint)bVar1;
    _objc_storeStrong(&local_50,0);
    if (local_54 != 0) goto LAB_0039c9c0;
  }
  local_60 = PTR_s_wcrGrouping_tableView_viewForHea_026a2908;
  IVar3 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,
             PTR_s_wcrGrouping_tableView_viewForHea_026a2908);
  if ((IVar3 & 1) == 0) {
    local_18 = 0;
    local_54 = 1;
  }
  else {
    IVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,local_60,local_30,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_68 = IVar3;
    if ((local_38 == 0) && (_CFAbsoluteTimeGetCurrent(), DAT_02323d00 <= in_d0 - DAT_028ca118)) {
      DAT_028ca118 = in_d0;
    }
    IVar3 = local_68;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = IVar3;
    local_54 = 1;
    _objc_storeStrong(&local_68,0);
  }
LAB_0039c9c0:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

