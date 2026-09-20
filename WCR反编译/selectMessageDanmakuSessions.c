// selectMessageDanmakuSessions @ 01a35f3c

/* Function Stack Size: 0x10 bytes */

void WCRefineGeneralFunctionViewController::selectMessageDanmakuSessions(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [8];
  cfstringStruct *local_30;
  undefined1 *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_messageDanmakuSessionRule_026a3758);
  local_30 = &cf_bc_O;
  if (puVar3 != (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
    local_30 = &cf_bcdO;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_initWeak(auStack_38,local_18);
  IVar2 = local_18;
  pcVar1 = local_30;
  puVar3 = PTR_WCRefineSessionPicker_026ce350;
  puVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_messageDanmakuSelectedSessions_026a3750);
  _objc_retainAutoreleasedReturnValue();
  local_70 = PTR___NSConcreteStackBlock_02578660;
  local_68 = 0xc2000000;
  local_64 = 0;
  local_60 = FUN_01a36130;
  local_58 = &DAT_0257a7d0;
  _objc_copyWeak(auStack_50,auStack_38);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_presentFromViewController_title__0269f880,IVar2,pcVar1,puVar4,&local_70);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_38);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

