// handleSystemVersionInput: @ 01f52d30

/* Function Stack Size: 0x18 bytes */

void WCRefineVersionController::handleSystemVersionInput_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined *puVar2;
  ID IVar3;
  long local_38;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  local_30 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  lVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    _objc_storeStrong(&local_38,&cf_18_3);
  }
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_isValidSystemVersionFormat__026c9370,local_38);
  if ((IVar3 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,
               &cf_Hr_g<h_,&cf_eQcknxvHr_g<h_Y:,&cf_wSN,0);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_isSystemVersionInValidRange__026c9378,local_38);
    if ((IVar3 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,
                 &cf_Hr_gV,&cf___Hr_g___W1,&cf_wSN,0);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    else {
      puVar2 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_showRestartAlertIfNeeded_026c9140);
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

