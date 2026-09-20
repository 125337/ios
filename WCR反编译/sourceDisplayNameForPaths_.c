// sourceDisplayNameForPaths: @ 019edb98

/* Function Stack Size: 0x18 bytes */

ID WCRefineFontConvertViewController::sourceDisplayNameForPaths_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_pQb;
  }
  else {
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
    local_18 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    if (pcVar1 == (cfstringStruct *)((long)&MACH_HEADER.magic + 1)) {
      pcVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_stringWithFormat__0269cca8,&::cf__);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

