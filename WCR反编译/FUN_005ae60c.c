// FUN_005ae60c @ 005ae60c

void FUN_005ae60c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong local_38;
  uint local_2c;
  long local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if (local_28 == 0) {
    local_2c = 1;
  }
  else {
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_WCRefine_findParentTableCell_026a5828);
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_respondsToSelector__026ca818,
               PTR_s_WCRefineShowFakeEngagementInputF_026a5030);
    bVar1 = (uVar2 & 1) == 0;
    if (bVar1) {
      _WCRefineApplyManualFakeEngagementToDataItem(local_28,0xffffffffffffffff);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_WCRefine_reloadTimeline_026a5830);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_WCRefineShowFakeEngagementInputF_026a5030,local_28);
    }
    local_2c = (uint)!bVar1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

