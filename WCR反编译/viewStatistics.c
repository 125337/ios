// viewStatistics @ 0174c77c

/* Function Stack Size: 0x10 bytes */

void ThemeBoxAutoRedeemViewController::viewStatistics(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_themeBoxTotalDetectedCount_026a84b0);
  puVar2 = local_28;
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_themeBoxTotalSuccessCount_026a8508);
  puVar1 = local_28;
  local_38 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_themeBoxTotalFriendRedeemCount_026a8518);
  puVar2 = local_28;
  local_40 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_themeBoxTotalInvalidCount_026b4190);
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_48 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_qQhKm0R);
  _objc_retainAutoreleasedReturnValue();
  local_50 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,&cf__Q_,
             puVar1,&cf_wSN);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_28,0);
  return;
}

