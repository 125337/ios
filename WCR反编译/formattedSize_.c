// formattedSize: @ 015ae414

/* Function Stack Size: 0x18 bytes */

ID WCRefineVoicePackStore::formattedSize_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  double dVar1;
  undefined *local_18;
  
  local_18 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if (param_3 < 0x400) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__lluB);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    dVar1 = (double)NEON_ucvtf(param_3);
    if (1024.0 <= dVar1 / 1024.0) {
      if (1024.0 <= (dVar1 / 1024.0) / 1024.0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___2fGB);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___1fMB);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___1fKB);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

