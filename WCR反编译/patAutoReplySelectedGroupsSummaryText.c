// patAutoReplySelectedGroupsSummaryText @ 01a1bad0

/* Function Stack Size: 0x10 bytes */

ID WCRefineGeneralFunctionViewController::patAutoReplySelectedGroupsSummaryText
             (ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *local_68;
  undefined *local_58;
  cfstringStruct *local_38;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_58 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_count_0269cfe0);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (local_58 == (undefined *)0x0) {
    local_68 = &cf_hQ;
  }
  else {
    local_68 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_68;
  }
  (*(code *)PTR__objc_retain_02578638)();
  if (local_58 != (undefined *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_68;
}

