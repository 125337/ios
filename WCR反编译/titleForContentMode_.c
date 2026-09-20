// titleForContentMode: @ 014b604c

/* Function Stack Size: 0x18 bytes */

ID WCRefineScheduledTask::titleForContentMode_(ID param_1,SEL param_2,long_long param_3)

{
  cfstringStruct *local_18;
  
  if (param_3 != 0) {
    if (param_3 == 1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_OSN_;
      goto LAB_014b6104;
    }
    if (param_3 == 2) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_ndJ_YU_;
      goto LAB_014b6104;
    }
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = &cf_eW_Q_;
LAB_014b6104:
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

