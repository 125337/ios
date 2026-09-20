// showEarnedStatistics @ 01d28b30

/* Function Stack Size: 0x10 bytes */

void __thiscall
WCRefineRedEnvelopViewController::showEarnedStatistics
          (WCRefineRedEnvelopViewController *this,ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  double in_d0;
  cfstringStruct *local_30 [2];
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_30[0] = &::cf___;
  if (in_d0 <= 0.0) {
    local_30[0] = &::cf_N;
  }
  (*(code *)PTR__objc_retain_02578638)();
  puVar1 = PTR_WCRefineHelper_026ce000;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_qQ_N_b0R);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,&cf_m_yS_,puVar2,local_30[0]);
  _objc_unsafeClaimAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(local_30,0);
  return;
}

