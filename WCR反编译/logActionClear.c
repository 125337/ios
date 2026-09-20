// logActionClear @ 00928b4c

/* Function Stack Size: 0x10 bytes */

void WCRefineCrashMonitorViewController::logActionClear(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  ID local_d8;
  ID local_b8;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined *local_68;
  ID local_60;
  undefined4 local_54;
  undefined *local_50;
  byte local_41;
  ID local_40;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  puVar1 = PTR_WCRefineHelper_026ce000;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  _WCRefineCrashReporterLogDirectory();
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_28;
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_filteredCrashFileNames_026aa688);
  _objc_retainAutoreleasedReturnValue();
  local_b8 = IVar2;
  if (IVar2 == 0) {
    local_b8 = *(ID *)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_b8;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  local_41 = 0;
  IVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0);
  if (IVar2 == 0) {
    puVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_stringByAppendingPathComponent__026cab30,&cf_latest_log);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    local_50 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_41 = (byte)puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_50,0);
  }
  IVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0);
  if ((IVar2 == 0) && ((local_41 & 1) == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_feSnzzv__ne_);
    local_54 = 1;
  }
  else {
    IVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0);
    if (IVar2 == 0) {
      local_d8 = 1;
    }
    else {
      local_d8 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0);
    }
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_60 = local_d8;
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentRangeTitle_026aa680);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringWithFormat__0269cca8,&cf__nzz0_);
    _objc_retainAutoreleasedReturnValue();
    local_68 = puVar1;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    _objc_initWeak(auStack_70,local_28);
    puVar3 = local_68;
    puVar1 = PTR_WCRefineHelper_026ce000;
    local_98 = PTR___NSConcreteStackBlock_02578660;
    local_90 = 0xc2000000;
    local_8c = 0;
    local_88 = FUN_00928f38;
    local_80 = &DAT_025810b0;
    _objc_copyWeak(auStack_78,auStack_70);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_showAlertWithTitle_message_destr_0269f868,&cf_nzz__ne_,puVar3,&cf_nzz,
               &local_98,&cf_Sm,0);
    _objc_unsafeClaimAutoreleasedReturnValue(puVar1);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_70);
    _objc_storeStrong(&local_68,0);
    local_54 = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

