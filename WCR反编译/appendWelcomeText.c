// appendWelcomeText @ 018abab8

/* Function Stack Size: 0x10 bytes */

void WCRefineChatRoomFunctionViewController::appendWelcomeText(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined1 auStack_40 [8];
  undefined *local_38;
  undefined1 auStack_30 [8];
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar3 = PTR_WCRefineHelper_026ce000;
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_autoReplyNormalizedMultiItems__0269efa0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_initWeak(auStack_30,local_18);
  puVar1 = local_28;
  puVar3 = PTR_WCRefineHelper_026ce000;
  local_68 = PTR___NSConcreteStackBlock_02578660;
  local_60 = 0xc2000000;
  local_5c = 0;
  local_58 = FUN_018abd38;
  local_50 = &DAT_025891e8;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = puVar1;
  _objc_copyWeak(auStack_40,auStack_30);
  (*(code *)PTR__objc_msgSend_02578628)
            (0,puVar3,PTR_s_presentPageSheetMultilineInputWi_026ab118,&cf_R_ke_g,&cf_tek_O_N,
             &cf_eQ_ke_g_,&::cf___,&local_68);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_elSb);
  }
  _objc_storeStrong(&local_38);
  _objc_destroyWeak(auStack_40);
  _objc_storeStrong(&local_48,0);
  _objc_destroyWeak(auStack_30);
  _objc_storeStrong(&local_28,0);
  return;
}

