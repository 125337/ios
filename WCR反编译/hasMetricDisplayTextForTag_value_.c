// hasMetricDisplayTextForTag:value: @ 01ae68a0

/* Function Stack Size: 0x20 bytes */

ID WCRefineHomeAvatarStripSettingsViewController::hasMetricDisplayTextForTag_value_
             (ID param_1,SEL param_2,long_long param_3,double param_4)

{
  cfstringStruct *local_18;
  
  if (((param_3 != 0x839) && (param_3 != 0x83a)) || (0.0 < param_4)) {
    local_18 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___0f);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &::cf__;
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

