// FUN_0037c2b0 @ 0037c2b0

/* WARNING: Removing unreachable block (ram,0x0037cc40) */

void FUN_0037c2b0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong local_88 [3];
  undefined *local_70;
  byte local_61;
  undefined8 local_60;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  undefined *local_40;
  ulong local_38;
  byte local_2d;
  undefined4 local_2c;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if (local_28 == 0) {
    local_2c = 1;
  }
  else {
    uVar2 = local_28;
    _WCRGroupingState();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_2d = (byte)uVar4;
    uVar2 = local_28;
    _WCRGroupingState();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if ((local_2d & 1) == 0) {
      local_2c = 1;
    }
    else {
      uVar2 = local_28;
      _WCRGroupingState();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_28;
      _WCRGroupingState();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_28;
      _WCRGroupingState();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      _WCRTGFlushDeferredSessionFilter();
      FUN_003736ec(local_28);
      local_38 = 0;
      local_40 = PTR_s_wcrGrouping_findMainTableView_026a2848;
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_respondsToSelector__026ca818,
                 PTR_s_wcrGrouping_findMainTableView_026a2848);
      if ((uVar2 & 1) != 0) {
        uVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,local_40);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_38;
        local_38 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      uVar2 = local_28;
      _WCRGroupingState();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_48 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_28;
      _WCRGroupingState();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_50 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_28;
      _WCRGroupingState();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_58 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_28;
      _WCRGroupingState();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_28;
      _WCRGroupingState();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      _CACurrentMediaTime();
      local_61 = 0;
      local_60 = param_1;
      if (local_38 != 0) {
        local_70 = PTR_s_wcrGrouping_snapshotForTableView_026a2a50;
        uVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_respondsToSelector__026ca818,
                   PTR_s_wcrGrouping_snapshotForTableView_026a2a50);
        if ((uVar2 & 1) != 0) {
          uVar2 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,local_70,local_38);
          _objc_unsafeClaimAutoreleasedReturnValue(uVar2);
        }
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_28;
        _WCRGroupingState();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar2);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        _WCRefineCrashReporterBreadcrumb
                  (&cf_home_reloadbegintrigger_flushDeferredstrategy_reloadData);
        FUN_0037d3b4(local_28,local_38);
        uVar2 = local_28;
        _WCRGroupingState();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_88[0] = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar2);
        if ((local_88[0] != 0) &&
           (uVar2 = local_88[0],
           (*(code *)PTR__objc_msgSend_02578628)(local_88[0],PTR_s_budgetFallback_026a25d8),
           (uVar2 & 1) == 0)) {
          uVar2 = local_88[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_88[0],PTR_s_displaySignature_026a2878);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = local_28;
          _WCRGroupingState();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar3);
          (*(code *)PTR__objc_release_02578630)(uVar2);
          uVar2 = local_88[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_88[0],PTR_s_layoutSignature_026a2868);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = local_28;
          _WCRGroupingState();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar3);
          (*(code *)PTR__objc_release_02578630)(uVar2);
          uVar2 = local_88[0];
          FUN_003712c8();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = local_28;
          _WCRGroupingState();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar3);
          (*(code *)PTR__objc_release_02578630)(uVar2);
        }
        _objc_storeStrong(local_88,0);
      }
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_28;
      _WCRGroupingState();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcrGrouping_reloadSessions_026a2a08);
      local_2c = 0;
      uVar2 = local_28;
      _WCRGroupingState();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_28;
      _WCRGroupingState();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_28;
      _WCRGroupingState();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      if ((local_61 & 1) != 0) {
        _objc_exception_rethrow();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x37cc30);
        (*pcVar1)();
      }
      local_2c = 0;
      _CACurrentMediaTime();
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_28;
      _WCRGroupingState();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      uVar2 = local_28;
      _WCRGroupingState();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_numberWithUnsignedInteger__0269e4d0,uVar4 + 1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_28;
      _WCRGroupingState();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar4);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_release_02578630)(uVar2);
      puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
      _CACurrentMediaTime();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_stringWithFormat__0269cca8,&cf_home_reloadendcost___1fms);
      _objc_retainAutoreleasedReturnValue();
      _WCRefineCrashReporterBreadcrumb();
      (*(code *)PTR__objc_release_02578630)(puVar5);
      _objc_storeStrong(&local_58);
      _objc_storeStrong(&local_50,0);
      _objc_storeStrong(&local_48,0);
      _objc_storeStrong(&local_38,0);
      local_2c = 0;
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

