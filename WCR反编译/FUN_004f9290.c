// FUN_004f9290 @ 004f9290

void FUN_004f9290(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_40;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 == (cfstringStruct *)0x0) {
    local_40 = &cf___;
  }
  else {
    local_40 = local_18;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_20 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__r_n,&cf_newline_s_);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_20;
  local_20 = local_40;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__n,&cf_newline_s_);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_20;
  local_20 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__t,&cf_tab_s_);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_20;
  local_20 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_20;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(pcVar1);
  return;
}

