// momentsSpecialFollowActionText: @ 01c1afc0

/* Function Stack Size: 0x18 bytes */

ID WCRefineMomentsViewController::momentsSpecialFollowActionText_
             (ID param_1,SEL param_2,long_long param_3)

{
  cfstringStruct *local_18;
  
  if (param_3 != 0) {
    if (param_3 == 1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_sQl;
      goto LAB_01c1b078;
    }
    if (param_3 == 2) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf__Q_;
      goto LAB_01c1b078;
    }
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = &::cf_W;
LAB_01c1b078:
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

