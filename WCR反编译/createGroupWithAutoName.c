// createGroupWithAutoName @ 010897d8

/* Function Stack Size: 0x10 bytes */

ID WCRefineLocalEmoticonStore::createGroupWithAutoName(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_nextAutoGroupName_026a1068);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_createPackNamed_error__026a3e00,IVar1,0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  _objc_autoreleaseReturnValue();
  return param_1;
}

