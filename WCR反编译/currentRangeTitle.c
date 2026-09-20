// currentRangeTitle @ 00927ad4

/* Function Stack Size: 0x10 bytes */

ID WCRefineCrashMonitorViewController::currentRangeTitle(ID param_1,SEL param_2)

{
  cfstringStruct *local_18;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectedRange_026a43a0);
  if (param_1 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &::cf___;
  }
  else if (param_1 == 1) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_S_e;
  }
  else if (param_1 == 2) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_N_Y;
  }
  else if (param_1 == 3) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &::cf___;
  }
  else if (param_1 == 4) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__bg;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &::cf___;
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

