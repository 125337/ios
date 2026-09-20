// customScope @ 01ab46e8

/* Function Stack Size: 0x10 bytes */

unsigned_long_long WCRGroupListViewController::customScope(ID param_1,SEL param_2)

{
  undefined8 local_18;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_manageScope_026bdd90);
  if (param_1 == 0) {
    local_18 = 1;
  }
  else if (param_1 == 1) {
    local_18 = 2;
  }
  else if (param_1 == 2) {
    local_18 = 0x1f;
  }
  else {
    local_18 = 0;
  }
  return local_18;
}

