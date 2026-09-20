// sliderDisplayTextForKind:value: @ 019dac58

/* Function Stack Size: 0x20 bytes */

ID WCRefineFontBeautifyViewController::sliderDisplayTextForKind_value_
             (ID param_1,SEL param_2,long_long param_3,double param_4)

{
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
  if (param_3 == 0x7d1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___0f__);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 0x7d2) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___ld);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 0x7d3) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___1f);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 0x7d4) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___1f);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &::cf___;
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

