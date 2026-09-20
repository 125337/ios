// getSectionCount @ 015280f0

/* Function Stack Size: 0x10 bytes */

unsigned_long_long WCRCommonGroupMemberDataLogic::getSectionCount(ID param_1,SEL param_2)

{
  ID IVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_filteredContacts_026b0358);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  return (long)(int)(uint)(IVar1 != 0);
}

