// floatingMetricDisplayTextForTag:value: @ 019c06c8

/* Function Stack Size: 0x20 bytes */

ID WCRefineFloatingTabBarSettingsViewController::floatingMetricDisplayTextForTag_value_
             (ID param_1,SEL param_2,long_long param_3,double param_4)

{
  undefined *local_18;
  
  local_18 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if (param_3 == 4) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___1f);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (((param_3 == 5) || (param_3 == 6)) || (param_3 == 7)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___0f__);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___0f);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

