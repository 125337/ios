// verifyMiYouPasswordForToggle: @ 01a3201c

/* Function Stack Size: 0x14 bytes */

void WCRefineGeneralFunctionViewController::verifyMiYouPasswordForToggle_
               (ID param_1,SEL param_2,bool param_3)

{
  ID IVar1;
  undefined *puVar2;
  char *pcVar3;
  char *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  uint local_44;
  char *local_40;
  undefined *local_38;
  undefined *local_30;
  byte local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (byte)param_3;
  puVar2 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringForKey__026a33a0,&cf_MHidePasswordKey);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar2;
  if ((puVar2 == (undefined *)0x0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0),
     puVar2 == (undefined *)0x0)) {
    _objc_storeStrong(&local_38,&cf_0000);
  }
  pcVar3 = "WCUIAlertView";
  _objc_getClass();
  local_40 = pcVar3;
  if (pcVar3 == (char *)0x0) {
    local_44 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = &cf__S_x;
    local_58 = &cf__k;
    if ((local_21 & 1) == 0) {
      local_58 = &cf__k;
    }
    (*(code *)PTR__objc_retain_02578638)();
    pcVar3 = local_40;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_60 = pcVar3;
    if (pcVar3 != (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x14);
      _objc_setAssociatedObject(local_18,&DAT_028e4480,local_38);
      IVar1 = local_18;
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_21 & 1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(IVar1,&DAT_028e4481,puVar2,1);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
                 PTR_s_cancelMiYouPasswordVerify_026bc310);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
                 PTR_s_confirmMiYouPasswordVerify__026bc318);
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_show_0269d280);
    }
    local_44 = (uint)(pcVar3 == (char *)0x0);
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return;
}

