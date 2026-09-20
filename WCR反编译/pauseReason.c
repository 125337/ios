// pauseReason @ 00f73ca4

/* Function Stack Size: 0x10 bytes */

ID WCRefineFriendRelationChecker::pauseReason(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_snap_026aca78);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  FUN_00f73814();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_autoreleaseReturnValue();
  return IVar2;
}

