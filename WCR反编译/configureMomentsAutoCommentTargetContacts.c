// configureMomentsAutoCommentTargetContacts @ 01c0c2c8

/* Function Stack Size: 0x10 bytes */

void WCRefineMomentsViewController::configureMomentsAutoCommentTargetContacts
               (ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *local_a8;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_28 = &cf_bcd_u7b;
  if (puVar4 != (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
    local_28 = &cf_bc__u7b;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_a8 = puVar5;
  if (puVar5 == (undefined *)0x0) {
    local_a8 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_a8;
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_initWeak(auStack_38,local_18);
  IVar2 = local_18;
  pcVar1 = local_28;
  puVar3 = local_30;
  local_60 = PTR___NSConcreteStackBlock_02578660;
  local_58 = 0xc2000000;
  local_54 = 0;
  local_50 = FUN_01c0c524;
  local_48 = &DAT_0257a7d0;
  _objc_copyWeak(auStack_40,auStack_38);
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_wcr_showMomentsContactImportMenu_026c11c0,pcVar1,puVar3,&local_60);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

