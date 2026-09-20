// showPaymentLinkLedgerPromptWithTitle:message: @ 00fa2b24

/* Function Stack Size: 0x20 bytes */

ID WCRefineHelper::showPaymentLinkLedgerPromptWithTitle_message_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  cfstringStruct *local_60;
  cfstringStruct *local_48;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_4);
  IVar2 = local_18;
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_48 = &cf_6e>kc;
  }
  else {
    local_48 = local_28;
  }
  if (local_30 == (cfstringStruct *)0x0) {
    local_60 = &::cf___;
  }
  else {
    local_60 = local_30;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_showAlertWithTitle_message_btnTi_0269d8f0,local_48,local_60,&cf_Sm,0,
             &cf_MRS,&PTR___NSConcreteGlobalBlock_02583880);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return IVar2;
}

