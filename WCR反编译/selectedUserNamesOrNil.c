// selectedUserNamesOrNil @ 01a00dc0

/* Function Stack Size: 0x10 bytes */

ID WCRefineFriendRelationResultListViewController::selectedUserNamesOrNil(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined8 local_18;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectedUserNames_026bb538);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if (IVar2 == 0) {
    local_18 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectedUserNames_026bb538);
    _objc_retainAutoreleasedReturnValue();
    local_18 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  _objc_autoreleaseReturnValue();
  return local_18;
}

