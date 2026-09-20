// searchIndexDirectoryPath @ 014c44bc

/* Function Stack Size: 0x10 bytes */

ID WCRefineSearchManager::searchIndexDirectoryPath(ID param_1,SEL param_2)

{
  ID IVar1;
  
  _NSHomeDirectory();
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_autoreleaseReturnValue();
  return IVar1;
}

