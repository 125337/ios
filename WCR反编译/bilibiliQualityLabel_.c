// bilibiliQualityLabel: @ 01050984

/* Function Stack Size: 0x18 bytes */

ID WCRefineLinkParser::bilibiliQualityLabel_(ID param_1,SEL param_2,long_long param_3)

{
  cfstringStruct *local_18;
  
  if ((long)param_3 < 0x50) {
    if ((long)param_3 < 0x40) {
      if ((long)param_3 < 0x20) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf_360p;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf_480p;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_720p;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_1080p;
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

