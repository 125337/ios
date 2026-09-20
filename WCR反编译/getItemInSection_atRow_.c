// getItemInSection:atRow: @ 01528244

/* Function Stack Size: 0x20 bytes */

ID WCRCommonGroupMemberDataLogic::getItemInSection_atRow_
             (ID param_1,SEL param_2,unsigned_long_long param_3,unsigned_long_long param_4)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  undefined8 local_18;
  
  bVar1 = true;
  if (param_3 == 0) {
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_filteredContacts_026b0358);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = IVar3 <= param_4;
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  if (bVar1) {
    local_18 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_filteredContacts_026b0358);
    _objc_retainAutoreleasedReturnValue();
    local_18 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  _objc_autoreleaseReturnValue();
  return local_18;
}

