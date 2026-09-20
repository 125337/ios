// unfilteredSnapshotSignature @ 01524ae4

/* Function Stack Size: 0x10 bytes */

ID WCRefineTelegramGroupingStore::unfilteredSnapshotSignature(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  cfstringStruct *local_18;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_hasUnfilteredSnapshot_026a8210);
  if ((IVar1 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &::cf___;
  }
  else {
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_lastUnfilteredTop_026b0208);
    _objc_retainAutoreleasedReturnValue();
    FUN_01524d9c();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_lastUnfilteredAllTop_026a8220);
    _objc_retainAutoreleasedReturnValue();
    FUN_01524d9c();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_lastUnfilteredNormal_026a8230);
    _objc_retainAutoreleasedReturnValue();
    FUN_01524d9c();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    local_18 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_lastUnfilteredTop_026b0208);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_lastUnfilteredAllTop_026a8220);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_lastUnfilteredNormal_026a8230);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_stringWithFormat__0269cca8,&cf__lu__lu__lu__lu);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(param_1);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

