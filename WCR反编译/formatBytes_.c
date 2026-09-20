// formatBytes: @ 010163ac

/* Function Stack Size: 0x18 bytes */

ID WCRefineLinkParser::formatBytes_(ID param_1,SEL param_2,long_long param_3)

{
  double dVar1;
  cfstringStruct *local_18;
  
  if ((long)param_3 < 1) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__Y__gw;
  }
  else {
    dVar1 = (double)(long)param_3;
    local_18 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    if (1024.0 <= dVar1) {
      if (1048576.0 <= dVar1) {
        if (1073741824.0 <= dVar1) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___2fGB
                    );
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___2fMB
                    );
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___1fKB);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__lldB);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

