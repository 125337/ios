// FUN_011037b4 @ 011037b4

cfstringStruct * FUN_011037b4(undefined8 param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_40;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_hasPrefix__0269d320,&cf_lp_custom_);
  local_40 = local_20;
  bVar1 = ((ulong)pcVar2 & 1) == 0;
  if (bVar1) {
    local_40 = &cf___;
  }
  else {
    pcVar2 = &cf_lp_custom_;
    (*(code *)PTR__objc_msgSend_02578628)(&cf_lp_custom_,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_substringFromIndex__0269d120,pcVar2);
    _objc_retainAutoreleasedReturnValue();
    local_30 = local_40;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_40;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_18 = (cfstringStruct *)PTR_s_WCRefine_onCustomLongPressMenuIt_026aecc8;
  }
  else {
    pcVar2 = &cf_WCRefine_onCustomLongPressMenuItem_;
    (*(code *)PTR__objc_msgSend_02578628)
              (&cf_WCRefine_onCustomLongPressMenuItem_,PTR_s_stringByAppendingFormat__026a2088,
               &cf____);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    _NSSelectorFromString();
    local_18 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_18;
}

