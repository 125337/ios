// searchIndexFilePath @ 014c452c

/* Function Stack Size: 0x10 bytes */

ID WCRefineSearchManager::searchIndexFilePath(ID param_1,SEL param_2)

{
  ID IVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_searchIndexDirectoryPath_026af630);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_autoreleaseReturnValue();
  return IVar1;
}

