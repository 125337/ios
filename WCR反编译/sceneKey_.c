// sceneKey: @ 01c4872c

/* Function Stack Size: 0x18 bytes */

ID WCRefineNameplateSpecialUserDetailViewController::sceneKey_
             (ID param_1,SEL param_2,long_long param_3)

{
  cfstringStruct *local_18;
  
  if (param_3 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_home;
  }
  else if (param_3 == 1) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_chat;
  }
  else if (param_3 == 2) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_contacts;
  }
  else if (param_3 == 3) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_moments;
  }
  else if (param_3 == 4) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_chatTop;
  }
  else if (param_3 == 5) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_homeOnline;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_home;
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

