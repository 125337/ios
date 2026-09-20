// showMsgBannerAddYuanbaoThenPreviewPrompt @ 01b92240

/* Function Stack Size: 0x10 bytes */

void WCRefineMessageBannerBeautifyViewController::showMsgBannerAddYuanbaoThenPreviewPrompt
               (ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  _objc_initWeak(auStack_28,param_1);
  puVar1 = PTR_WCRefineHelper_026ce000;
  local_50 = PTR___NSConcreteStackBlock_02578660;
  local_48 = 0xc2000000;
  local_44 = 0;
  local_40 = FUN_01b92354;
  local_38 = &DAT_025810b0;
  _objc_copyWeak(auStack_30,auStack_28);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_showAlertWithTitle_message_btnTi_0269d8f0,&cf_WCRefine,
             &cf___gmRCQ__YS0mRTsSSSKmmo__jE_Heg0,&cf_Sm,0,&cf_mR,&local_50);
  _objc_unsafeClaimAutoreleasedReturnValue(puVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}

