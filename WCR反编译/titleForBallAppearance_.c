// titleForBallAppearance: @ 0160cbc4

/* Function Stack Size: 0x18 bytes */

ID WCRSuperFloatProfileStore::titleForBallAppearance_(ID param_1,SEL param_2,long_long param_3)

{
  cfstringStruct *local_18;
  
  if (param_3 == 1) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__e;
  }
  else if (param_3 == 2) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_N_;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &::cf__;
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

