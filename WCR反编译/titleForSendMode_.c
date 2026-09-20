// titleForSendMode: @ 010ad454

/* Function Stack Size: 0x18 bytes */

ID WCRefineMessageSyncRule::titleForSendMode_(ID param_1,SEL param_2,long_long param_3)

{
  cfstringStruct *local_18;
  
  if (param_3 != 0) {
    if (param_3 == 1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_w_;
      goto LAB_010ad50c;
    }
    if (param_3 == 3) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_NlS;
      goto LAB_010ad50c;
    }
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = &cf_Ne_gw;
LAB_010ad50c:
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

