// cancelSearch @ 01528894

/* Function Stack Size: 0x10 bytes */

void WCRCommonGroupMemberDataLogic::cancelSearch(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_allContacts_026b0350);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setFilteredContacts__026b0348);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  return;
}

