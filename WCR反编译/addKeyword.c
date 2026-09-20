// addKeyword @ 01b1c718

/* Function Stack Size: 0x10 bytes */

void WCRefineKeywordAlertHistoryCardViewController::addKeyword(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  double in_d3;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  undefined1 auStack_68 [56];
  undefined *local_30;
  undefined1 auStack_28 [8];
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  _objc_initWeak(auStack_28,local_18);
  puVar2 = PTR_WCRefineHelper_026ce000;
  puVar1 = PTR__OBJC_CLASS___UIScreen_026cdf70;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  in_d3 = in_d3 * DAT_02323c98;
  local_88 = PTR___NSConcreteStackBlock_02578660;
  local_80 = 0xc2000000;
  local_7c = 0;
  local_78 = FUN_01b1c964;
  local_70 = &DAT_02589100;
  _objc_copyWeak(auStack_68,auStack_28);
  (*(code *)PTR__objc_msgSend_02578628)
            (in_d3,puVar2,PTR_s_presentPageSheetMultilineInputWi_026ab118,&cf_ybmRsQ_,&::cf___,
             &cf_nfeW_,&::cf___,&local_88);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (local_30 == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_mRsQ_b_gNS_u);
  }
  _objc_storeStrong(&local_30,0);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_28);
  return;
}

