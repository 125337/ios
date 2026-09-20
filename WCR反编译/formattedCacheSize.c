// formattedCacheSize @ 010c3864

/* Function Stack Size: 0x10 bytes */

ID WCRefineMomentsMonitor::formattedCacheSize(ID param_1,SEL param_2)

{
  undefined *local_18;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_totalCacheSizeInBytes_026ae758);
  local_18 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if ((long)param_1 < 0x400) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__lldB);
    _objc_retainAutoreleasedReturnValue();
  }
  else if ((long)param_1 < 0x100000) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___1fKB);
    _objc_retainAutoreleasedReturnValue();
  }
  else if ((long)param_1 < 0x40000000) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___1fMB);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___2fGB);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

