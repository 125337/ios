// invalidateMemberLookupCaches @ 01aa797c

/* Function Stack Size: 0x10 bytes */

void WCRGroupCreateViewController::invalidateMemberLookupCaches(ID param_1,SEL param_2)

{
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setAllMembersSnapshot__026bdc20);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setMemberIndexByUsername__026bdc28,0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_allowedUsernamesCache_026bdc30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  return;
}

