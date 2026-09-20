// normalCount @ 00f74218

/* Function Stack Size: 0x10 bytes */

unsigned_long_long WCRefineFriendRelationChecker::normalCount(ID param_1,SEL param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_WCRefineFriendRelationStore_026cebd0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineFriendRelationStore_026cebd0,PTR_s_countWithVerdict__026aca98,
             _kWCRFriendRelationVerdictNormal);
  return (unsigned_long_long)puVar1;
}

