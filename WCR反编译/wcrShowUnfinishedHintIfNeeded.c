// wcrShowUnfinishedHintIfNeeded @ 017b8aac

/* Function Stack Size: 0x10 bytes */

void WCRefineAIFeatureViewController::wcrShowUnfinishedHintIfNeeded(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_boolForKey__0269f3d8,&cf_WCRAIUnfinishedHintShownV1);
  if (((ulong)puVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_setBool_forKey__026a9618,1,&cf_WCRAIUnfinishedHintShownV1);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,&cf_N_zf,
               &cf_JSbTf_g_U0,&cf_wSN,0);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_storeStrong(&local_28,0);
  return;
}

