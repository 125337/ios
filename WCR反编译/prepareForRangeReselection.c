// prepareForRangeReselection @ 00f75bd4

/* Function Stack Size: 0x10 bytes */

void WCRefineFriendRelationChecker::prepareForRangeReselection(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_running_026aca70);
  if ((IVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_setPendingUserNames__026acad8,*(undefined8 *)PTR____NSArray0___02578280
              );
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setPendingSourceTitle__026acae0,&cf__gb);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setHasPendingRangeReplacement__026acae8,1);
  }
  return;
}

