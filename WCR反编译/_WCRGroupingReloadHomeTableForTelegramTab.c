// _WCRGroupingReloadHomeTableForTelegramTab @ 00370d8c

/* WARNING: Removing unreachable block (ram,0x00370fd4) */

byte _WCRGroupingReloadHomeTableForTelegramTab(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long local_98 [3];
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  long local_60;
  byte local_51;
  long local_50;
  long local_48;
  long local_40;
  undefined4 local_34;
  long local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  if (local_30 == 0) {
    local_21 = 0;
    local_34 = 1;
  }
  else {
    lVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_wcrGrouping_findMainTableView_026a2848);
    _objc_retainAutoreleasedReturnValue();
    local_40 = lVar2;
    if (lVar2 == 0) {
      local_21 = 0;
      local_34 = 1;
    }
    else {
      lVar2 = local_30;
      _WCRGroupingState();
      _objc_retainAutoreleasedReturnValue();
      local_48 = lVar2;
      _WCRefineCrashReporterBreadcrumb(&cf_tg_tab_tablestrategy_reloadData);
      lVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_tableReloadInProgress_026a2850);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_50 = lVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setTableReloadInProgress__026a2858);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      lVar2 = local_40;
      puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
      local_51 = 0;
      local_80 = PTR___NSConcreteGlobalBlock_02578658;
      local_78 = 0xd0800000;
      local_74 = 0;
      local_70 = FUN_00371288;
      local_68 = &DAT_0257a9d0;
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = lVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_performWithoutAnimation__0269e7e0,&local_80);
      _objc_storeStrong(&local_60,0);
      local_34 = 0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_setTableReloadInProgress__026a2858,local_50);
      if ((local_51 & 1) != 0) {
        _objc_exception_rethrow();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x370fc4);
        (*pcVar1)();
      }
      local_34 = 0;
      lVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_snapshot_026a25c0);
      _objc_retainAutoreleasedReturnValue();
      local_98[0] = lVar2;
      FUN_003712c8();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_setAppliedPinnedSessionSignature_026a2860);
      (*(code *)PTR__objc_release_02578630)(lVar2);
      lVar2 = local_98[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_98[0],PTR_s_layoutSignature_026a2868);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar2);
      if (lVar4 != 0) {
        lVar2 = local_98[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_98[0],PTR_s_layoutSignature_026a2868);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setAppliedLayoutSignature__026a2870);
        (*(code *)PTR__objc_release_02578630)(lVar2);
      }
      lVar2 = local_98[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_98[0],PTR_s_displaySignature_026a2878);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar2);
      if (lVar4 != 0) {
        lVar2 = local_98[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_98[0],PTR_s_displaySignature_026a2878);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setAppliedDisplaySignature__026a2880);
        (*(code *)PTR__objc_release_02578630)(lVar2);
      }
      local_21 = 1;
      local_34 = 1;
      _objc_storeStrong(local_98);
      _objc_storeStrong(&local_50,0);
      _objc_storeStrong(&local_48,0);
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

