// wcr_applyTitle @ 01d8b428

/* Function Stack Size: 0x10 bytes */

void WCRefineSessionStatsActivityViewController::wcr_applyTitle(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *local_68;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  cfstringStruct *local_18;
  
  local_20 = param_2;
  local_18 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_navigationItem_0269cf08);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  pcVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_displayName_026ac378);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_68 = &cf___m;
  }
  else {
    local_68 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_displayName_026ac378);
    _objc_retainAutoreleasedReturnValue();
    local_30 = local_68;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_68;
  if (pcVar2 != (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_result_026c4d20);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (pcVar1 == (cfstringStruct *)0x0) {
    pcVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_allRows_026c4d70);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar3);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  if (pcVar1 == (cfstringStruct *)0x0) {
    pcVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationItem_0269cf08);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_____lu_);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationItem_0269cf08);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

