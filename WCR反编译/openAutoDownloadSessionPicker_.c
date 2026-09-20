// openAutoDownloadSessionPicker: @ 01a576c0

/* Function Stack Size: 0x18 bytes */

void WCRefineGeneralFunctionViewController::openAutoDownloadSessionPicker_
               (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  ID IVar5;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  cfstringStruct *local_98;
  undefined4 local_8c;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [8];
  cfstringStruct *local_48;
  undefined1 *local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_autoDownloadPrivateChatDefaultEn_0269d990);
  if (((ulong)puVar3 & 1) == 0) {
    puVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_autoDownloadSessionRule_0269d998);
    local_98 = &cf_bc_O;
    if (puVar4 != (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
      local_98 = &cf_bcdO;
    }
    (*(code *)PTR__objc_retain_02578638)();
    _objc_initWeak(auStack_a0,local_28);
    IVar2 = local_28;
    pcVar1 = local_98;
    puVar3 = PTR_WCRefineSessionPicker_026ce350;
    IVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_autoDownloadSelectedSessions_0269d950);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = PTR___NSConcreteStackBlock_02578660;
    local_c0 = 0xc2000000;
    local_bc = 0;
    local_b8 = FUN_01a57f8c;
    local_b0 = &DAT_0257a7d0;
    _objc_copyWeak(auStack_a8,auStack_a0);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_presentFromViewController_title__0269f880,IVar2,pcVar1,IVar5,&local_c8);
    (*(code *)PTR__objc_release_02578630)(IVar5);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_a0);
    _objc_storeStrong(&local_98,0);
    local_8c = 0;
  }
  else {
    puVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_autoDownloadSessionRule_0269d998);
    local_48 = &cf_bc__J;
    if (puVar4 != (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
      local_48 = &cf_bcd_J;
    }
    (*(code *)PTR__objc_retain_02578638)();
    _objc_initWeak(auStack_50,local_28);
    IVar2 = local_28;
    pcVar1 = local_48;
    puVar3 = PTR_WCRefineChatRoomPicker_026cef60;
    IVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_autoDownloadSelectedSessions_0269d950);
    _objc_retainAutoreleasedReturnValue();
    local_88 = PTR___NSConcreteStackBlock_02578660;
    local_80 = 0xc2000000;
    local_7c = 0;
    local_78 = FUN_01a57a88;
    local_70 = &DAT_0257a7d0;
    _objc_copyWeak(auStack_68,auStack_50);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_presentFromViewController_title__026ab898,IVar2,pcVar1,IVar5,&local_88);
    (*(code *)PTR__objc_release_02578630)(IVar5);
    local_8c = 1;
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_50);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

