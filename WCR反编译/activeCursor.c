// activeCursor @ 00f77d90

/* Function Stack Size: 0x10 bytes */

unsigned_long_long WCRefineFriendRelationChecker::activeCursor(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 local_28;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_rechecking_026aca80);
  if ((IVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_cursor_026acaa8);
    local_28 = param_1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_recheckCursor_026acaa0);
    local_28 = param_1;
  }
  return local_28;
}

