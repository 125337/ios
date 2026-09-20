// queueCount @ 00f74074

/* Function Stack Size: 0x10 bytes */

unsigned_long_long WCRefineFriendRelationChecker::queueCount(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_WCRefineFriendRelationStore_026cebd0;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_snap_026aca78);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_queueFromSnapshot__026aca68);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  return (unsigned_long_long)puVar2;
}

