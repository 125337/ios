// handleBackGestureAnimationDurationInput: @ 01a50aa8

/* Function Stack Size: 0x18 bytes */

void WCRefineGeneralFunctionViewController::handleBackGestureAnimationDurationInput_
               (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  float fVar3;
  cfstringStruct *local_58;
  long local_40;
  undefined *local_38;
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
  local_58 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_58 = &::cf___;
  }
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = local_58;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  puVar2 = PTR__OBJC_CLASS___NSScanner_026ce368;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSScanner_026ce368,PTR_s_scannerWithString__0269fa30,local_30);
  _objc_retainAutoreleasedReturnValue();
  local_40 = 0;
  pcVar1 = local_30;
  local_38 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if ((((pcVar1 == (cfstringStruct *)0x0) ||
       (puVar2 = local_38,
       (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_scanInteger__026a4fc8,&local_40),
       ((ulong)puVar2 & 1) == 0)) ||
      (puVar2 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isAtEnd_026ab608),
      ((ulong)puVar2 & 1) == 0)) || ((local_40 < 100 || (800 < local_40)))) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_eQ);
  }
  else {
    fVar3 = (float)local_40;
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)((double)(fVar3 / 1000.0));
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

