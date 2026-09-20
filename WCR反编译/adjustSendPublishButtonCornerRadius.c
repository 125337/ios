// adjustSendPublishButtonCornerRadius @ 019373f4

/* Function Stack Size: 0x10 bytes */

void WCRefineCornerViewController::adjustSendPublishButtonCornerRadius(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  char *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  pcVar3 = "WCUIAlertView";
  local_28 = puVar2;
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_30 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_showTextFieldWithMaxLen__0269e5e0,10);
  pcVar3 = local_30;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__ld);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_setTextFieldDefaultText__0269fd98);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
             PTR_s_handleSendPublishButtonCornerRad_026b9458);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_show_0269d280);
  _objc_storeStrong(&local_30,0);
  return;
}

