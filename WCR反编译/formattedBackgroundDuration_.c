// formattedBackgroundDuration: @ 00eb98a0

/* Function Stack Size: 0x18 bytes */

ID WCRefineBackgroundKeepAlive::formattedBackgroundDuration_(ID param_1,SEL param_2,double param_3)

{
  long lVar1;
  cfstringStruct *local_18;
  
  lVar1 = (long)param_3;
  if (lVar1 < 1) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &::cf_0;
  }
  else {
    local_18 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    if (lVar1 < 0x3c) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (lVar1 < 0xe10) {
      if (lVar1 % 0x3c == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else if (lVar1 < 0x15180) {
      if ((lVar1 % 0xe10) / 0x3c == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else if ((lVar1 % 0x15180) / 0xe10 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

