// handleTimeoutInput: @ 01a347cc

/* Function Stack Size: 0x18 bytes */

void WCRefineGeneralFunctionViewController::handleTimeoutInput_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 in_x6;
  undefined8 in_x7;
  long local_38;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_38 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
  _objc_retainAutoreleasedReturnValue();
  local_30 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_integerValue_026ca750);
  if (local_38 < 5) {
    local_38 = 5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,
               &cf_WCRefine,&::cf___,&cf_wSN,&PTR___NSConcreteGlobalBlock_0258adb0);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else if (0x3c < local_38) {
    local_38 = 0x3c;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,
               &cf_WCRefine,&::cf___,&cf_wSN,&PTR___NSConcreteGlobalBlock_0258add0);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  puVar1 = PTR_WCRefineHelper_026ce000;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_Obe_n__N_);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,&cf_WCRefine,puVar2,&cf_nx_,
             &PTR___NSConcreteGlobalBlock_0258adf0,in_x6,in_x7,local_38);
  _objc_unsafeClaimAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

