// wcrGrouping_viewWillAppear: @ 0037ec50

/* Function Stack Size: 0x14 bytes */

void __thiscall
WCRefineHomeSessionGroupingHook::wcrGrouping_viewWillAppear_
          (WCRefineHomeSessionGroupingHook *this,ID param_1,SEL param_2,bool param_3)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  double in_d0;
  uint local_94;
  uint local_7c;
  ID local_68;
  ID local_60;
  undefined4 local_58;
  byte local_51;
  ID local_50;
  byte local_41;
  ID local_40;
  byte local_31;
  ID local_30;
  byte local_22;
  byte local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (byte)param_3;
  local_20 = param_2;
  local_18 = param_1;
  _WCRefineHomeGroupingReloadGateCache();
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcrGrouping_active_026a2a40);
  local_22 = (byte)IVar1;
  IVar1 = local_18;
  _WCRGroupingState();
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_snapshot_026a25c0);
  _objc_retainAutoreleasedReturnValue();
  local_41 = 0;
  local_51 = 0;
  if (IVar1 != 0) {
    IVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_snapshotTime_026a27c0);
    _objc_retainAutoreleasedReturnValue();
    local_41 = 1;
    local_7c = 1;
    local_40 = IVar2;
    if (IVar2 == 0) goto LAB_0037ed90;
  }
  IVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_deferredNativeReload_026a2ae0);
  _objc_retainAutoreleasedReturnValue();
  local_51 = 1;
  local_50 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_7c = (uint)IVar2;
LAB_0037ed90:
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  (*(code *)PTR__objc_release_02578630)(IVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_31 = (byte)local_7c & 1;
  if (((local_22 & 1) != 0) && ((local_7c & 1) != 0)) {
    _CACurrentMediaTime();
    (*(code *)PTR__objc_msgSend_02578628)(in_d0 + 1.2,puVar3,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setHomeReturnCoalescingUntil__026a2b18);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_wcrGrouping_viewWillAppear__026a29c8,local_21 & 1);
  IVar1 = local_18;
  FUN_0037f038();
  if (((IVar1 & 1) == 0) || ((local_22 & 1) == 0)) {
    local_58 = 1;
  }
  else {
    IVar1 = local_18;
    _WCRGroupingState();
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_60 = IVar2;
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_18;
    _WCRGroupingState();
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_68 = IVar2;
    (*(code *)PTR__objc_release_02578630)(IVar1);
    local_94 = 0;
    if (local_60 != 0) {
      IVar1 = local_60;
      FUN_00357d1c();
      local_94 = (uint)IVar1 ^ 1;
    }
    if (((local_60 == 0) || (local_68 == 0)) || ((local_94 & 1) != 0)) {
      if ((local_94 & 1) == 0) {
        FUN_003736ec(local_18);
      }
      else {
        FUN_00373608(local_18);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_wcrGrouping_scheduleRefreshForTr_026a28a0,&cf_viewWillAppear);
    }
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
    local_58 = 0;
  }
  _objc_storeStrong(&local_30,0);
  return;
}

