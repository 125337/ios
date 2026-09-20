// skipSizeSummary: @ 0180d9f8

/* Function Stack Size: 0x18 bytes */

ID WCRefineAutoParseLinkSettingsViewController::skipSizeSummary_
             (ID param_1,SEL param_2,long_long param_3)

{
  cfstringStruct *local_48;
  cfstringStruct *local_38;
  
  if (0 < (long)param_3) {
    local_48 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__ldMB);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_48;
  }
  else {
    local_48 = &cf_NP;
  }
  (*(code *)PTR__objc_retain_02578638)();
  if (0 < (long)param_3) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_48;
}

