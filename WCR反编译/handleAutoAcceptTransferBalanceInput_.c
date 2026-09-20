// handleAutoAcceptTransferBalanceInput: @ 01a65178

/* Function Stack Size: 0x18 bytes */

void WCRefineGeneralFunctionViewController::handleAutoAcceptTransferBalanceInput_
               (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_50;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
  _objc_retainAutoreleasedReturnValue();
  local_50 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_50 = &::cf___;
  }
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = local_50;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&::cf__);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_30;
  local_30 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&::cf__,&::cf___);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_30;
  local_30 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf_CQ,&::cf___);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_30;
  local_30 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,&::cf___);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_30;
  local_30 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (pcVar1 != (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_doubleValue_026ca608);
  }
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

