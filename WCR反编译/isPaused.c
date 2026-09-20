// isPaused @ 00f73a8c

/* Function Stack Size: 0x10 bytes */

bool WCRefineFriendRelationChecker::isPaused(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_snap_026aca78);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  FUN_00f73814();
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  return (bool)IVar3;
}

