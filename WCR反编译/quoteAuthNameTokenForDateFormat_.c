// quoteAuthNameTokenForDateFormat: @ 00ead2f4

/* Function Stack Size: 0x18 bytes */

ID WCRefineAuthNameHelper::quoteAuthNameTokenForDateFormat_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_60;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((((ulong)pcVar2 & 1) == 0) ||
     (pcVar2 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     pcVar2 == (cfstringStruct *)0x0)) {
    if (local_30 == (cfstringStruct *)0x0) {
      local_60 = &::cf___;
    }
    else {
      local_60 = local_30;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_60;
  }
  else {
    pcVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_rangeOfString__0269d838,&::cf__);
    pcVar2 = local_30;
    if (pcVar3 == (cfstringStruct *)0x7fffffffffffffff) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar2;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&::cf__,&::cf__);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar2;
    }
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

