// wcrGrouping_tableView:estimatedHeightForFooterInSection: @ 0039c508

/* Function Stack Size: 0x20 bytes */

double __thiscall
WCRefineHomeSessionGroupingHook::wcrGrouping_tableView_estimatedHeightForFooterInSection_
          (WCRefineHomeSessionGroupingHook *this,ID param_1,SEL param_2,ID param_3,long_long param_4
          )

{
  undefined *puVar1;
  bool bVar2;
  ID IVar3;
  ID IVar4;
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
  bVar2 = false;
  if ((param_4 & 1) == 0) {
    IVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_wcrGrouping_active_026a2a40);
    IVar4 = local_30;
    bVar2 = false;
    if ((IVar3 & 1) != 0) {
      IVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_wcrGrouping_findMainTableView_026a2848);
      _objc_retainAutoreleasedReturnValue();
      local_41 = 1;
      bVar2 = IVar4 == IVar3;
      local_40 = IVar3;
    }
  }
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if (bVar2) {
    IVar4 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_wcrGrouping_snapshotForTableView_026a2a50,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_50 = IVar4;
    FUN_0039bc40(IVar4,local_30,local_20,local_38);
    bVar2 = (IVar4 & 1) != 0;
    if (bVar2) {
      FUN_0039bee0();
      local_18 = in_d0;
    }
    _objc_storeStrong(&local_50,0);
    if (bVar2) goto LAB_0039c700;
  }
  puVar1 = PTR_s_wcrGrouping_tableView_estimatedH_026a2900;
  IVar4 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,
             PTR_s_wcrGrouping_tableView_estimatedH_026a2900);
  if ((IVar4 & 1) == 0) {
    FUN_0039c184(local_30);
    local_18 = in_d0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,puVar1,local_30,local_38);
    local_18 = in_d0;
  }
LAB_0039c700:
  _objc_storeStrong(&local_30,0);
  return local_18;
}

