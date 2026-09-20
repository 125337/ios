// wcrGrouping_reloadSessions @ 0037f618

/* WARNING: Removing unreachable block (ram,0x0037fb6c) */
/* WARNING: Removing unreachable block (ram,0x0037fb4c) */
/* Function Stack Size: 0x10 bytes */

void __thiscall
WCRefineHomeSessionGroupingHook::wcrGrouping_reloadSessions
          (WCRefineHomeSessionGroupingHook *this,ID param_1,SEL param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  byte bVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  undefined *puVar8;
  double in_d0;
  double dVar9;
  uint local_58;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcrGrouping_active_026a2a40);
  if ((param_1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcrGrouping_reloadSessions_026a2a08);
  }
  else {
    IVar4 = local_28;
    _WCRGroupingState();
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_38 = IVar5;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    IVar4 = local_28;
    _WCRGroupingState();
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar6 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    IVar4 = local_28;
    _WCRGroupingState();
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    dVar9 = in_d0;
    _CACurrentMediaTime();
    bVar1 = in_d0 <= dVar9;
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    IVar4 = local_28;
    _WCRGroupingState();
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    dVar9 = in_d0;
    _CACurrentMediaTime();
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    IVar4 = local_28;
    _WCRGroupingState();
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar7 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcrGrouping_findMainTableView_026a2848);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    FUN_00364dd0();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    bVar3 = (byte)IVar5;
    FUN_0037fc28();
    local_58 = 1;
    if (((((bVar3 & 1) == 0) && (local_58 = 1, in_d0 <= dVar9)) && (local_58 = 1, (IVar7 & 1) == 0))
       && (local_58 = 1, (IVar5 & 1) == 0)) {
      local_58 = (uint)IVar6 & 0xff;
    }
    IVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_boolValue_026ca540);
    if ((((IVar4 & 1) == 0) && ((IVar6 & 1) == 0)) && ((bVar1 && ((local_58 & 1) == 0)))) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_wcrGrouping_scheduleRefreshForTr_026a28a0,&cf_reloadSessions);
    }
    FUN_00364ea4(local_28);
    if ((local_58 & 1) == 0) {
      puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = local_28;
      _WCRGroupingState();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar4);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcrGrouping_reloadSessions_026a2a08);
      IVar4 = local_28;
      _WCRGroupingState();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar4);
    }
    else {
      pcVar2 = &cf_reloadSessions_scrolling;
      if ((IVar5 & 1) == 0) {
        pcVar2 = &cf_reloadSessions;
      }
      FUN_0037fccc(local_28,pcVar2);
    }
    _objc_storeStrong(&local_38,0);
  }
  return;
}

