// wcr_sessionStatsBoardPagesKeyForMode: @ 021327f4

/* Function Stack Size: 0x18 bytes */

ID WCRefineConfig::wcr_sessionStatsBoardPagesKeyForMode_(ID param_1,SEL param_2,long_long param_3)

{
  cfstringStruct *local_18;
  
  if (param_3 == 1) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_sessionStatsGroupBoardPages;
  }
  else if (param_3 == 2) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_sessionStatsPrivateBoardPages;
  }
  else if (param_3 == 3) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_sessionStatsPortraitBoardPages;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_sessionStatsBoardPages;
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

