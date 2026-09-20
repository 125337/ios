// titleForScope @ 01ab45f0

/* Function Stack Size: 0x10 bytes */

ID WCRGroupListViewController::titleForScope(ID param_1,SEL param_2)

{
  cfstringStruct *local_18;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_manageScope_026bdd90);
  if (param_1 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_yJR__t;
  }
  else if (param_1 == 1) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__JR__t;
  }
  else if (param_1 == 2) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_vQNR__t;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_R__t;
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

