// removeContact: @ 015286ac

/* Function Stack Size: 0x18 bytes */

bool WCRCommonGroupMemberDataLogic::removeContact_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  long local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  if (local_30 == 0) {
    local_11 = 0;
  }
  else {
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_filteredContacts_026b0358);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_allContacts_026b0350);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_allContacts_026b0350);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_allContacts_026b0350);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_11 = IVar2 != IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

