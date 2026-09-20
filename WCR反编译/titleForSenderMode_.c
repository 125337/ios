// titleForSenderMode: @ 010ad358

/* Function Stack Size: 0x18 bytes */

ID WCRefineMessageSyncRule::titleForSenderMode_(ID param_1,SEL param_2,long_long param_3)

{
  cfstringStruct *local_18;
  
  if (param_3 != 0) {
    if (param_3 == 1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_N_;
      goto LAB_010ad444;
    }
    if (param_3 == 2) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_c__SS_T_;
      goto LAB_010ad444;
    }
    if (param_3 == 3) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_hQ_SN_T_;
      goto LAB_010ad444;
    }
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = &cf_hQ_S;
LAB_010ad444:
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

