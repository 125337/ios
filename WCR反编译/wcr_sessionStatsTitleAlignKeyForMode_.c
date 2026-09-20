// wcr_sessionStatsTitleAlignKeyForMode: @ 0212e618

/* Function Stack Size: 0x18 bytes */

ID WCRefineConfig::wcr_sessionStatsTitleAlignKeyForMode_(ID param_1,SEL param_2,long_long param_3)

{
  cfstringStruct *local_18;
  
  if (param_3 == 1) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_sessionStatsGroupTitleAlign;
  }
  else if (param_3 == 2) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_sessionStatsPrivateTitleAlign;
  }
  else if (param_3 == 3) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_sessionStatsPortraitTitleAlign;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_sessionStatsOverviewTitleAlign;
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

