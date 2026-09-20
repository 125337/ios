// showOtherReceiptSettings: @ 018bf350

/* Function Stack Size: 0x18 bytes */

void WCRefineChatTimeViewController::showOtherReceiptSettings_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_48;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_48 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_48 = &::cf__;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_showReceiptInputAlertForKey_titl_026b7d50,&cf_chatTimeOtherReceipt,
             &cf_n__eVgb,&cf_eQ_eVgb>f_yeW_Y_0_I_,local_48);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  _objc_storeStrong(&local_28,0);
  return;
}

