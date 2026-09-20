// titleForMenuStyle: @ 0160b9ec

/* Function Stack Size: 0x18 bytes */

ID WCRSuperFloatProfileStore::titleForMenuStyle_(ID param_1,SEL param_2,long_long param_3)

{
  cfstringStruct *local_18;
  
  if (param_3 == 1) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_s_;
  }
  else if (param_3 == 2) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_5R;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_Gbb_;
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

