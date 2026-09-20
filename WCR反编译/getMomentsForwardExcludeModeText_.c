// getMomentsForwardExcludeModeText: @ 01c10fd8

/* Function Stack Size: 0x18 bytes */

ID WCRefineMomentsViewController::getMomentsForwardExcludeModeText_
             (ID param_1,SEL param_2,long_long param_3)

{
  cfstringStruct *local_18;
  
  if (param_3 != 0) {
    if (param_3 == 1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_ch__;
      goto LAB_01c11090;
    }
    if (param_3 == 2) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf__N;
      goto LAB_01c11090;
    }
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = &cf_S_O;
LAB_01c11090:
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

